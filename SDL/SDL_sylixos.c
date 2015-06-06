/*********************************************************************************************************
**
**                                    中国软件开源组织
**
**                                   嵌入式实时操作系统
**
**                                SylixOS(TM)  LW : long wing
**
**                               Copyright All Rights Reserved
**
**--------------文件信息--------------------------------------------------------------------------------
**
** 文   件   名: SDL_sylixos.c
**
** 创   建   人: Han.Hui (韩辉)
**
** 文件创建日期: 2011 年 05 月 09 日
**
** 描        述: 操作系统 SDL 接口(主要是视频接口)
*********************************************************************************************************/
#include "SDL_sylixos.h"
/*********************************************************************************************************
  全局变量
*********************************************************************************************************/
SDL_VideoDevice     *(*_G_pfuncSDLVideoCreateDevice)() = LW_NULL;
/*********************************************************************************************************
** 函数名称: SDL_VideoDrvInstall
** 功能描述: 安装 sylixos video 驱动
** 输　入  : pfuncCreateDevice         create sdl video device function
** 输　出  : NONE
** 全局变量:
** 调用模块:
*********************************************************************************************************/
void  SDL_VideoDrvInstall (SDL_VideoDevice *(*pfuncCreateDevice)(int))
{
    _G_pfuncSDLVideoCreateDevice = pfuncCreateDevice;
}
/*********************************************************************************************************
  END
*********************************************************************************************************/

