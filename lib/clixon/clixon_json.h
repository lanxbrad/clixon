/*
 *
  ***** BEGIN LICENSE BLOCK *****
 
  Copyright (C) 2009-2018 Olof Hagsand and Benny Holmgren

  This file is part of CLIXON.

  Licensed under the Apache License, Version 2.0 (the "License");
  you may not use this file except in compliance with the License.
  You may obtain a copy of the License at

    http://www.apache.org/licenses/LICENSE-2.0

  Unless required by applicable law or agreed to in writing, software
  distributed under the License is distributed on an "AS IS" BASIS,
  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
  See the License for the specific language governing permissions and
  limitations under the License.

  Alternatively, the contents of this file may be used under the terms of
  the GNU General Public License Version 3 or later (the "GPL"),
  in which case the provisions of the GPL are applicable instead
  of those above. If you wish to allow use of your version of this file only
  under the terms of the GPL, and not to allow others to
  use your version of this file under the terms of Apache License version 2, 
  indicate your decision by deleting the provisions above and replace them with
  the  notice and other provisions required by the GPL. If you do not delete
  the provisions above, a recipient may use your version of this file under
  the terms of any one of the Apache License version 2 or the GPL.

  ***** END LICENSE BLOCK *****

 * JSON support functions.
 */
#ifndef _CLIXON_JSON_H
#define _CLIXON_JSON_H

/*
 * Prototypes
 */
int xml2json_cbuf(cbuf *cb, cxobj *x, int pretty);
int xml2json_cbuf_vec(cbuf *cb, cxobj **vec, size_t veclen, int pretty);
int xml2json(FILE *f, cxobj *x, int pretty);
int xml2json_vec(FILE *f, cxobj **vec, size_t veclen, int pretty);
int json2xml_ns(yang_spec *yspec, cxobj *x, cxobj **xerr);
int json_parse_str(char *str, cxobj **xt);
int json_parse_file(int fd, yang_spec *yspec, cxobj **xt);

#endif /* _CLIXON_JSON_H */
