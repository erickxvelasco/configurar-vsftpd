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
char ENCONTRADO[100];

//definicion de metodos
int existe_archivo(const char *filename);
int buscar_proceso(char *proceso);
int buscar();
void modificar_archivo(char comando[80], char nuevo_valor[80], char primer_caracter[3]);
int buscar_valor_linea(char linea[200], char busqueda[200]);

//Función principal
void main(int argc, char *argv[])
{
    int iUid, iGid;
    //cambiamos los permisos a root
    if ((setuid(0)) < 0)
        printf("\n<br>setuid: operacion no permitida\n");
    if ((setgid(0)) < 0)
        printf("\n<br>setgid: operacion no permitida\n");
    if (existe_archivo("/etc/vsftpd.conf") == 0)
    {
        printf("existe");
    }
    else
    {
        printf("no existe");
    }
    if (buscar_proceso("vsftpd") == 0)
    {
        printf("\nexiste proceso");
    }
    else
    {
        printf("\nno existe proceso");
    }
    //////hasta aqui tenemos la informacion si el servicio esta instalado
    
    modificar_archivo("dsa_cert_file=", "emireth", "");

    //general setting
    //local ftp user settings
    //anonymous ftp user settings
    //log setting
    //transfer settings

    /*
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
*/
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
int buscar_proceso(char *proceso)
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
    if (strlen(pidline) > 0)
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

/*
void buscar_palabra(char archivo[30],char palabra[30]){

      FILE *Fd;

      char texto[80];

      int i,tmp1,tmp2,konta=0;     


      Fd=fopen(archivo,"r");

      if (Fd==NULL)

         printf("Error abriendo el fichero");


      while (feof(Fd)==0)

      {
            fgets(texto,80,Fd);

            for(i=0;i<strlen(texto);i++){

               if (palabra[0]==texto[i]){

                  tmp1=0;

                  tmp2=i;

                  while ((palabra[tmp1]==texto[tmp2])&&(tmp2<strlen(texto))&&(tmp1!=strlen(palabra))){
                        tmp1++;
                        tmp2++;

                        if (tmp1==strlen(palabra))
                           konta++;
                  }
               }
            }
      }

      printf("La palabra se repite en el texto %d veces",konta);

      getchar();

}
*/
void modificar_archivo(char comando[80], char nuevo_valor[80], char primer_caracter[3])
{
    //el comando tiene que ser en sgte formato"ftpd="
    //el nuevo valor solo es el valor despues de l = ej "YES"

    //el primer_caracter solo sera "#" y ""
    char mat[300][300];
    int lim = 0;
    FILE *archivo = fopen(NOMBRE_ARCHIVO, "r"); // Modo lectura
    char bufer[LONGITUD_MAXIMA_CADENA];         // Aquí vamos a ir almacenando cada línea
    char var_aux[100];                          //se concatenara los valores en este string
    if (archivo != NULL)
    {
        while (fgets(bufer, LONGITUD_MAXIMA_CADENA + 1, archivo) != NULL)
        {
            //fgets(bufer, LONGITUD_MAXIMA_CADENA, archivo)!=NULL;
            // Aquí, justo ahora, tenemos ya la línea. Le vamos a remover el salto
            strtok(bufer, "\n");
            // La imprimimos, pero realmente podríamos hacer cualquier otra cosa
            //por seguridad quitamos las lineas vacias
            if (buscar_valor_linea(bufer, comando) == 0)
            {
                //la busqueda no coincide con el comando ingresado
                strcpy(mat[lim], bufer);
            }
            else
            {
                //se encontro el comando hay que reemplazarlo
                strcpy(var_aux, primer_caracter);
                strcat(var_aux, comando);
                strcat(var_aux, nuevo_valor);

                strcpy(mat[lim], var_aux);
            }

            //en esta linea tendriamos que buscar el valor

            //printf("La línea es: '%s'\n", bufer);
            lim++;
        }
        fclose(archivo);        
    }
    
    //leemos la matriz y gurdamos en el archivo vsftpd.conf

    int j, i;
    char aux[300];
    FILE *archivo2 = fopen(NOMBRE_ARCHIVO, "w");
    if (archivo2 != NULL)
    {
        for (i = 0; i < lim; i++)
        {
            for (j = 0; j < 500; j++)
            {
                aux[j] = mat[i][j];
            }
            if (aux[0] > 33)
            {

                //printf("es: %s\n", aux);
                strcat(aux, "\n");
                fprintf(archivo2, aux);
            }
        }

        // Al final, cerramos el archivo
         fclose(archivo2);
        
    }
    else
    {
        printf("Error abriendo archivo %s", NOMBRE_ARCHIVO);
    }
   
}

int buscar_valor_linea(char linea[200], char comando[200])
{
    //comando es del sgte formato "comando="
    //este metodo busca y si existe devuelve un numero >0 y guarda el valor en una variable char ENCONTRADO[100]
    //si no encuentra devuelve 0  sigue buscado
    strcpy(ENCONTRADO, ""); //vaciamos la variable aux
    int es_correcto = 0;
    int i;
    int limite = strlen(comando); //limita para que se recorra hasta que acabe la busqueda
    //estas variables se usaran para recorrer el valor para devolver el vallor que sigue
    int continuacion = 0;
    int k;
    if (linea[0] == '#')
    {
        for (i = 1; i < limite + 1; i++)
        {
            if (comando[i - 1] == linea[i])
            {
                es_correcto++;
            }
            else
            {
                es_correcto = 0;
                break;
            }
        }

        if (es_correcto > 0)
        {
            //guardamos el valor de lo que sigue
            i = 0;
            for (k = limite + 1; k < strlen(linea); k++)
            {
                ENCONTRADO[i] = linea[k];
                i++;
            }
            //printf("\nes correcto coincide:%s", ENCONTRADO);
        }
        else
        {
            //printf("\nNO coincide:%s", ENCONTRADO);
        }
    }
    else
    {
        for (i = 0; i < limite; i++)
        {
            if (comando[i] == linea[i])
            {
                es_correcto++;
            }
            else
            {
                es_correcto = 0;
                break;
            }
        }

        if (es_correcto > 0)
        {
            //guardamos el valor de lo que sigue
            i = 0;
            for (k = limite; k < strlen(linea); k++)
            {
                ENCONTRADO[i] = linea[k];
                i++;
            }
            //printf("\nes correcto coincide:%s", ENCONTRADO);
        }
        else
        {
            //printf("\nNO coincide:%s", ENCONTRADO);
        }
    }
    return es_correcto;
}