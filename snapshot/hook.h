#pragma once

#define NORMAL (void*)(0xdeadf00d)

bool init_hooking(void);
bool try_hook(const char *func_name, void *handler);
void unhook(const char *func_name);
