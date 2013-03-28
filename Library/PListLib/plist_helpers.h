/*
 * Copyright (c) 2013 Nikolai Saoukh. All rights reserved.
 * 
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 * 
 * THIS SOFTWARE IS PROVIDED BY THE AUTHOR AND CONTRIBUTORS ``AS IS'' AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED.  IN NO EVENT SHALL THE AUTHOR OR CONTRIBUTORS BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY
 * OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
 * SUCH DAMAGE.
 */

#ifndef NULL
#define NULL ((void*)0)
#endif

#ifndef TRUE
#define TRUE (1 != 0)
#endif

#ifndef FALSE
#define FALSE (1 == 0)
#endif

unsigned int _plstrlen(const char* str);
char* _plstrcpy(char* dst, const char* src);
int _plstrcmp(const char* s1, const char* s2);

int _plmemcmp(const void* s1, const void* s2, unsigned int sz);
void* _plmemcpy(void* dst, const void* src, unsigned int sz);

int _plint2str(long val, char* vbuf, unsigned int bsz);

void* _plzalloc(unsigned int sz);
void _plfree(void* ptr);

char* _plb64encode(unsigned char* idat, unsigned int ilen, unsigned int* olen);
unsigned char* _plb64decode(char* idat, unsigned int ilen, unsigned int* olen);