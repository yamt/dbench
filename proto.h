/* This file is automatically generated with "make proto". DO NOT EDIT */

void child_run(int client);
void nb_setup(int client);
void nb_unlink(char *fname);
void expand_file(int fd, int size);
void nb_open(char *fname, int handle, int size);
void nb_write(int handle, int size, int offset);
void nb_read(int handle, int size, int offset);
void nb_close(int handle);
void nb_mkdir(char *fname);
void nb_rmdir(char *fname);
void nb_rename(char *old, char *new);
void nb_stat(char *fname, int size);
void nb_create(char *fname, int size);
void nb_setup(int client);
void nb_unlink(char *fname);
void nb_open(char *fname, int handle, int size);
void nb_write(int handle, int size, int offset);
void nb_read(int handle, int size, int offset);
void nb_close(int handle);
void nb_mkdir(char *fname);
void nb_rmdir(char *fname);
void nb_rename(char *old, char *new);
void nb_stat(char *fname, int size);
void nb_create(char *fname, int size);
int open_socket_in(int type, int port, uint32 socket_addr);
int open_socket_out(char *host, int port);
void set_socket_options(int fd, char *options);
int read_sock(int s, char *buf, int size);
int write_sock(int s, char *buf, int size);
void start_timer(void);
double end_timer(void);
void *shm_setup(int size);
void strupper(char *s);
void all_string_sub(char *s,const char *pattern,const char *insert);
BOOL next_token(char **ptr,char *buff,char *sep);
