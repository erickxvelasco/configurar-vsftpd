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

char devolver_valor_switch(char sw[10]);
//para separar caracteres tipo split
void separar(char *cadena, char *linea, char separador);

int main(void)
{
    char *lenstr;
    char inputBuffer[MAXLEN];
    int contentLength;
    int i;
    char x;

    int iUid, iGid;
    //cambiamos los permisos a root
    if ((setuid(0)) < 0)
        printf("\n<br>setuid: operacion no permitida\n");
    if ((setgid(0)) < 0)
        printf("\n<br>setgid: operacion no permitida\n");

    //los datos del formulario se guardaron en estas variables
    char s0[100];
    char s1[100];
    char s2[100];
    char s3[100];
    char s4[100];
    char s5[100];
    char s6[100];
    char s7[100];
    char s8[100];
    char s9[100];
    char s10[100];
    char s11[100];
    char s12[100];
    char s13[100];
    char s14[100];
    char s15[100];
    char s16[100];
    char s17[100];
    char s18[100];
    char s19[100];
    char s20[100];
    char s21[100];
    char s22[100];
    char s23[100];
    char s24[100];
    char s25[100];
    char s26[100];
    char s27[100];
    char s28[100];
    char s29[100];
    char s30[100];
    char s31[100];
    char s32[100];
    char s33[100];
    char s34[100];
    char s35[100];
    char s36[100];
    char s37[100];
    char s38[100];
    char s39[100];
    char s40[100];
    char s41[100];
    char s42[100];
    char s43[100];
    char s44[100];
    char s45[100];
    char s46[100];
    char s47[100];
    char s48[100];
    char s49[100];
    char s50[100];
    char s51[100];
    char s52[100];
    char s53[100];
    char s54[100];
    char s55[100];
    char s56[100];
    char s57[100];
    char s58[100];
    char s59[100];
    char s60[100];
    char s61[100];
    char s62[100];
    char s63[100];
    char s64[100];
    char s65[100];
    char s66[100];
    char s67[100];
    char s68[100];
    char s69[100];
    char s70[100];
    char s71[100];
    char s72[100];
    char s73[100];
    char s74[100];
    char s75[100];
    char s76[100];
    char s77[100];
    char s78[100];
    char s79[100];
    char s80[100];
    char s81[100];
    char s82[100];
    char s83[100];
    char s84[100];
    char s85[100];
    char s86[100];
    char s87[100];
    char s88[100];
    char s89[100];
    char s90[100];
    char s91[100];
    char s92[100];
    char s93[100];
    char s94[100];
    char s95[100];
    char s96[100];
    char s97[100];
    char s98[100];
    char s99[100];
    lenstr = getenv("CONTENT_LENGTH");
    //lenstr = (char *)getenv("CONTENT_LENGTH");
    if (lenstr != NULL)
    {
        contentLength = atoi(lenstr);
    }
    else
        contentLength = 0;

    if (contentLength > sizeof(inputBuffer) - 1)
        contentLength = sizeof(inputBuffer) - 1;

    i = 0;
    while (i < contentLength)
    {
        x = fgetc(stdin);
        if (x == EOF)
            break;
        inputBuffer[i] = x;
        //printf("<br>",x);
        i++;
    }
    inputBuffer[i] = '\0';
    contentLength = i;

    /*
    printf("Content-type:text/html\n\n");
    printf("<TITLE>Response</TITLE>\n");    

    printf("<br class='erick'>Datos Formulario:'erick' %s\n", inputBuffer);
    printf("<br>Tama&ntildeo: %d\n", contentLength);
*/

    separar(s0, inputBuffer, '&');
    separar(s1, inputBuffer, '&');
    separar(s2, inputBuffer, '&');
    separar(s3, inputBuffer, '&');
    separar(s4, inputBuffer, '&');
    separar(s5, inputBuffer, '&');
    separar(s6, inputBuffer, '&');
    separar(s7, inputBuffer, '&');
    separar(s8, inputBuffer, '&');
    separar(s9, inputBuffer, '&');
    separar(s10, inputBuffer, '&');
    separar(s11, inputBuffer, '&');
    separar(s12, inputBuffer, '&');
    separar(s13, inputBuffer, '&');
    separar(s14, inputBuffer, '&');
    separar(s15, inputBuffer, '&');
    separar(s16, inputBuffer, '&');
    separar(s17, inputBuffer, '&');
    separar(s18, inputBuffer, '&');
    separar(s19, inputBuffer, '&');
    separar(s20, inputBuffer, '&');
    separar(s21, inputBuffer, '&');
    separar(s22, inputBuffer, '&');
    separar(s23, inputBuffer, '&');
    separar(s24, inputBuffer, '&');
    separar(s25, inputBuffer, '&');
    separar(s26, inputBuffer, '&');
    separar(s27, inputBuffer, '&');
    separar(s28, inputBuffer, '&');
    separar(s29, inputBuffer, '&');
    separar(s30, inputBuffer, '&');
    separar(s31, inputBuffer, '&');
    separar(s32, inputBuffer, '&');
    separar(s33, inputBuffer, '&');
    separar(s34, inputBuffer, '&');
    separar(s35, inputBuffer, '&');
    separar(s36, inputBuffer, '&');
    separar(s37, inputBuffer, '&');
    separar(s38, inputBuffer, '&');
    separar(s39, inputBuffer, '&');
    separar(s40, inputBuffer, '&');
    separar(s41, inputBuffer, '&');
    separar(s42, inputBuffer, '&');
    separar(s43, inputBuffer, '&');
    separar(s44, inputBuffer, '&');
    separar(s45, inputBuffer, '&');
    separar(s46, inputBuffer, '&');
    separar(s47, inputBuffer, '&');
    separar(s48, inputBuffer, '&');
    separar(s49, inputBuffer, '&');
    separar(s50, inputBuffer, '&');
    separar(s51, inputBuffer, '&');
    separar(s52, inputBuffer, '&');
    separar(s53, inputBuffer, '&');
    separar(s54, inputBuffer, '&');
    separar(s55, inputBuffer, '&');
    separar(s56, inputBuffer, '&');
    separar(s57, inputBuffer, '&');
    separar(s58, inputBuffer, '&');
    separar(s59, inputBuffer, '&');
    separar(s60, inputBuffer, '&');
    separar(s61, inputBuffer, '&');
    separar(s62, inputBuffer, '&');
    separar(s63, inputBuffer, '&');
    separar(s64, inputBuffer, '&');
    separar(s65, inputBuffer, '&');
    separar(s66, inputBuffer, '&');
    separar(s67, inputBuffer, '&');
    separar(s68, inputBuffer, '&');
    separar(s69, inputBuffer, '&');
    separar(s70, inputBuffer, '&');
    separar(s71, inputBuffer, '&');
    separar(s72, inputBuffer, '&');
    separar(s73, inputBuffer, '&');
    separar(s74, inputBuffer, '&');
    separar(s75, inputBuffer, '&');
    separar(s76, inputBuffer, '&');
    separar(s77, inputBuffer, '&');
    separar(s78, inputBuffer, '&');
    separar(s79, inputBuffer, '&');
    separar(s80, inputBuffer, '&');
    separar(s81, inputBuffer, '&');
    separar(s82, inputBuffer, '&');
    separar(s83, inputBuffer, '&');
    separar(s84, inputBuffer, '&');
    separar(s85, inputBuffer, '&');
    separar(s86, inputBuffer, '&');
    separar(s87, inputBuffer, '&');
    separar(s88, inputBuffer, '&');
    separar(s89, inputBuffer, '&');
    separar(s90, inputBuffer, '&');
    separar(s91, inputBuffer, '&');
    separar(s92, inputBuffer, '&');
    separar(s93, inputBuffer, '&');
    separar(s94, inputBuffer, '&');
    separar(s95, inputBuffer, '&');
    separar(s96, inputBuffer, '&');
    separar(s97, inputBuffer, '&');
    separar(s98, inputBuffer, '&');
    separar(s99, inputBuffer, '&');
    //guardamos los datos
    //necesitamos 1 metodo para convertir el valor del switch a # o ··
    //modificamos el archivo
    char aux[3];

    //separacion
    aux[0] = devolver_valor_switch(s1);
    modificar_archivo("write_enable=", s2, aux);
    //separaracion
    aux[0] =devolver_valor_switch(s3);
    modificar_archivo("dirmessage_enable=", s4, aux);
    //separaracion
    aux[0] =devolver_valor_switch(s5);
    modificar_archivo("nopriv_user=", s6, aux);
    //separaracion
    aux[0] =devolver_valor_switch(s7);
    modificar_archivo("ftpd_banner=", s8, aux);
    //separaracion
    aux[0] =devolver_valor_switch(s9);
    modificar_archivo("ls_recurse_enable=", s10, aux);
    //separaracion
    aux[0] =devolver_valor_switch(s11);
    modificar_archivo("banned_email_file=", s12, aux);
    //separaracion
    aux[0] =devolver_valor_switch(s13);
    modificar_archivo("hide_ids=", s14, aux);
    /////////
    //separaracion
    aux[0] =devolver_valor_switch(s15);
    modificar_archivo("local_enable=", s16, aux);
    //separaracion
    aux[0] =devolver_valor_switch(s17);
    modificar_archivo("local_umask=", s18, aux);
    //separaracion
    aux[0] =devolver_valor_switch(s19);
    modificar_archivo("chroot_local_user=", s20, aux);
    //separaracion
    aux[0] =devolver_valor_switch(s21);
    modificar_archivo("chroot_list_enable=", s22, aux);
    //separaracion
    aux[0] =devolver_valor_switch(s23);
    modificar_archivo("chroot_list_file=", s24, aux);
    //separaracion
    aux[0] =devolver_valor_switch(s25);
    modificar_archivo("allow_root_squashed_chroot=", s26, aux);
    //separaracion
    aux[0] =devolver_valor_switch(s27);
    modificar_archivo("local_max_rate=", s28, aux);
    //////////////////
    //separaracion
    aux[0] =devolver_valor_switch(s29);
    modificar_archivo("anonymous_enable=", s30, aux);
    //separaracion
    aux[0] =devolver_valor_switch(s31);
    modificar_archivo("anon_max_rate=", s32, aux);
    //separaracion
    aux[0] =devolver_valor_switch(s33);
    modificar_archivo("anon_world_readable_only=", s34, aux);
    //separaracion
    aux[0] =devolver_valor_switch(s35);
    modificar_archivo("anon_umask=", s36, aux);
    //separaracion
    aux[0] =devolver_valor_switch(s37);
    modificar_archivo("anon_upload_enable=", s38, aux);
    //separaracion
    aux[0] =devolver_valor_switch(s39);
    modificar_archivo("anon_mkdir_write_enable=", s40, aux);
    //separaracion
    aux[0] =devolver_valor_switch(s41);
    modificar_archivo("anon_other_write_enable=", s42, aux);
    //separaracion
    aux[0] =devolver_valor_switch(s43);
    modificar_archivo("chown_uploads=", s44, aux);
    //separaracion
    aux[0] =devolver_valor_switch(s45);
    modificar_archivo("chown_username=", s46, aux);
    ///////////////////
    //separaracion //desde aqui no concide 48/2=24 restarle 1=23
    aux[0] =devolver_valor_switch(s47);
    modificar_archivo("syslog_enable=", s48, aux);
    //separaracion
    aux[0] =devolver_valor_switch(s49);
    modificar_archivo("log_ftp_protocol=", s50, aux);
    //separaracion
    aux[0] =devolver_valor_switch(s51);
    modificar_archivo("xferlog_enable=", s52, aux);
    //separaracion
    aux[0] =devolver_valor_switch(s53);
    modificar_archivo("vsftpd_log_file=", s54, aux);
    //separaracion
    aux[0] =devolver_valor_switch(s55);
    modificar_archivo("xferlog_std_format=", s56, aux);
    //separaracion
    aux[0] =devolver_valor_switch(s57);
    modificar_archivo("xferlog_file=", s58, aux);
    //separaracion
    aux[0] =devolver_valor_switch(s59);
    modificar_archivo("dual_log_enable=", s60, aux);
    //separaracion
    aux[0] =devolver_valor_switch(s61);
    modificar_archivo("setproctitle_enable=", s62, aux);
    /////////////
    //separaracion
    aux[0] =devolver_valor_switch(s63);
    modificar_archivo("connect_from_port_20=", s64, aux);
    //separaracion
    aux[0] =devolver_valor_switch(s65);
    modificar_archivo("idle_session_timeout=", s66, aux);
    //separaracion
    aux[0] =devolver_valor_switch(s67);
    modificar_archivo("data_connection_timeout=", s68, aux);
    //separaracion
    aux[0] =devolver_valor_switch(s69);
    modificar_archivo("async_abor_enable=", s70, aux);
    //separaracion
    aux[0] =devolver_valor_switch(s71);
    modificar_archivo("ascii_upload_enable=", s72, aux);
    //separaracion
    aux[0] =devolver_valor_switch(s73);
    modificar_archivo("ascii_download_enable=", s74, aux);
    //separaracion
    aux[0] =devolver_valor_switch(s75);
    modificar_archivo("pasv_enable=", s76, aux);
    //separaracion
    aux[0] =devolver_valor_switch(s77);
    modificar_archivo("pam_service_name=", s78, aux);
    //separaracion
    aux[0] =devolver_valor_switch(s79);
    modificar_archivo("listen=", s80, aux);
    //separaracion
    aux[0] =devolver_valor_switch(s81);
    modificar_archivo("listen_ipv6=", s82, aux);
    //separaracion
    aux[0] =devolver_valor_switch(s83);
    modificar_archivo("ssl_enable=", s84, aux);
    //separaracion
    aux[0] =devolver_valor_switch(s85);
    modificar_archivo("rsa_cert_file=", s86, aux);
    //separaracion
    aux[0] =devolver_valor_switch(s87);
    modificar_archivo("dsa_cert_file=", s88, aux);
    //separaracion
    aux[0] =devolver_valor_switch(s89);
    modificar_archivo("pasv_min_port=", s90, aux);
    //separaracion
    aux[0] =devolver_valor_switch(s91);
    modificar_archivo("pasv_max_port=", s92, aux);
    //separaracion
    aux[0] =devolver_valor_switch(s93);
    modificar_archivo("isolate_network=", s94, aux);
    //separaracion
    aux[0] =devolver_valor_switch(s95);
    modificar_archivo("seccomp_sandbox=", s96, aux);    
  
    return 0;
}
char devolver_valor_switch(char sw[10])
{
    //devolvemos true="" false="#"
    if (strcmp(sw, "false") == 0)
    {
        return '#';
    }
    else
    {
        return '\0';
    }
}
void separar(char *cadena, char *linea, char separador)
{
    // Separar: separa datos del formulario
    int x, y;

    x = 0;
    y = 0;

    while ((linea[x]) && (linea[x] != separador))
    {
        cadena[x] = linea[x];
        x = x + 1;
    }
    cadena[x] = '\0';
    if (linea[x])
        ++x;

    y = 0;

    while (linea[y] = linea[x])
    {
        linea[y] = linea[x];
        y++;
        x++;
    }
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