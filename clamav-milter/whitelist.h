#ifndef _WHITELIST_H
#define _WHITELIST_H

int whitelist_init(const char *fname);
void whitelist_free(void);
int whitelisted(const char *addr, int from);
#endif