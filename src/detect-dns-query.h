/* Copyright (C) 2013 Open Information Security Foundation
 *
 * You can copy, redistribute or modify this Program under the terms of
 * the GNU General Public License version 2 as published by the Free
 * Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * version 2 along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA
 * 02110-1301, USA.
 */

/**
 * \file
 *
 * \author Victor Julien <victor@inliniac.net>
 */

#ifndef __DETECT_DNS_QUERY_H__
#define __DETECT_DNS_QUERY_H__

#include "app-layer-dns-common.h"

void DetectDnsQueryRegister (void);
uint32_t DetectDnsQueryInspectMpm(DetectEngineThreadCtx *det_ctx, Flow *f,
                                  DNSState *dns_state, uint8_t flags);

#endif /* __DETECT_DNS_QUERY_H__ */
