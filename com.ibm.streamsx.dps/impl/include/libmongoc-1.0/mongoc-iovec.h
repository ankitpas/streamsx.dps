/*
 * Copyright 2014 MongoDB, Inc.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *   http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */


#ifndef MONGOC_IOVEC_H
#define MONGOC_IOVEC_H


#include <libbson-1.0/bson.h>

#ifndef _WIN32
# include <sys/uio.h>
#endif


BSON_BEGIN_DECLS


#ifdef _WIN32
typedef struct
{
   u_long  iov_len;
   char   *iov_base;
} mongoc_iovec_t;
#else
typedef struct iovec mongoc_iovec_t;
#endif


BSON_END_DECLS


#endif /* MONGOC_IOVEC_H */
