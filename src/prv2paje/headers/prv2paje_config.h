/*****************************************************************************\
 *                        ANALYSIS PERFORMANCE TOOLS                         *
 *                                 prvreader                                 *
 *      Libraries and Tools for reading and converting Paraver traces        *
 *****************************************************************************
 *     ___     This library is free software; you can redistribute it and/or *
 *    /  __         modify it under the terms of the GNU LGPL as published   *
 *   /  /  _____    by the Free Software Foundation; either version 3        *
 *  /  /  /     \   of the License, or (at your option) any later version.   *
 * (  (  ( B S C )                                                           *
 *  \  \  \_____/   This library is distributed in hope that it will be      *
 *   \  \__         useful but WITHOUT ANY WARRANTY; without even the        *
 *    \___          implied warranty of MERCHANTABILITY or FITNESS FOR A     *
 *                  PARTICULAR PURPOSE. See the GNU LGPL for more details.   *
 *                                                                           *
 * You should have received a copy of the GNU Lesser General Public License  *
 * along with this library; if not, write to the Free Software Foundation,   *
 * Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA          *
 * The GNU LEsser General Public License is contained in the file COPYING.   *
 *                                 ---------                                 *
 *   Barcelona Supercomputing Center - Centro Nacional de Supercomputacion   *
\*****************************************************************************/

#ifndef PRV2PAJE_CONFIG_H
#define PRV2PAJE_CONFIG_H

#ifndef __BUILD_VERSION__
#define __BUILD_VERSION__ "Unknown"
#endif

#define PAJE_EXT                                    "paje"

#define PAJE_CONTAINER_DEF_NAME_ROOT                "ROOT"
#define PAJE_CONTAINER_DEF_NAME_NODE                "NODE"
#define PAJE_CONTAINER_DEF_NAME_CPU                 "CPU"
#define PAJE_CONTAINER_DEF_NAME_APP                 "APPLICATION"
#define PAJE_CONTAINER_DEF_NAME_TASK                "TASK"
#define PAJE_CONTAINER_DEF_NAME_THREAD              "THREAD"

#define PAJE_CONTAINER_DEF_ALIAS_ROOT               PAJE_CONTAINER_DEF_NAME_ROOT
#define PAJE_CONTAINER_DEF_ALIAS_NODE               PAJE_CONTAINER_DEF_NAME_NODE
#define PAJE_CONTAINER_DEF_ALIAS_CPU                PAJE_CONTAINER_DEF_NAME_CPU
#define PAJE_CONTAINER_DEF_ALIAS_APP                PAJE_CONTAINER_DEF_NAME_APP
#define PAJE_CONTAINER_DEF_ALIAS_TASK               PAJE_CONTAINER_DEF_NAME_TASK
#define PAJE_CONTAINER_DEF_ALIAS_THREAD             PAJE_CONTAINER_DEF_NAME_THREAD

#define PAJE_PRVSTATE_NAME                          "STATE"
#define PAJE_PRVCOMMUNICATION_HW_THREAD_NAME        "HW-COM-THREAD-"
#define PAJE_PRVCOMMUNICATION_HW_TASK_NAME          "HW-COM-TASK"
#define PAJE_PRVCOMMUNICATION_HW_APP_NAME           "HW-COM-APP"
#define PAJE_PRVCOMMUNICATION_HW_CPU_NAME           "HW-COM-CPU"
#define PAJE_PRVCOMMUNICATION_HW_ROOT_NAME          "HW-COM-ROOT"
#define PAJE_PRVCOMMUNICATION_SW_THREAD_NAME        "SW-COM-THREAD"
#define PAJE_PRVCOMMUNICATION_SW_TASK_NAME          "SW-COM-TASK"
#define PAJE_PRVCOMMUNICATION_SW_APP_NAME           "SW-COM-APP"
#define PAJE_PRVCOMMUNICATION_SW_CPU_NAME           "SW-COM-CPU"
#define PAJE_PRVCOMMUNICATION_SW_ROOT_NAME          "SW-COM-ROOT"

