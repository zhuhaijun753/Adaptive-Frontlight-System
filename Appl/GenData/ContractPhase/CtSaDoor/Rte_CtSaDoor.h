/**********************************************************************************************************************
 *  COPYRIGHT
 *  -------------------------------------------------------------------------------------------------------------------
 *
 *                This software is copyright protected and proprietary to Vector Informatik GmbH.
 *                Vector Informatik GmbH grants to you only those rights as set out in the license conditions.
 *                All other rights remain with Vector Informatik GmbH.
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  Rte_CtSaDoor.h
 *        Config:  D:/usr/usage/Presentations/MSR_Training/MSR_Training_AiP4/MSR_Exercises_AiP4/_E1_SoftwareComponents/MyECU.dpa
 *     SW-C Type:  CtSaDoor
 *  Generated at:  Thu Jun 30 15:29:46 2016
 *
 *     Generator:  MICROSAR RTE Generator Version 4.9.0
 *                 RTE Core Version 1.9.0
 *       License:  Unlimited license CBD0000000 for N/A
 *
 *   Description:  Application header file for SW-C <CtSaDoor> (Contract Phase)
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_CTSADOOR_H
# define _RTE_CTSADOOR_H

# ifdef RTE_APPLICATION_HEADER_FILE
#  error Multiple application header files included.
# endif
# define RTE_APPLICATION_HEADER_FILE
# ifndef RTE_PTR2ARRAYBASETYPE_PASSING
#  define RTE_PTR2ARRAYBASETYPE_PASSING
# endif

# ifdef __cplusplus
extern "C"
{
# endif /* __cplusplus */

# define RTE_MULTI_INST_API

/* include files */

# include "Rte_CtSaDoor_Type.h"
# include "Rte_DataHandleType.h"


/**********************************************************************************************************************
 * Component Data Structures and Port Data Structures
 *********************************************************************************************************************/

struct Rte_PDS_CtSaDoor_PiDoorState_P
{
  P2FUNC(Std_ReturnType, RTE_CODE, Write_DeDoorState) (IdtDoorState); /* PRQA S 0850 */ /* MD_MSR_19.8 */
};

struct Rte_CDS_CtSaDoor
{
  /* Port API section */
  struct Rte_PDS_CtSaDoor_PiDoorState_P PpDoorState;
  /* Vendor specific section */
};

# define RTE_START_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern CONSTP2CONST(struct Rte_CDS_CtSaDoor, RTE_CONST, RTE_CONST) Rte_Inst_CtSaDoor; /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

typedef P2CONST(struct Rte_CDS_CtSaDoor, TYPEDEF, RTE_CONST) Rte_Instance;


/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

# define Rte_InitValue_PpDoorState_DeDoorState (0U)



/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Write_PpDoorState_DeDoorState(self, data) ((self)->PpDoorState.Write_DeDoorState(data)) /* PRQA S 3453 */ /* MD_MSR_19.7 */




# define CtSaDoor_START_SEC_CODE
# include "CtSaDoor_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 *
 * Runnable Entity Name: RCtSaDoorReadDoor
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on TimingEvent every 200ms
 *
 **********************************************************************************************************************
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_PpDoorState_DeDoorState(Rte_Instance self, IdtDoorState data)
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_RCtSaDoorReadDoor RCtSaDoorReadDoor
FUNC(void, CtSaDoor_CODE) RCtSaDoorReadDoor(Rte_Instance self); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define CtSaDoor_STOP_SEC_CODE
# include "CtSaDoor_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* _RTE_CTSADOOR_H */
