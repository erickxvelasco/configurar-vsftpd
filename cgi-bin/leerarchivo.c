//Llamada a librerías
#include<errno.h>
#include <string.h>

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
 
 //definicion de metodos
int existe_archivo(const char* filename);
int buscar_proceso(char *proceso);

//Función principal
void main(int argc, char **argv[])
{
    int iUid,iGid;
    //cambiamos los permisos a root
    if((setuid(0)) < 0) printf("\n<br>setuid: operacion no permitida\n");
	if((setgid(0)) < 0) printf("\n<br>setgid: operacion no permitida\n");
	if (existe_archivo("/etc/vsftpd.conf")==0){
        printf("existe");
    }else{
        printf("no existe");
    }
    if (buscar_proceso("vsftpd")==0){
        printf("existe proceso");
    }else{
        printf("no existe proceso");
    }
    

    //general setting
    //local ftp user settings
    //anonymous ftp user settings
    //log setting
    //transfer settings


//Declaramos variables
int fd;
char c;
//ABRIR ARCHIVO
//O_RDONLY abre el archivo salida.txt en modo lectura
fd = open("/etc/vsftpd.conf",O_RDONLY);
 
//CONTROLAR SI EXISTE ARCHIVO
if(fd!=-1)
{
//LEER EL ARCHIVO
//El archivo se lee caracter por caracter
while(read(fd,&c,sizeof(c)!=0)){
printf("%c",c);
}
//CERRAR ARCHIVO
close(fd);
}
 
else{
printf("\nEl archivo no existe");
}
 
}

int existe_archivo(const char *fname){
    //dado un directorio o archivo ve si existe 
    //0->existe 1->no existe
    if( access( fname, F_OK ) != -1 ) {
        return 0;
    } else {
        return 1;
    }
}
int buscar_proceso(char *proceso){
        //0->existe ->1->no existe
        char pidline[1024];
        char *pid;
        int i =0;
        int pidno[64];
        char proc[100];
        strcpy(proc,"pidof ");
        strcat(proc,proceso);
        //pidof vsftpd
        FILE *fp = popen(proc,"r");
        fgets(pidline,1024,fp);
        //printf("%s",pidline);
        /*
        printf("%s",pidline);
        pid = strtok (pidline," ");
        while(pid != NULL)
                {

                        pidno[i] = atoi(pid);
                        printf("%d\n",pidno[i]);
                        pid = strtok (NULL , " ");
                        i++;
                }
        */
        pclose(fp);
        if (strlen(pidline)>0){
            return 0;
        }else{
            return 1;
        }
        /*matamos el proceso
        char abc[100];
        strcpy(abc," kill ");
        strcat(abc, pidline);
        system(abc);
        */
}