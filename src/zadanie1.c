#include <stdio.h>
#include <string.h>

#define UNDEF -1
#define MAX_LEN 64
#define ACCEPT 1
#define NON_ACCEPT -1

int state;

void start(char c1, char c2, int len, char *str, int i) {
    if ((c1 == 'a' && c2 == 'a')||(c1 == 'b' && c2 == 'c')) {
        if (len>=i+4 && ((str[i+2] == 'a'&&str[i+3] == 'a')||(str[i+2] == 'b'&&str[i+3] == 'c'))) {
            state = 0;
        } else if (len == i+3) state = UNDEF;
        else {
            if (len == i+2) state = UNDEF;
            else state = 1;
        }
    } else if (c1 == 'a' && c2 == 'b') {
        if (len>=i+2) state = 2;
        else state = 1;
    } else {
        state = UNDEF;
    }
}

void q1(char c1, char c2) {
    if (c1 == 'a' && c2 == 'b') {
        state = 2;
    } else {
        state = UNDEF;
    }
}

void q2(char c) {
    if (c == 'c') {
        state = 2;
    } else {
        state = 2;
    }
}

int isAccepted(char *in_str)
{
    state = 0;
    int i;
    int len = strlen(in_str);

    if (len < 2) return NON_ACCEPT;


    for (i = 0; i <= len; i+=2) {
        if (state == 0) {
            start(in_str[i], in_str[i+1], len, in_str, i);
            continue;
        } else if (state == 1) {
            if (len>=i+2) q1(in_str[i],in_str[i+1]);
            else {
                state = 2;
                --i;
                continue;
            }
        } else if (state == 2) {
            if (len==i+1) q2(in_str[i]);
            else if (in_str[i] == 'c') state = UNDEF;
            else state = 1;
        }
    }

    if (state > 0) {
        return ACCEPT;
    } else {
        return NON_ACCEPT;
    }
}
