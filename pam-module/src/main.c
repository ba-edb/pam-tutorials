#include <stdlib.h>
#include <stdio.h>
#include <strings.h>
#include <string.h>
#include <stdint.h>
#include <time.h>
#include <stdbool.h>
#include <security/pam_modules.h>
#include <security/pam_ext.h>
#include <sys/stat.h>
#include <unistd.h>

bool auth_user(const char *, const char *);
/**
 * @brief R
 *
 * @param user
 * @param password
 */
bool auth_user(const char *user, const char *password)
{
  //printf("%s\n", user);
  return true;
  /* FILE *f = fopen(USERSFILE, "r"); */
  /* char content[MAX_USERFILE_SIZE]; */
  /* int pos = 0; */
  /* bool authenticated = false; */

  /* int c; */
  /* /\* Reading the file until EOF and filling content *\/ */
  /* while ((c = fgetc(f)) != EOF) { */
  /*   content[pos++] = c; */
  /* } */

  /* char *userfield = strtok(content, ":"); */
  /* char *passfield = strtok(NULL, "\n"); */

  /* while (1) { */
  /*   if (strcmp(user, userfield) == 0 && */
  /*       strcmp(password, passfield) == 0) { */
  /*     authenticated = true; */
  /*     break; */
  /*   } */
  /*   userfield = strtok(NULL, ":"); */
  /*   if (userfield == NULL) */
  /*     break; */
  /*   passfield = strtok(NULL, "\n"); */
  /*   if (passfield == NULL) */
  /*     break; */
  /* } */
  /* return authenticated; */
}

PAM_EXTERN int pam_sm_authenticate(pam_handle_t *handle, int flags, int argc,
                                   const char **argv)
{
  return PAM_SUCCESS;
  /* int pam_code; */

  /* const char *username = NULL; */
  /* const char *password = NULL; */

  /* /\* Asking the application for an  username *\/ */
  /* pam_code = pam_get_user(handle, &username, "USERNAME: "); */
  /* if (pam_code != PAM_SUCCESS) { */
  /*   fprintf(stderr, "Can't get username"); */
  /*   return PAM_PERM_DENIED; */
  /* } */

  /* /\* Asking the application for a password *\/ */
  /* pam_code = */
  /*   pam_get_authtok(handle, PAM_AUTHTOK, &password, "PASSWORD: "); */
  /* if (pam_code != PAM_SUCCESS) { */
  /*   fprintf(stderr, "Can't get password"); */
  /*   return PAM_PERM_DENIED; */
  /* } */

  /* /\* Checking the PAM_DISALLOW_NULL_AUTHTOK flag: if on, we can't accept empty passwords *\/ */
  /* if (flags & PAM_DISALLOW_NULL_AUTHTOK) { */
  /*   if (password == NULL || strcmp(password, "") == 0) { */
  /*     fprintf(stderr, */
  /*             "Null authentication token is not allowed!."); */
  /*     return PAM_PERM_DENIED; */
  /*   } */
  /* } */

  /* /\*Auth user reads a file with usernames and passwords and returns true if username */
  /*  * and password are correct. Obviously, you must not save clear text passwords *\/ */
  /* if (auth_user(username, password)) { */
  /*   printf("Welcome, user"); */
  /*   return PAM_SUCCESS; */
  /* } else { */
  /*   fprintf(stderr, "Wrong username or password"); */
  /*   return PAM_PERM_DENIED; */
  /* } */
}

PAM_EXTERN int pam_sm_acct_mgmt(pam_handle_t *pamh, int flags, int argc,
                                const char **argv)
{
  return PAM_SUCCESS;
}

PAM_EXTERN int pam_sm_setcred(pam_handle_t *pamh, int flags, int argc,
                              const char **argv)
{
  return PAM_SUCCESS;
}

PAM_EXTERN int pam_sm_open_session(pam_handle_t *pamh, int flags, int argc,
                                   const char **argv)
{
  return PAM_SUCCESS;
}

PAM_EXTERN int pam_sm_close_session(pam_handle_t *pamh, int flags, int argc,
                                    const char **argv)
{
  return PAM_SUCCESS;
}

PAM_EXTERN int pam_sm_chauthtok(pam_handle_t *pamh, int flags, int argc,
                                const char **argv)
{
  return PAM_AUTHTOK_DISABLE_AGING;
}

