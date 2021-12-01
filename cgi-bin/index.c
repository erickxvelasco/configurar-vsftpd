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
char ENCONTRADO[300];

//definicion de metodos
int existe_archivo(const char *filename);
int buscar_proceso(char *proceso);

void leer_datos_archivo(char comando[200], char *conca);
int buscar_valor_linea(char linea[200], char comando[200], char *conca);

char devolver_valor_switch(char sw[10]);
//para separar caracteres tipo split
void separar(char *cadena, char *linea, char separador);

int main(void)
{
    char inputBuffer[MAXLEN];
    int contentLength;
    int i;
    char x;

    char estado_instalacion[100];
    char estado_proceso[100];

    int iUid, iGid;
    //cambiamos los permisos a root
    if ((setuid(0)) < 0)
        printf("\n<br>setuid: operacion no permitida\n");
    if ((setgid(0)) < 0)
        printf("\n<br>setgid: operacion no permitida\n");

    if (existe_archivo(NOMBRE_ARCHIVO) == 0)
    {
        if (buscar_proceso("vsftpd") == 0)
        {
            strcpy(estado_instalacion, "Instalado");
            strcpy(estado_proceso, "Activo");
        }
        else
        {
            strcpy(estado_instalacion, "Instalado");
            strcpy(estado_proceso, "Detenido");
        }
    }
    else
    {
        strcpy(estado_instalacion, "No Instalado");
        strcpy(estado_proceso, "No Existe");
    }
    //printf("\nbuscar proceso:%d", buscar_proceso("vsftpd", pid_proceso));

    /*
    printf("Content-type:text/html\n\n");
    printf("<TITLE>Response</TITLE>\n");

    printf("<br>Datos Formulario: ");
    printf("<br>Tama&ntildeo:");
    */

    /*
    printf("<head>"); 
    printf("<meta charset = 'UTF-8'>"); 
    printf("<meta http - equiv = 'X-UA-Compatible' content = 'IE=edge'>"); 
    printf("<meta name = 'viewport' content = 'width=device-width, initial-scale=1.0'>"); 
    printf("<link href = 'https://cdn.jsdelivr.net/npm/bootstrap@5.1.3/dist/css/bootstrap.min.css' rel = 'stylesheet' integrity = 'sha384-1BmE4kWBq78iYhFldvKuhfTAU6auU8tT94WrHftjDbrCEXSU1oBoqyl2QvZ6jIW3' crossorigin = 'anonymous'>"); 
    printf("<title> Document</ title>"); 
    printf("</ head>"); 
    */

    char contenido_vsftpd[500] = "";
    //guardamos el valor del archivo en esta variable

    leer_datos_archivo("write_enable=", contenido_vsftpd);

    leer_datos_archivo("dirmessage_enable=", contenido_vsftpd);

    leer_datos_archivo("nopriv_user=", contenido_vsftpd);

    leer_datos_archivo("ftpd_banner=", contenido_vsftpd);

    leer_datos_archivo("ls_recurse_enable=", contenido_vsftpd);

    leer_datos_archivo("banned_email_file=", contenido_vsftpd);

    leer_datos_archivo("hide_ids=", contenido_vsftpd);
    /////////

    leer_datos_archivo("local_enable=", contenido_vsftpd);

    leer_datos_archivo("local_umask=", contenido_vsftpd);

    leer_datos_archivo("chroot_local_user=", contenido_vsftpd);

    leer_datos_archivo("chroot_list_enable=", contenido_vsftpd);

    leer_datos_archivo("chroot_list_file=", contenido_vsftpd);

    leer_datos_archivo("allow_root_squashed_chroot=", contenido_vsftpd);

    leer_datos_archivo("local_max_rate=", contenido_vsftpd);
    //////////////////

    leer_datos_archivo("anonymous_enable=", contenido_vsftpd);

    leer_datos_archivo("anon_max_rate=", contenido_vsftpd);

    leer_datos_archivo("anon_world_readable_only=", contenido_vsftpd);

    leer_datos_archivo("anon_umask=", contenido_vsftpd);

    leer_datos_archivo("anon_upload_enable=", contenido_vsftpd);

    leer_datos_archivo("anon_mkdir_write_enable=", contenido_vsftpd);

    leer_datos_archivo("anon_other_write_enable=", contenido_vsftpd);

    leer_datos_archivo("chown_uploads=", contenido_vsftpd);

    leer_datos_archivo("chown_username=", contenido_vsftpd);
    ///////////////////
    //separaracion //desde aqui no concide 48/2=24 restarle 1=23

    leer_datos_archivo("syslog_enable=", contenido_vsftpd);

    leer_datos_archivo("log_ftp_protocol=", contenido_vsftpd);

    leer_datos_archivo("xferlog_enable=", contenido_vsftpd);

    leer_datos_archivo("vsftpd_log_file=", contenido_vsftpd);

    leer_datos_archivo("xferlog_std_format=", contenido_vsftpd);

    leer_datos_archivo("xferlog_file=", contenido_vsftpd);

    leer_datos_archivo("dual_log_enable=", contenido_vsftpd);

    leer_datos_archivo("setproctitle_enable=", contenido_vsftpd);
    /////////////

    leer_datos_archivo("connect_from_port_20=", contenido_vsftpd);

    leer_datos_archivo("idle_session_timeout=", contenido_vsftpd);

    leer_datos_archivo("data_connection_timeout=", contenido_vsftpd);

    leer_datos_archivo("async_abor_enable=", contenido_vsftpd);

    leer_datos_archivo("ascii_upload_enable=", contenido_vsftpd);

    leer_datos_archivo("ascii_download_enable=", contenido_vsftpd);

    leer_datos_archivo("pasv_enable=", contenido_vsftpd);

    leer_datos_archivo("pam_service_name=", contenido_vsftpd);

    leer_datos_archivo("listen=", contenido_vsftpd);

    leer_datos_archivo("listen_ipv6=", contenido_vsftpd);

    leer_datos_archivo("ssl_enable=", contenido_vsftpd);

    leer_datos_archivo("rsa_cert_file=", contenido_vsftpd);

    leer_datos_archivo("dsa_cert_file=", contenido_vsftpd);

    leer_datos_archivo("pasv_min_port=", contenido_vsftpd);

    leer_datos_archivo("pasv_max_port=", contenido_vsftpd);

    leer_datos_archivo("isolate_network=", contenido_vsftpd);

    leer_datos_archivo("seccomp_sandbox=", contenido_vsftpd);

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
    printf("<body class='bg-light'>");

    //div
    printf("<hr>\n");
    printf("<div class='row text-center'>\n");
    printf("<h1 class='display-1 text-decoration-underline text-dark'>Bienvenido al asistente de servidor ftp</h1>\n");
    printf("<hr>\n");
    printf("</div>\n");
    printf("<div class='row justify-content-center'>\n");
    printf("<div class='col-4 shadow-lg p-3 mb-5 bg-body rounded'>\n");
    printf("<div class='row'>\n");
    printf("<h1 class='bg-success text-white text-center'>Estado de Instalacion FTP</h1>\n");
    printf("</div>\n");
    printf("<br>\n");
    printf("<div class='mb-3 row'>\n");
    printf("<h2 class='col-3 fs-2 text-end'>Estado :</h2>\n");
    printf("<h2 class='col-8 rounded-pill bg-light fs-2 border border-dark text-dark'>");
    printf("%s", estado_instalacion);
    printf("</h2>\n");
    printf("</div>\n");
    printf("<div class='row justify-content-center'>\n");
    printf("<a href='/cgi-bin/proceso_desinstalar' class='btn btn-outline-danger btn-lg col-5 fs-1'>Desinstalar</a>\n");
    printf("<div class='col-1'></div>\n");
    printf("<a href='/cgi-bin/proceso_instalar' class='btn btn-outline-success btn-lg col-5 fs-1'>Instalar</a>\n");
    printf("</div>\n");
    printf("</div>\n");
    printf("<div class='col-1'></div>\n");
    printf("<div class='col-4 shadow-lg p-3 mb-5 bg-body rounded'>\n");
    printf("<div class='row'>\n");
    printf("<h1 class='bg-primary text-white text-center'>Configurar servidor FTP</h1>\n");
    printf("</div>\n");
    printf("<br>\n");
    printf("<div class='mb-3 row'>\n");
    printf("<h2 class='col-3 fs-2 text-end'>Archivo :</h2>\n");
    printf("<h2 class='col-8 rounded-pill bg-light fs-2 border border-dark text-dark'>/etc/vsftpd.conf</h2>\n");
    printf("</div>\n");
    printf("<div class='row justify-content-center'>\n");

    printf("<a class='btn btn-outline-info btn-lg col-11 fs-1' href='/index.html?ftp=");
    printf("%s", contenido_vsftpd);
    printf("'>Configurar Servidor</a>\n");
    printf("</div>\n");
    printf("<br>\n");
    printf("</div>\n");
    printf("</div>\n");

    printf("<div class='row justify-content-center'>\n");
    printf("<div class='col-5 shadow-lg p-3 mb-5 bg-body rounded'>\n");
    printf("<div class='row'>\n");
    printf("<h1 class='bg-dark text-white text-center'>Status de Servidor FTP</h1>\n");
    printf("</div>\n");
    printf("<br>\n");
    printf("<div class='mb-3 row'>\n");
    printf("<h2 class='col-3 fs-2 text-end'>Servicio :</h2>\n");
    printf("<h2 class='col-8 rounded-pill bg-light fs-2 border border-dark text-dark'>vsftp</h2>\n");
    printf("</div>\n");
    printf("<div class='mb-3 row'>\n");
    printf("<h2 class='col-3 fs-2 text-end'>Estado :</h2>\n");
    printf("<h2 class='col-8 rounded-pill bg-light fs-2 border border-dark text-dark'>");
    printf("%s", estado_proceso);
    printf("</h2>\n");
    printf("</div>\n");
    printf("<div class='row justify-content-center'>\n");
    printf("<a href='/cgi-bin/proceso_detener' class='btn btn-outline-warning btn-lg col-5 fs-1'>Detener</a>\n");
    printf("<div class='col-1'></div>\n");
    printf("<a href='/cgi-bin/proceso_iniciar' class='btn btn-outline-primary btn-lg col-5 fs-1'>Iniciar</a>\n");
    printf("</div>\n");
    printf("<br>\n");
    printf("</div>\n");
    printf("</div>\n");

    //printf("<script type = 'module' src = 'main.js'></ script>\n");
    //printf("<script src = 'https://cdn.jsdelivr.net/npm/bootstrap@5.1.3/dist/js/bootstrap.bundle.min.js' integrity = 'sha384-ka7Sk0Gln4gmtz2MlQnikT1wXgYsOg+OMhuP+IlRH9sENBO0LRn5q+8nbTov4+1p' crossorigin = 'anonymous'></ script>");
    printf("</body>");
    printf("</html>");

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
void leer_datos_archivo(char comando[200], char *conca)
{
    //el comando tiene que ser en sgte formato"ftpd="
    //el nuevo valor solo es el valor despues de l = ej "YES"

    //el primer_caracter solo sera "#" y ""
    //char mat[300][300];
    int lim = 0;
    FILE *archivo = fopen(NOMBRE_ARCHIVO, "r"); // Modo lectura
    char bufer[LONGITUD_MAXIMA_CADENA];         // Aquí vamos a ir almacenando cada línea
    char var_aux[100];                          //se concatenara los valores en este string
    if (archivo != NULL)
    {
        while (fgets(bufer, LONGITUD_MAXIMA_CADENA, archivo) != NULL)
        {
            //fgets(bufer, LONGITUD_MAXIMA_CADENA, archivo)!=NULL;
            // Aquí, justo ahora, tenemos ya la línea. Le vamos a remover el salto
            strtok(bufer, "\n");
            // La imprimimos, pero realmente podríamos hacer cualquier otra cosa
            //por seguridad quitamos las lineas vacias
            /*
            if (buscar_valor_linea(bufer, comando,conca) == 0)
            {
                //la busqueda no coincide con el comando ingresado
                //strcpy(mat[lim], bufer);
            }
            else
            {
                
            }
            */

            if (strlen(bufer) > 0)
            {
                /*
               printf("linea: %s\n", bufer);
               printf("comando: %s\n", comando);
               printf("conca: %s\n", conca);
               */
                buscar_valor_linea(bufer, comando, conca);
            }

            //en esta linea tendriamos que buscar el valor

            lim++;
        }
        fclose(archivo);
    }
}

int buscar_valor_linea(char linea[200], char comando[200], char *concate)
{
    //todo se guarda en conca

    //comando es del sgte formato "comando="
    //este metodo busca y si existe devuelve un numero >0 y guarda el valor en una variable char ENCONTRADO[100]
    //si no encuentra devuelve 0  sigue buscado
    //printf("llega hasta aqui");
    //strcpy(ENCONTRADO, ""); //vaciamos la variable aux
    memset(ENCONTRADO, 0, strlen(ENCONTRADO));
    //strcpy(linea, "");
    //strcpy(comando, "");

    int es_correcto = 0;
    int i = 0;
    int limite = strlen(comando); //limita para que se recorra hasta que acabe la busqueda
    //estas variables se usaran para recorrer el valor para devolver el vallor que sigue
    int continuacion = 0;
    int k;
    if (linea[0] == '#')
    {
        for (i = 1; i < limite; i++)
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
            //concatenamos el valor encontrado en la variable
            strcat(concate, "-0"); //la linea esta comentada
            strcat(concate, "-");
            strcat(concate, ENCONTRADO);
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
            strcat(concate, "-1"); //la linea NO esta comentada
            strcat(concate, "-");
            strcat(concate, ENCONTRADO);
        }
        else
        {
            //printf("\nNO coincide:%s", ENCONTRADO);
        }
    }
    return es_correcto;
}