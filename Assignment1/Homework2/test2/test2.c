#include"stdio.h"
#include <stdbool.h>
typedef struct{


	/* PDU identifier assigned by PDU Router. Used by communication interface
	and transport protocol modules for confirmation
	(PduR_<Lo>TxConfirmation) and for TriggerTransmit
	(PduR_<Lo>TriggerTransmit).*/
	unsigned char PduRDestPduHandleId;


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

typedef struct{
	/* This container is a subcontainer of PduRRoutingPath and
	specifies one destination for the PDU to be routed. */
	PduRDestPdu_Type PduRDestPdu;
	/*This container is a subcontainer of PduRRoutingPath and specifies the
	source of the PDU to be routed. */
	PduRSrcPdu_Type PduRSrcPdu;
}PduRRoutingPath_Type;

/********************************************************************************************************************************
Name:                               PduRRoutingPaths_Type
Type:                                Structure
Description:                         This container is a subcontainer of PduRRoutingTable and specifies
                                     the routing path of a PDU.
*********************************************************************************************************************************/
typedef struct{
	 PduRRoutingPath_Type  PduRRoutingPath[2];
}PduRRoutingPaths_Type;
/********************************************************************************************************************************
Name:                               PduRRoutingPaths_Type
Type:                                Structure
Description:                         This container is a subcontainer of PduRRoutingTable and specifies
                                     the routing path of a PDU.
*********************************************************************************************************************************/

typedef struct{
	PduRRoutingPaths_Type PduRRoutingPaths;
}PduR_PBConfigType;


PduR_PBConfigType PduR =
{
	.PduRRoutingPaths=
	{
			.PduRRoutingPath=
				{
					{//from com to tp
						.PduRDestPdu=
						{


								.PduRDestPduHandleId=0,


						},
						.PduRSrcPdu=
						{
							.PduRSourcePduHandleId=0,
							.PduRSrcPduUpTxConf=true
						}
					},
					{//from tp to com
						.PduRDestPdu=
						{


								.PduRDestPduHandleId=1,


						},
						.PduRSrcPdu=
						{
								.PduRSourcePduHandleId=1,
								.PduRSrcPduUpTxConf=true
						}
					}
				}


	}
};
int main()
{printf("%d",PduR.PduRRoutingPaths.PduRRoutingPath[0].PduRDestPdu.PduRDestPduHandleId);
	printf("%d",PduR.PduRRoutingPaths.PduRRoutingPath[1].PduRSrcPdu.PduRSourcePduHandleId);
	}

