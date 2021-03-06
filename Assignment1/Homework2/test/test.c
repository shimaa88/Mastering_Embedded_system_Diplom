#include"stdio.h"
#include <stdbool.h>

typedef enum{
	/* The PDU Router module shall call the transmit function in the
	destination module and not buffer the I-PDU */
	PDUR_DIRECT,

	/* The PDU Router module shall call the transmit function in the destination module. The destination
	module will request the I-PDU using the triggerTransmit function. The IPDU is shall be buffered. */
	PDUR_TRIGGERTRANSMIT
}PduRDestPduDataProvision_Type;


/********************************************************************************************************************************
Name:                                PduRDestPdu
Type:                                Structure
Description:           	This container is a subcontainer of PduRRoutingPath and specifies one
						destination for the PDU to be routed.
*********************************************************************************************************************************/
typedef struct{
	/* Specifies how data are provided: direct (as part of the Transmit call) or via
	the TriggerTransmit callback function. Only required for non-TP gatewayed I-PDUs. */
	PduRDestPduDataProvision_Type PduRDestPduDataProvision;

	/* PDU identifier assigned by PDU Router. Used by communication interface
	and transport protocol modules for confirmation
	(PduR_<Lo>TxConfirmation) and for TriggerTransmit
	(PduR_<Lo>TriggerTransmit).*/
	unsigned char PduRDestPduHandleId;

	/* This parameter is only for communication interfaces. Transport protocol
	modules will always call the TxConfirmation function.
	If set the destination communication interface module will call the
	TxConfirmation. However the TxConfirmation may be not called due to
	error. So the PduR shall not block until the TxConfirmation is called.
	One background for this parameter is for the PduR to know when all
	modules have confirmed a multicast operation.*/
	bool PduRTransmissionConfirmation;
}PduRDestPdu_Type;

/********************************************************************************************************************************
Name:                                PduRSrcPdu
Type:                                Structure
Description:           	This container is a subcontainer of PduRRoutingPath and specifies the
						source of the PDU to be routed.
*********************************************************************************************************************************/
typedef struct{
	/* PDU identifier assigned by PDU Router. */
	unsigned char PduRSourcePduHandleId;

	/* When enabled, the TxConfirmation will be forwarded to the upper layer.
	Prerequisites: Lower layer and upper layer support TxConfirmation. */
	bool PduRSrcPduUpTxConf;
}PduRSrcPdu_Type;

/********************************************************************************************************************************
Name:                                PduRRoutingPath
Type:                                Structure
Description:           	This container is a subcontainer of PduRRoutingTable and specifies the
						routing path of a PDU.
*********************************************************************************************************************************/
typedef struct{
	/* This container is a subcontainer of PduRRoutingPath and
	specifies one destination for the PDU to be routed. */
	PduRDestPdu_Type PduRDestPdu[1];
	/*This container is a subcontainer of PduRRoutingPath and specifies the
	source of the PDU to be routed. */
	PduRSrcPdu_Type PduRSrcPdu;
}PduRRoutingPath_Type;

/********************************************************************************************************************************
Name:                                PduRRoutingTable
Type:                                Structure
Description:           	Represents one container of routing paths
*********************************************************************************************************************************/
typedef struct{
	PduRRoutingPath_Type PduRRoutingPath[2];
}PduRRoutingTable_Type;

/********************************************************************************************************************************
Name:                                PduRRoutingTables
Type:                                Structure
Description:           	Represents one table of routing paths.
						This routing table allows multiple configurations that can be used to create
						several routing tables in the same configuration. This is mainly used for
						post-build (e.g. post-build selectable) but can be used by pre-compile and
						link-time for variant handling.
*********************************************************************************************************************************/
typedef struct{
	PduRRoutingTable_Type PduRRoutingTable[1];
}PduRRoutingTables_Type;

/********************************************************************************************************************************
Name:                                PduR_PBConfigType
Type:                                Structure
Description:           	Configuration of the PduR (PDU Router) module.
*********************************************************************************************************************************/
typedef struct{
	PduRRoutingTables_Type PduRRoutingTables;
}PduR_PBConfigType;

PduR_PBConfigType PduR =
{
	.PduRRoutingTables=
	{
		.PduRRoutingTable=
		{
			{
				.PduRRoutingPath=
				{
					{
						.PduRDestPdu=
						{
							{
								.PduRDestPduDataProvision=PDUR_DIRECT,
								.PduRDestPduHandleId=0,
								.PduRTransmissionConfirmation= true
							}
						},
						.PduRSrcPdu=
						{
							.PduRSourcePduHandleId=0,
							.PduRSrcPduUpTxConf=true
						}
					},
					{
						.PduRDestPdu=
						{
							{
								.PduRDestPduDataProvision=PDUR_DIRECT,
								.PduRDestPduHandleId=1,
								.PduRTransmissionConfirmation= true
							}
						},
						.PduRSrcPdu=
						{
								.PduRSourcePduHandleId=1,
								.PduRSrcPduUpTxConf=true
						}
					}
				}
			}
		}
	}
};
int main()
{
	if (PduR.PduRRoutingTables.PduRRoutingTable[0].PduRRoutingPath[0].PduRSrcPdu.PduRSourcePduHandleId == 1)
printf("lolo");
}