#define PAJE_PRVSTATE_ALIAS                         PAJE_PRVSTATE_NAME
#define PAJE_PRVCOMMUNICATION_HW_THREAD_ALIAS       PAJE_PRVCOMMUNICATION_HW_THREAD_NAME
#define PAJE_PRVCOMMUNICATION_HW_TASK_ALIAS         PAJE_PRVCOMMUNICATION_HW_TASK_NAME
#define PAJE_PRVCOMMUNICATION_HW_APP_ALIAS          PAJE_PRVCOMMUNICATION_HW_APP_NAME
#define PAJE_PRVCOMMUNICATION_HW_CPU_ALIAS          PAJE_PRVCOMMUNICATION_HW_CPU_NAME
#define PAJE_PRVCOMMUNICATION_HW_ROOT_ALIAS         PAJE_PRVCOMMUNICATION_HW_ROOT_NAME
#define PAJE_PRVCOMMUNICATION_SW_THREAD_ALIAS       PAJE_PRVCOMMUNICATION_SW_THREAD_NAME
#define PAJE_PRVCOMMUNICATION_SW_TASK_ALIAS         PAJE_PRVCOMMUNICATION_SW_TASK_NAME
#define PAJE_PRVCOMMUNICATION_SW_APP_ALIAS          PAJE_PRVCOMMUNICATION_SW_APP_NAME
#define PAJE_PRVCOMMUNICATION_SW_CPU_ALIAS          PAJE_PRVCOMMUNICATION_SW_CPU_NAME
#define PAJE_PRVCOMMUNICATION_SW_ROOT_ALIAS         PAJE_PRVCOMMUNICATION_SW_ROOT_NAME

#define PAJE_PRVCOMMUNICATION_THREAD_COLOR          "1.0 0.0 0.0"
#define PAJE_PRVCOMMUNICATION_TASK_COLOR            "0.0 1.0 0.0"
#define PAJE_PRVCOMMUNICATION_APP_COLOR             "0.0 0.0 1.0"
#define PAJE_PRVCOMMUNICATION_CPU_COLOR             "1.0 0.0 1.0"

#define PAJE_CONTAINER_NAME_ROOT                    "root"
#define PAJE_CONTAINER_NAME_NODE_PREFIX             "node-"
#define PAJE_CONTAINER_NAME_CPU_PREFIX              "cpu-"
#define PAJE_CONTAINER_NAME_APP_PREFIX              "app-"
#define PAJE_CONTAINER_NAME_TASK_PREFIX             "task-"
#define PAJE_CONTAINER_NAME_THREAD_PREFIX           "thread-"

#define PAJE_CONTAINER_ALIAS_ROOT                   PAJE_CONTAINER_NAME_ROOT
#define PAJE_CONTAINER_ALIAS_NODE_PREFIX            PAJE_CONTAINER_NAME_NODE_PREFIX
#define PAJE_CONTAINER_ALIAS_CPU_PREFIX             PAJE_CONTAINER_NAME_CPU_PREFIX

#define PAJE_COMMUNICATION_KEY_PREFIX               "key-"

#define TIME_DIVIDER_SECONDS                        1.0
#define TIME_DIVIDER_MILISECONDS                    1000.0
#define TIME_DIVIDER_MICROSECONDS                   1000000.0
#define TIME_DIVIDER_NANOSECONDS                    1000000000.0
#define TIME_DIVIDER_MINUTES                        (1.0/60.0)
#define TIME_DIVIDER_HOURS                          (1.0/3600.0)

#define RETURN_OK                                   0
#define RETURN_ERR_PRV                              1
#define RETURN_ERR_PCF                              2
#define RETURN_ERR_PAJE                             3

#define FILTER_TYPES                                "#TYPES"
#define FILTER_EVENT_TYPES                          "#EVENT_TYPES"

#endif // PRV2PAJE_CONFIG_H
