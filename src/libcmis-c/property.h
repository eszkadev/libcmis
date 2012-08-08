/* libcmis
 * Version: MPL 1.1 / GPLv2+ / LGPLv2+
 *
 * The contents of this file are subject to the Mozilla Public License Version
 * 1.1 (the "License"); you may not use this file except in compliance with
 * the License or as specified alternatively below. You may obtain a copy of
 * the License at http://www.mozilla.org/MPL/
 *
 * Software distributed under the License is distributed on an "AS IS" basis,
 * WITHOUT WARRANTY OF ANY KIND, either express or implied. See the License
 * for the specific language governing rights and limitations under the
 * License.
 *
 * Major Contributor(s):
 * Copyright (C) 2011 SUSE <cbosdonnat@suse.com>
 *
 *
 * All Rights Reserved.
 *
 * For minor contributions see the git repository.
 *
 * Alternatively, the contents of this file may be used under the terms of
 * either the GNU General Public License Version 2 or later (the "GPLv2+"), or
 * the GNU Lesser General Public License Version 2 or later (the "LGPLv2+"),
 * in which case the provisions of the GPLv2+ or the LGPLv2+ are applicable
 * instead of those above.
 */
#ifndef _LIBCMIS_PROPERTY_HXX_
#define _LIBCMIS_PROPERTY_HXX_

#include "property-type.h"
#include "vectors.h"

typedef struct libcmis_property* libcmis_PropertyPtr;

libcmis_PropertyPtr libcmis_property_create( libcmis_PropertyTypePtr type, const char** strValues, size_t size );
void libcmis_property_free( libcmis_PropertyPtr property );

libcmis_PropertyTypePtr libcmis_property_getPropertyType( libcmis_PropertyPtr property );

libcmis_vector_time_t* libcmis_property_getDateTimes( libcmis_PropertyPtr property );
libcmis_vector_bool* libcmis_property_getBools( libcmis_PropertyPtr property );
libcmis_vector_string* libcmis_property_getStrings( libcmis_PropertyPtr property );
libcmis_vector_long* libcmis_property_getLongs( libcmis_PropertyPtr property );
libcmis_vector_double* libcmis_property_getDoubles( libcmis_PropertyPtr property );

void libcmis_property_setValues( libcmis_PropertyPtr property, const char** strValues, size_t size );

#endif
