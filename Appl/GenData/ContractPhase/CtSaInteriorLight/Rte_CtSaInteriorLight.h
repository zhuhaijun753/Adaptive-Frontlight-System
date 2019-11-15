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
 *          File:  Rte_CtSaInteriorLight.h
 *        Config:  D:/usr/usage/Presentations/MSR_Training/MSR_Training_AiP4/MSR_Exercises_AiP4/_E1_SoftwareComponents/MyECU.dpa
 *     SW-C Type:  CtSaInteriorLight
 *  Generated at:  Thu Jun 30 15:29:47 2016
 *
 *     Generator:  MICROSAR RTE Generator Version 4.9.0
 *                 RTE Core Version 1.9.0
 *       License:  Unlimited license CBD0000000 for N/A
 *
 *   Description:  Application header file for SW-C <CtSaInteriorLight> (Contract Phase)
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_CTSAINTERIORLIGHT_H
# define _RTE_CTSAINTERIORLIGHT_H

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

# include "Rte_CtSaInteriorLight_Type.h"
# include "Rte_DataHandleType.h"


/**********************************************************************************************************************
 * Component Data Structures and Port Data Structures
 *********************************************************************************************************************/

struct Rte_PDS_CtSaInteriorLight_PiLightState_R
{
  P2FUNC(Std_ReturnType, RTE_CODE, Read_DeLightState) (P2VAR(IdtLightState, AUTOMATIC, RTE_CTSAINTERIORLIGHT_APPL_VAR)); /* PRQA S 0850 */ /* MD_MSR_19.8 */
};

struct Rte_CDS_CtSaInteriorLight
{
  /* Port API section */
  struct Rte_PDS_CtSaInteriorLight_PiLightState_R PpLightState;
  /* Vendor specific section */
};

# define RTE_START_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern CONSTP2CONST(struct Rte_CDS_CtSaInteriorLight, RTE_CONST, RTE_CONST) Rte_Inst_CtSaInteriorLight; /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

typedef P2CONST(struct Rte_CDS_CtSaInteriorLight, TYPEDEF, RTE_CONST) Rte_Instance;


/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

# define Rte_InitValue_PpLightState_DeLightState (0U)



/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Read_PpLightState_DeLightState(self, data) ((self)->PpLightState.Read_DeLightState(data)) /* PRQA S 3453 */ /* MD_MSR_19.7 */




# define CtSaInteriorLight_START_SEC_CODE
# include "CtSaInteriorLight_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 *
 * Runnable Entity Name: RCtSaInteriorLightSwitchLight
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on DataReceivedEvent for DataElementPrototype <DeLightState> of PortPrototype <PpLightState>
 *
 **********************************************************************************************************************
 *
 * Input Interfaces:
 * =================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Read_PpLightState_DeLightState(Rte_Instance self, IdtLightState *data)
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_RCtSaInteriorLightSwitchLight RCtSaInteriorLightSwitchLight
FUNC(void, CtSaInteriorLight_CODE) RCtSaInteriorLightSwitchLight(Rte_Instance self); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define CtSaInteriorLight_STOP_SEC_CODE
# include "CtSaInteriorLight_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* _RTE_CTSAINTERIORLIGHT_H */
