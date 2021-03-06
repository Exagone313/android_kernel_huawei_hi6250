

/*****************************************************************************
  1 其他头文件包含
*****************************************************************************/



#ifndef __PWRCTRL_SLEEPMGR_H__
#define __PWRCTRL_SLEEPMGR_H__

#ifdef __cplusplus
#if __cplusplus
extern "C" {
#endif
#endif

#include <pwrctrl_multi_sleep.h>
#include <pwrctrl_multi_memcfg.h>

/*****************************************************************************
  2 宏定义
*****************************************************************************/


/*****************************************************************************
  3 枚举定义
*****************************************************************************/


/*****************************************************************************
  4 消息头定义
*****************************************************************************/


/*****************************************************************************
  5 消息定义
*****************************************************************************/


/*****************************************************************************
  6 STRUCT定义
*****************************************************************************/
#ifdef WIN32
typedef struct platform_suspend_ops
{
    u32_t voteEn;                   /*stub*/
} platform_suspend_ops;

#endif


/*****************************************************************************
  7 UNION定义
*****************************************************************************/

/*****************************************************************************
  8 OTHERS定义
*****************************************************************************/


/*****************************************************************************
  9 全局变量声明
*****************************************************************************/
#if defined (WIN32) || defined (GENERIC_PROJECT)
void (*pm_idle)(void);
#endif
/*****************************************************************************
  10 函数声明
*****************************************************************************/
extern s32_t pwrctrl_sleep_mgr_sleep_init( void_t);
extern s32_t pwrctrl_sleep_mgr_tele_vote_lock(PWC_TELE_SLEEP_MODE_ID_E teleModeId, PWC_TELE_SLEEP_CLIENT_ID_E enClientId);
extern s32_t pwrctrl_sleep_mgr_tele_vote_unlock(PWC_TELE_SLEEP_MODE_ID_E teleModeId, PWC_TELE_SLEEP_CLIENT_ID_E enClientId);
extern void_t pwrctrl_arm_sleep(void_t);









#ifdef __cplusplus
    #if __cplusplus
        }
    #endif
#endif

#endif /* end of bsp_pwc_sleepmgr.h */
