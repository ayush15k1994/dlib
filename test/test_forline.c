#include "dlib.h"

int main(int argc, char **argv) {
  char *fname = (argc == 1) ? NULL : argv[1];
  msg("Reading %s", fname == NULL ? "stdin" : fname);
  forline(buf, fname) {
    int len;
    for (len = 0; buf[len] != 0; len++);
    msg("%d", len);
  }
}

