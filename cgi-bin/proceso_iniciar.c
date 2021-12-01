//Llamada a librerías
#include <errno.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

#define MAXLEN 1024
#define NOMBRE_ARCHIVO "/etc/vsftpd.conf"
#define LONGITUD_MAXIMA_CADENA 1000
//definicion de metodos
int existe_archivo(const char *filename);
int buscar_proceso(char *proceso, char *p_pid);

int main(void)
{
    char pid_proceso[100];

    int iUid, iGid;
    //cambiamos los permisos a root
    if ((setuid(0)) < 0)
        printf("\n<br>setuid: operacion no permitida\n");
    if ((setgid(0)) < 0)
        printf("\n<br>setgid: operacion no permitida\n");

    //printf("\nexiste archivo:%d", existe_archivo(NOMBRE_ARCHIVO));
    //printf("\nbuscar proceso:%d", buscar_proceso("vsftpd", pid_proceso));
    
    //iniciamos el proceso
    //system("sudo service vsftpd restart");
    system("sudo systemctl start vsftpd");
    

    buscar_proceso("vsftpd", pid_proceso);
    //proceso iniciado con exito
    //creamos el html
     printf("Content-type: text/html\n\n");
    printf("<!DOCTYPE html>");
    printf("<html lang='es'>");
    printf("<head>");
    printf("<meta charset='UTF-8'>");
    printf("<meta http-equiv='X-UA-Compatible' content='IE=edge'>");
    printf("<meta name='viewport' content='width=device-width, initial-scale=1.0'>");
    printf("<link href='https://cdn.jsdelivr.net/npm/bootstrap@5.1.3/dist/css/bootstrap.min.css' rel='stylesheet' ");
    printf("    integrity='sha384-1BmE4kWBq78iYhFldvKuhfTAU6auU8tT94WrHftjDbrCEXSU1oBoqyl2QvZ6jIW3' crossorigin='anonymous'>");
    printf("<title>Document</title>");
    printf("</head>");
    printf("<body class='bg-warning text-center'>");
    printf("<br><br><br>");
    printf("<div class'col text-center'>");
    printf("<h1 class='display-1 text-dark'>");
    printf("PROCESO VSFTPD INICIADO (PID): %s",pid_proceso);
    printf("</h1>");
    printf("</div>");
    printf("<a href='/cgi-bin/index' class='btn btn-dark btn-lg col-5 fs-1'>Volver</a>");

    printf("</body>");
    printf("</html>");


    return 0;
}

int existe_archivo(const char *fname)
{
    //dado un directorio o archivo ve si existe
    //0->existe 1->no existe
    if (access(fname, F_OK) != -1)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}
int buscar_proceso(char *proceso, char *p_pid)
{
    //0->existe ->1->no existe
    char pidline[1024];
    char *pid;
    int i = 0;
    int pidno[64];
    char proc[100];
    strcpy(proc, "pidof ");
    strcat(proc, proceso);
    //pidof vsftpd
    FILE *fp = popen(proc, "r");
    fgets(pidline, 1024, fp);
    strcpy(p_pid, pidline);
    pclose(fp);
    if (strlen(pidline) > 0 && (pidline[0]>48 && pidline[0]<58))
    {
        return 0;
    }
    else
    {
        return 1;
    }
    /*matamos el proceso
        char abc[100];
        strcpy(abc," kill ");
        strcat(abc, pidline);
        system(abc);
        */
}