/*
 * Copyright (c) 2003 Apple Computer, Inc. All rights reserved.
 *
 * @APPLE_LICENSE_HEADER_START@
 * 
 * Copyright (c) 1999-2003 Apple Computer, Inc.  All Rights Reserved.
 * 
 * This file contains Original Code and/or Modifications of Original Code
 * as defined in and that are subject to the Apple Public Source License
 * Version 2.0 (the 'License'). You may not use this file except in
 * compliance with the License. Please obtain a copy of the License at
 * http://www.opensource.apple.com/apsl/ and read it before using this
 * file.
 * 
 * The Original Code and all software distributed under the License are
 * distributed on an 'AS IS' basis, WITHOUT WARRANTY OF ANY KIND, EITHER
 * EXPRESS OR IMPLIED, AND APPLE HEREBY DISCLAIMS ALL SUCH WARRANTIES,
 * INCLUDING WITHOUT LIMITATION, ANY WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE, QUIET ENJOYMENT OR NON-INFRINGEMENT.
 * Please see the License for the specific language governing rights and
 * limitations under the License.
 * 
 * @APPLE_LICENSE_HEADER_END@
 */
/*	CFUniCharPriv.h
	Copyright (c) 1998-2003, Apple, Inc. All rights reserved.
*/

#if !defined __UCHAR_PRIVATE__
#define __UCHAR_PRIVATE__ 1

#include <CoreFoundation/CFBase.h>
#include "CFUniChar.h"

#define kCFUniCharRecursiveDecompositionFlag	(1 << 30)
#define kCFUniCharNonBmpFlag			(1 << 31)
#define CFUniCharConvertCountToFlag(count)	((count & 0x1F) << 24)
#define CFUniCharConvertFlagToCount(flag)	((flag >> 24) & 0x1F)

enum {
    kCFUniCharCanonicalDecompMapping = (kCFUniCharCaseFold + 1),
    kCFUniCharCanonicalPrecompMapping,
    kCFUniCharCompatibilityDecompMapping
};

CF_EXPORT const void *CFUniCharGetMappingData(uint32_t type);

#endif /* __UCHAR_PRIVATE__ */
