#include <stdio.h>
#include <time.h>

int main(int argc, char *argv[])
{
    char *Blatt = argv[1], *Aufgabe = argv[2], *Thema = argv[3];
    time_t t = time(NULL);
    struct tm tm = *localtime(&t);
    printf("/********************************/\n");
    printf("/* Benedikt Abel, Justus Faust  */\n");
    printf("/* Gruppe: Di08                 */\n");
    printf("/* Uebungsblatt: %s, Aufgabe B-%s */\n", Blatt, Aufgabe);
    printf("/* Thema: %-21s */\n", Thema);
    printf("/* Version: v1.0.0              */\n");
    printf("/* Datum: %i%.2i%.2i              */\n", tm.tm_year+1900, tm.tm_mon+1, tm.tm_mday);
    printf("/* Status: WIP                  */\n");
    printf("/********************************/\n");
    return 0;
}
