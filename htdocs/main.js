
let ff =document.getElementById("btnestado");
let formulario =document.getElementById("FORMULARIO");

let s1 = document.getElementById("s1");
let s2 = document.getElementById("s2");
let s3 = document.getElementById("s3");
let s4 = document.getElementById("s4");
let s5 = document.getElementById("s5");
let s6 = document.getElementById("s6");
let s7 = document.getElementById("s7");
let s8 = document.getElementById("s8");
let s9 = document.getElementById("s9");
let s10 = document.getElementById("s10");
let s11 = document.getElementById("s11");
let s12 = document.getElementById("s12");
let s13 = document.getElementById("s13");
let s14 = document.getElementById("s14");
let s15 = document.getElementById("s15");
let s16 = document.getElementById("s16");
let s17 = document.getElementById("s17");
let s18 = document.getElementById("s18");
let s19 = document.getElementById("s19");
let s20 = document.getElementById("s20");
let s21 = document.getElementById("s21");
let s22 = document.getElementById("s22");
let s23 = document.getElementById("s23");
let s24 = document.getElementById("s24");
let s25 = document.getElementById("s25");
let s26 = document.getElementById("s26");
let s27 = document.getElementById("s27");
let s28 = document.getElementById("s28");
let s29 = document.getElementById("s29");
let s30 = document.getElementById("s30");
let s31 = document.getElementById("s31");
let s32 = document.getElementById("s32");
let s33 = document.getElementById("s33");
let s34 = document.getElementById("s34");
let s35 = document.getElementById("s35");
let s36 = document.getElementById("s36");
let s37 = document.getElementById("s37");
let s38 = document.getElementById("s38");
let s39 = document.getElementById("s39");
let s40 = document.getElementById("s40");
let s41 = document.getElementById("s41");
let s42 = document.getElementById("s42");
let s43 = document.getElementById("s43");
let s44 = document.getElementById("s44");
let s45 = document.getElementById("s45");
let s46 = document.getElementById("s46");
let s47 = document.getElementById("s47");
//carcamos los valores
let t1 = document.getElementById('t1');
let t2 = document.getElementById('t2');
let t3 = document.getElementById('t3');
let t4 = document.getElementById('t4');
let t5 = document.getElementById('t5');
let t6 = document.getElementById('t6');
let t7 = document.getElementById('t7');
let t8 = document.getElementById('t8');
let t9 = document.getElementById('t9');
let t10 = document.getElementById('t10');
let t11 = document.getElementById('t11');
let t12 = document.getElementById('t12');
let t13 = document.getElementById('t13');
let t14 = document.getElementById('t14');
let t15 = document.getElementById('t15');
let t16 = document.getElementById('t16');
let t17 = document.getElementById('t17');
let t18 = document.getElementById('t18');
let t19 = document.getElementById('t19');
let t20 = document.getElementById('t20');
let t21 = document.getElementById('t21');
let t22a = document.getElementById('t22a');
let t22b = document.getElementById('t22b');
let t23 = document.getElementById('t23');
let t24 = document.getElementById('t24');
let t25 = document.getElementById('t25');
let t26 = document.getElementById('t26');
let t27 = document.getElementById('t27');
let t28 = document.getElementById('t28');
let t29 = document.getElementById('t29');
let t30 = document.getElementById('t30');
let t31 = document.getElementById('t31');
let t32 = document.getElementById('t32');
let t33 = document.getElementById('t33');
let t34 = document.getElementById('t34');
let t35 = document.getElementById('t35');
let t36 = document.getElementById('t36');
let t37 = document.getElementById('t37');
let t38 = document.getElementById('t38');
let t39 = document.getElementById('t39');
let t40 = document.getElementById('t40');
let t41 = document.getElementById('t41');
let t42 = document.getElementById('t42');
let t43 = document.getElementById('t43');
let t44 = document.getElementById('t44');
let t45 = document.getElementById('t45');
let t46 = document.getElementById('t46');
let t47 = document.getElementById('t47');



s1.onchange = cambioestadoswitch;
s2.onchange = cambioestadoswitch;
s3.onchange = cambioestadoswitch;
s4.onchange = cambioestadoswitch;
s5.onchange = cambioestadoswitch;
s6.onchange = cambioestadoswitch;
s7.onchange = cambioestadoswitch;
s8.onchange = cambioestadoswitch;
s9.onchange = cambioestadoswitch;
s10.onchange = cambioestadoswitch;
s11.onchange = cambioestadoswitch;
s12.onchange = cambioestadoswitch;
s13.onchange = cambioestadoswitch;
s14.onchange = cambioestadoswitch;
s15.onchange = cambioestadoswitch;
s16.onchange = cambioestadoswitch;
s17.onchange = cambioestadoswitch;
s18.onchange = cambioestadoswitch;
s19.onchange = cambioestadoswitch;
s20.onchange = cambioestadoswitch;
s21.onchange = cambioestadoswitch;
s22.onchange = cambioestadoswitch;
s23.onchange = cambioestadoswitch;
s24.onchange = cambioestadoswitch;
s25.onchange = cambioestadoswitch;
s26.onchange = cambioestadoswitch;
s27.onchange = cambioestadoswitch;
s28.onchange = cambioestadoswitch;
s29.onchange = cambioestadoswitch;
s30.onchange = cambioestadoswitch;
s31.onchange = cambioestadoswitch;
s32.onchange = cambioestadoswitch;
s33.onchange = cambioestadoswitch;
s34.onchange = cambioestadoswitch;
s35.onchange = cambioestadoswitch;
s36.onchange = cambioestadoswitch;
s37.onchange = cambioestadoswitch;
s38.onchange = cambioestadoswitch;
s39.onchange = cambioestadoswitch;
s40.onchange = cambioestadoswitch;
s41.onchange = cambioestadoswitch;
s42.onchange = cambioestadoswitch;
s43.onchange = cambioestadoswitch;
s44.onchange = cambioestadoswitch;
s45.onchange = cambioestadoswitch;
s46.onchange = cambioestadoswitch;
s47.onchange = cambioestadoswitch;

ff.onclick=concatenar_formato;

function cargar_switch(){
    var i=0;
    for (i=1;i<48;i++){
        let sw=document.getElementById("s" + i);
        cambioestadoswitch(sw);
    }
}

function cambioestadoswitch(evento) {
    var id_aux = this.id;

    if (id_aux === "s22") {
        let elemento_aux = document.getElementById("t22a");
        let elemento_aux1 = document.getElementById("t22b");
        if (this.checked) {
            elemento_aux.disabled = false;
            elemento_aux1.disabled = false;
        } else {
            elemento_aux.disabled = true;
            elemento_aux1.disabled = true;            
        }
    } else {
        let elemento_aux2 = document.getElementById("t" + id_aux.slice(1));
        if (this.checked) {
            elemento_aux2.disabled = false;

        } else {
            elemento_aux2.disabled = true;
        }
    }
    /*
     let elemento_aux =document.getElementById("t" + id_aux.slice(1));
        if (this.checked){
            elemento_aux.disabled = false;

        }else{
            elemento_aux.disabled = true;
        }
        */


}


/*
//var checkbox = document.querySelector("input[type=checkbox]");
s1.addEventListener('change', function() {
    if(s1.checked) {
        alert("esta activado");
    } else {
        // Checkbox is not checked..
        alert("esta desactivado");
    }
});

*/
/*
function reconstruir_archivo() {
    var conca;
    var aux;
    var aux2;

    conca = "# Example config file /etc/vsftpd.conf";
    conca = conca + "\n" + "# The default compiled in settings are fairly paranoid. This sample file";
    conca = conca + "\n" + "# loosens things up a bit, to make the ftp daemon more usable.";
    conca = conca + "\n" + "# Please see vsftpd.conf.5 for all compiled in defaults.";
    conca = conca + "\n" + "# If you do not change anything here you will have a minimum setup for an";
    conca = conca + "\n" + "# anonymus FTP server.";
    conca = conca + "\n" + "# READ THIS: This example file is NOT an exhaustive list of vsftpd options.";
    conca = conca + "\n" + "# Please read the vsftpd.conf.5 manual page to get a full idea of vsftpd's";
    conca = conca + "\n" + "# capabilities.";
    conca = conca + "\n" + "# anonymus FTP server.";
    conca = conca + "\n" + "# ################";
    conca = conca + "\n" + "# General Settings";
    conca = conca + "\n" + "# ################";

    conca = conca + "\n" + "# Uncomment this to enable any form of FTP write command.";
    aux = devolver_caracter_comentado(s1.checked);
    aux = aux + "write_enable=" + devolver_estado_combo(t1.value);
    conca = conca + "\n" + aux;

    conca = conca + "\n" + "# Activate directory messages - messages given to remote users when they";
    conca = conca + "\n" + "# go into a certain directory.";
    aux = devolver_caracter_comentado(s2.checked);
    aux = aux + "dirmessage_enable=" + devolver_estado_combo(t2.value);
    conca = conca + "\n" + aux;

    conca = conca + "\n" + "# It is recommended that you define on your system a unique user which the";
    conca = conca + "\n" + "# ftp server can use as a totally isolated and unprivileged user.";
    aux = devolver_caracter_comentado(s3.checked);
    aux = aux + "nopriv_user=" + t3.value;
    conca = conca + "\n" + aux;

    conca = conca + "\n" + "# You may fully customise the login banner string:";
    aux = devolver_caracter_comentado(s4.checked);
    aux = aux + "ftpd_banner=" + t4.value;
    conca = conca + "\n" + aux;


    conca = conca + "\n" + "# You may activate the '-R' option to the builtin ls. This is disabled by";
    conca = conca + "\n" + "# default to avoid remote users being able to cause excessive I/O on large";
    conca = conca + "\n" + "# sites. However, some broken FTP clients such as 'ncftp' and 'mirror' assume";
    conca = conca + "\n" + "# the presence of the '-R' option, so there is a strong case for enabling it.";
    aux = devolver_caracter_comentado(s5.checked);
    aux = aux + "ls_recurse_enable=" + devolver_estado_combo(t5.value);
    conca = conca + "\n" + aux;

    conca = conca + "\n" + "# You may specify a file of disallowed anonymous e-mail addresses. Apparently";
    conca = conca + "\n" + "# useful for combatting certain DoS attacks.";
    if (s6.checked) {
        aux2 = "YES";
    } else {
        aux2 = "NO"
    }
    conca = conca + "\n" + devolver_caracter_comentado(s6.checked) + "deny_email_enable=" + aux2;
    conca = conca + "\n" + "# (default follows)";
    aux = devolver_caracter_comentado(s6.checked);
    aux = aux + "banned_email_file=" + t6.value;
    conca = conca + "\n" + aux;

    conca = conca + "\n" + "# If  enabled,  all  user  and  group  information in";
    conca = conca + "\n" + "# directory listings will be displayed as 'ftp'.";
    aux = devolver_caracter_comentado(s7.checked);
    aux = aux + "hide_ids=" + devolver_estado_combo(t7.value);
    conca = conca + "\n" + aux;

    conca = conca + "\n" + "# #######################";
    conca = conca + "\n" + "# Local FTP user Settings";
    conca = conca + "\n" + "# #######################";
    conca = conca + "\n" + "# Uncomment this to allow local users to log in.";
    aux = devolver_caracter_comentado(s8.checked);
    aux = aux + "local_enable=" + devolver_estado_combo(t8.value);
    conca = conca + "\n" + aux;

    conca = conca + "\n" + "# Default umask for local users is 077. You may wish to change this to 022,";
    conca = conca + "\n" + "# if your users expect that (022 is used by most other ftpd's)";
    aux = devolver_caracter_comentado(s9.checked);
    aux = aux + "local_umask=" + t9.value;
    conca = conca + "\n" + aux;

    conca = conca + "\n" + "# You may specify an explicit list of local users to chroot() to their home";
    conca = conca + "\n" + "# directory. If chroot_local_user is YES, then this list becomes a list of";
    conca = conca + "\n" + "# users to NOT chroot().";
    aux = devolver_caracter_comentado(s10.checked);
    aux = aux + "chroot_local_user=" + devolver_estado_combo(t10.value);
    conca = conca + "\n" + aux;

    aux = devolver_caracter_comentado(s11.checked);
    aux = aux + "chroot_list_enable=" + devolver_estado_combo(t11.value);
    conca = conca + "\n" + aux;

    conca = conca + "\n" + "# (default follows)";
    aux = devolver_caracter_comentado(s12.checked);
    aux = aux + "chroot_list_file=" + t12.value;
    conca = conca + "\n" + aux;

    conca = conca + "\n" + "# Performs chroot with original (non-root) credentials. This is usefull on nfs with squash_root,";
    conca = conca + "\n" + "# where root becomes nobody and would need -x access.";
    aux = devolver_caracter_comentado(s13.checked);
    aux = aux + "allow_root_squashed_chroot=" + devolver_estado_combo(t13.value);
    conca = conca + "\n" + aux;

    conca = conca + "\n" + "# The maximum data transfer rate permitted, in bytes per second, for";
    conca = conca + "\n" + "# local authenticated users. The default is 0 (unlimited).";
    aux = devolver_caracter_comentado(s14.checked);
    aux = aux + "local_max_rate=" + t14.value;
    conca = conca + "\n" + aux;

    conca = conca + "\n" + "# ###########################";
    conca = conca + "\n" + "# Anonymus FTP user Settings";
    conca = conca + "\n" + "# ###########################";
    conca = conca + "\n" + "# Allow anonymous FTP? (Beware - allowed by default if you comment this out).";
    aux = devolver_caracter_comentado(s15.checked);
    aux = aux + "anonymous_enable=" + devolver_estado_combo(t15.value);
    conca = conca + "\n" + aux;

    conca = conca + "\n" + "# The maximum data transfer rate permitted, in bytes per second, for anonymous";
    conca = conca + "\n" + "# authenticated users. The default is 0 (unlimited).";
    aux = devolver_caracter_comentado(s16.checked);
    aux = aux + "anon_max_rate=" + t16.value;
    conca = conca + "\n" + aux;

    conca = conca + "\n" + "# Anonymous users will only be allowed to download files which are";
    conca = conca + "\n" + "# world readable.";
    aux = devolver_caracter_comentado(s17.checked);
    aux = aux + "anon_world_readable_only=" + devolver_estado_combo(t17.value);
    conca = conca + "\n" + aux;

    conca = conca + "\n" + "# Default umask for anonymus users is 077. You may wish to change this to 022,";
    conca = conca + "\n" + "# if your users expect that (022 is used by most other ftpd's)";
    aux = devolver_caracter_comentado(s18.checked);
    aux = aux + "anon_umask=" + t18.value;
    conca = conca + "\n" + aux;

    conca = conca + "\n" + "# Uncomment this to allow the anonymous FTP user to upload files. This only";
    conca = conca + "\n" + "# has an effect if the above global write enable is activated. Also, you will";
    conca = conca + "\n" + "# obviously need to create a directory writable by the FTP user.";
    aux = devolver_caracter_comentado(s19.checked);
    aux = aux + "anon_upload_enable=" + devolver_estado_combo(t19.value);
    conca = conca + "\n" + aux;

    conca = conca + "\n" + "# Uncomment this if you want the anonymous FTP user to be able to create";
    conca = conca + "\n" + "# new directories.";
    aux = devolver_caracter_comentado(s20.checked);
    aux = aux + "anon_mkdir_write_enable=" + devolver_estado_combo(t20.value);
    conca = conca + "\n" + aux;

    conca = conca + "\n" + "# Uncomment this to enable anonymus FTP users to perform other write operations";
    conca = conca + "\n" + "# like deletion and renaming.";
    aux = devolver_caracter_comentado(s21.checked);
    aux = aux + "anon_other_write_enable=" + devolver_estado_combo(t21.value);
    conca = conca + "\n" + aux;

    conca = conca + "\n" + "# If you want, you can arrange for uploaded anonymous files to be owned by";
    conca = conca + "\n" + "# a different user. Note! Using 'root' for uploaded files is not";
    conca = conca + "\n" + "# recommended!";
    aux = devolver_caracter_comentado(s22.checked);
    aux = aux + "chown_uploads=" + devolver_estado_combo(t22a.value);
    conca = conca + "\n" + aux;
    aux = devolver_caracter_comentado(s22.checked);
    aux = aux + "chown_username=" + t22b.value;
    conca = conca + "\n" + aux;

    conca = conca + "\n" + "# ###########################";
    conca = conca + "\n" + "# Log Settings";
    conca = conca + "\n" + "# ###########################";
    conca = conca + "\n" + "# Log to the syslog daemon instead of using an logfile.";
    aux = devolver_caracter_comentado(s23.checked);
    aux = aux + "syslog_enable=" + devolver_estado_combo(t23.value);
    conca = conca + "\n" + aux;

    conca = conca + "\n" + "# Uncomment this to log all FTP requests and responses.";
    aux = devolver_caracter_comentado(s24.checked);
    aux = aux + "log_ftp_protocol=" + devolver_estado_combo(t24.value);
    conca = conca + "\n" + aux;

    conca = conca + "\n" + "# Activate logging of uploads/downloads.";
    aux = devolver_caracter_comentado(s25.checked);
    aux = aux + "xferlog_enable=" + devolver_estado_combo(t25.value);
    conca = conca + "\n" + aux;

    conca = conca + "\n" + "# You may override where the log file goes if you like. The default is shown";
    conca = conca + "\n" + "# below.";
    aux = devolver_caracter_comentado(s26.checked);
    aux = aux + "vsftpd_log_file=" + t26.value;
    conca = conca + "\n" + aux;

    conca = conca + "\n" + "# If you want, you can have your log file in standard ftpd xferlog format.";
    conca = conca + "\n" + "# Note that the default log file location is /var/log/xferlog in this case.";
    aux = devolver_caracter_comentado(s27.checked);
    aux = aux + "xferlog_std_format=" + devolver_estado_combo(t27.value);
    conca = conca + "\n" + aux;

    conca = conca + "\n" + "# You may override where the log file goes if you like. The default is shown";
    conca = conca + "\n" + "# below.";
    aux = devolver_caracter_comentado(s28.checked);
    aux = aux + "xferlog_file=" + t28.value;
    conca = conca + "\n" + aux;



    conca = conca + "\n" + "# Enable this to have booth logfiles. Standard xferlog and vsftpd's own style log.";
    aux = devolver_caracter_comentado(s29.checked);
    aux = aux + "dual_log_enable=" + devolver_estado_combo(t29.value);
    conca = conca + "\n" + aux;

    conca = conca + "\n" + "# Uncomment this to enable session status information in the system process listing.";
    aux = devolver_caracter_comentado(s30.checked);
    aux = aux + "setproctitle_enable=" + devolver_estado_combo(t30.value);
    conca = conca + "\n" + aux;

    conca = conca + "\n" + "# ###################";
    conca = conca + "\n" + "# Transfer Settings";
    conca = conca + "\n" + "# ###################";
    conca = conca + "\n" + "# Make sure PORT transfer connections originate from port 20 (ftp-data).";
    aux = devolver_caracter_comentado(s31.checked);
    aux = aux + "connect_from_port_20=" + devolver_estado_combo(t31.value);
    conca = conca + "\n" + aux;

    conca = conca + "\n" + "# You may change the default value for timing out an idle session.";
    aux = devolver_caracter_comentado(s32.checked);
    aux = aux + "idle_session_timeout=" + t32.value;
    conca = conca + "\n" + aux;

    conca = conca + "\n" + "# You may change the default value for timing out a data connection.";
    aux = devolver_caracter_comentado(s33.checked);
    aux = aux + "data_connection_timeout=" + t33.value;
    conca = conca + "\n" + aux;

    conca = conca + "\n" + "# Enable this and the server will recognise asynchronous ABOR requests. Not";
    conca = conca + "\n" + "# recommended for security (the code is non-trivial). Not enabling it,";
    conca = conca + "\n" + "# however, may confuse older FTP clients.";
    aux = devolver_caracter_comentado(s34.checked);
    aux = aux + "async_abor_enable=" + devolver_estado_combo(t34.value);
    conca = conca + "\n" + aux;

    conca = conca + "\n" + "# By default the server will pretend to allow ASCII mode but in fact ignore";
    conca = conca + "\n" + "# the request. Turn on the below options to have the server actually do ASCII";
    conca = conca + "\n" + "# mangling on files when in ASCII mode.";
    conca = conca + "\n" + "# Beware that on some FTP servers, ASCII support allows a denial of service";
    conca = conca + "\n" + "# attack (DoS) via the command 'SIZE /big/file' in ASCII mode. vsftpd";
    conca = conca + "\n" + "# predicted this attack and has always been safe, reporting the size of the raw file";
    conca = conca + "\n" + "# ASCII mangling is a horrible feature of the protocol.";
    aux = devolver_caracter_comentado(s35.checked);
    aux = aux + "ascii_upload_enable=" + devolver_estado_combo(t35.value);
    conca = conca + "\n" + aux;

    aux = devolver_caracter_comentado(s36.checked);
    aux = aux + "ascii_download_enable=" + devolver_estado_combo(t36.value);
    conca = conca + "\n" + aux;

    conca = conca + "\n" + "# Set to NO if you want to disallow the  PASV  method of obtaining a data";
    conca = conca + "\n" + "# connection.";
    aux = devolver_caracter_comentado(s37.checked);
    aux = aux + "pasv_enable=" + devolver_estado_combo(t37.value);
    conca = conca + "\n" + aux;

    conca = conca + "\n" + "# PAM setting. Do NOT change this unless you know what you do!";
    aux = devolver_caracter_comentado(s38.checked);
    aux = aux + "pam_service_name=" + t38.value;
    conca = conca + "\n" + aux;

    conca = conca + "\n" + "# When 'listen' directive is enabled, vsftpd runs in standalone mode and";
    conca = conca + "\n" + "# listens on IPv4 sockets. This directive cannot be used in conjunction";
    conca = conca + "\n" + "# with the listen_ipv6 directive.";
    aux = devolver_caracter_comentado(s39.checked);
    aux = aux + "listen=" + devolver_estado_combo(t39.value);
    conca = conca + "\n" + aux;

    conca = conca + "\n" + "# This directive enables listening on IPv6 sockets. To listen on IPv4 and IPv6";
    conca = conca + "\n" + "# sockets, you must run two copies of vsftpd with two configuration files.";
    conca = conca + "\n" + "# Make sure, that one of the listen options is commented !!";
    aux = devolver_caracter_comentado(s40.checked);
    aux = aux + "listen_ipv6=" + devolver_estado_combo(t40.value);
    conca = conca + "\n" + aux;

    conca = conca + "\n" + "# Set 'ssl_enable=YES' to enable SSL support and configure the location of";
    conca = conca + "\n" + "# your local certificate (RSA, DSA, or both). Note that vsftpd won't start";
    conca = conca + "\n" + "# if either of the 'xxx_cert_file' options sets a path that doesn't exist.";
    aux = devolver_caracter_comentado(s41.checked);
    aux = aux + "ssl_enable=" + devolver_estado_combo(t41.value);
    conca = conca + "\n" + aux;

    aux = devolver_caracter_comentado(s42.checked);
    aux = aux + "rsa_cert_file=" + t42.value;
    conca = conca + "\n" + aux;

    aux = devolver_caracter_comentado(s43.checked);
    aux = aux + "dsa_cert_file=" + t43.value;
    conca = conca + "\n" + aux;

    conca = conca + "\n" + "# Limit passive ports to this range to assis firewalling";
    aux = devolver_caracter_comentado(s44.checked);
    aux = aux + "pasv_min_port=" + t44.value;
    conca = conca + "\n" + aux;

    aux = devolver_caracter_comentado(s45.checked);
    aux = aux + "pasv_max_port=" + t45.value;
    conca = conca + "\n" + aux;

    conca = conca + "\n" + "### security features that are incompatible with some other settings. ###";
    conca = conca + "\n" + "# isolate_network ensures the vsftpd subprocess is started in own network";
    conca = conca + "\n" + "# namespace (see CLONE_NEWNET in clone(2)). It however disables the";
    conca = conca + "\n" + "# authentication methods needs the network access (LDAP, NIS, ...).";
    aux = devolver_caracter_comentado(s46.checked);
    aux = aux + "isolate_network=" + devolver_estado_combo(t46.value);
    conca = conca + "\n" + aux;

    conca = conca + "\n" + "# seccomp_sanbox add an aditional security layer limiting the number of a";
    conca = conca + "\n" + "# syscalls can be performed via vsftpd. However it might happen that a";
    conca = conca + "\n" + "# whitelist don't allow a legitimate call (usually indirectly triggered by";
    conca = conca + "\n" + "# third-party library like pam, or openssl) and the process is being killed by";

    conca = conca + "\n" + "# Therefor if your server dies on common situations (file download, upload),";
    conca = conca + "\n" + "# uncomment following line and don't forget to open  bug at";
    conca = conca + "\n" + "# https://bugzilla.novell.com";
    aux = devolver_caracter_comentado(s47.checked);
    aux = aux + "seccomp_sandbox=" + devolver_estado_combo(t47.value);
    conca = conca + "\n" + aux;

    let ftpd = document.getElementById("ftpd");
    ftpd.value = conca;
    guardarArchivoDeTexto(conca, "ftpdaux");
    //alert(conca);
}
*/
function devolver_estado_combo(num) {
    //dado un numero devuelve el valor asociado
    //1->true
    //2->false
    if (num == 1) {
        return "YES";
    } else {
        return "NO";
    }
}
function devolver_caracter_comentado(valor) {
    //dado un boolean devuelve "#" si es false y si es true->""
    if (valor == true) {
        return ""
    } else {
        return "#"
    }
}




function concatenar_formato() {
    //devuelve 0/1->comentado/descomentado
    //0\
    var conca;
    var aux;
    var aux2;
    conca = "";


    aux = s1.checked;
    aux = aux + '&' + devolver_estado_combo(t1.value);
    conca = "&"+aux;

    aux = s2.checked;
    aux = aux + '&' + devolver_estado_combo(t2.value);
    conca = conca + '&' + aux;

    aux = s3.checked;
    aux = aux + '&' + t3.value;
    conca = conca + '&' + aux;

    aux = s4.checked;
    aux = aux + '&' + t4.value;
    conca = conca + '&' + aux;

    aux = s5.checked;
    aux = aux + '&' + devolver_estado_combo(t5.value);
    conca = conca + '&' + aux;

    aux = s6.checked;
    aux = aux + '&' + t6.value;
    conca = conca + '&' + aux;

    aux = s7.checked;
    aux = aux + '&' + devolver_estado_combo(t7.value);
    conca = conca + '&' + aux;
    //////////////////

    aux = s8.checked;
    aux = aux + '&' + devolver_estado_combo(t8.value);
    conca = conca + '&' + aux;

    aux = s9.checked;
    aux = aux + '&' + t9.value;
    conca = conca + '&' + aux;

    aux = s10.checked;
    aux = aux + '&' + devolver_estado_combo(t10.value);
    conca = conca + '&' + aux;

    aux = s11.checked;
    aux = aux + '&' + devolver_estado_combo(t11.value);
    conca = conca + '&' + aux;

    aux = s12.checked;
    aux = aux + '&' + t12.value;
    conca = conca + '&' + aux;

    aux = s13.checked;
    aux = aux + '&' + devolver_estado_combo(t13.value);
    conca = conca + '&' + aux;

    aux = s14.checked;
    aux = aux + '&' + t14.value;
    conca = conca + '&' + aux;

    ///////////////////////

    aux = s15.checked;
    aux = aux + '&' + devolver_estado_combo(t15.value);
    conca = conca + '&' + aux;

    aux = s16.checked;
    aux = aux + '&' + t16.value;
    conca = conca + '&' + aux;

    aux = s17.checked;
    aux = aux + '&' + devolver_estado_combo(t17.value);
    conca = conca + '&' + aux;

    aux = s18.checked;
    aux = aux + '&' + t18.value;
    conca = conca + '&' + aux;

    aux = s19.checked;
    aux = aux + '&' + devolver_estado_combo(t19.value);
    conca = conca + '&' + aux;

    aux = s20.checked;
    aux = aux + '&' + devolver_estado_combo(t20.value);
    conca = conca + '&' + aux;

    aux = s21.checked;
    aux = aux + '&' + devolver_estado_combo(t21.value);
    conca = conca + '&' + aux;

    aux = s22.checked;
    aux = aux + '&' + devolver_estado_combo(t22a.value);
    conca = conca + '&' + aux;
    aux = s22.checked;
    aux = aux + '&' + t22b.value;
    conca = conca + '&' + aux;

    //////////////////////

    aux = s23.checked;
    aux = aux + '&' + devolver_estado_combo(t23.value);
    conca = conca + '&' + aux;

    aux = s24.checked;
    aux = aux + '&' + devolver_estado_combo(t24.value);
    conca = conca + '&' + aux;

    aux = s25.checked;
    aux = aux + '&' + devolver_estado_combo(t25.value);
    conca = conca + '&' + aux;

    aux = s26.checked;
    aux = aux + '&' + t26.value;
    conca = conca + '&' + aux;

    aux = s27.checked;
    aux = aux + '&' + devolver_estado_combo(t27.value);
    conca = conca + '&' + aux;

    aux = s28.checked;
    aux = aux + '&' + t28.value;
    conca = conca + '&' + aux;

    aux = s29.checked;
    aux = aux + '&' + devolver_estado_combo(t29.value);
    conca = conca + '&' + aux;

    aux = s30.checked;
    aux = aux + '&' + devolver_estado_combo(t30.value);
    conca = conca + '&' + aux;

    /////////////////////////

    aux = s31.checked;
    aux = aux + '&' + devolver_estado_combo(t31.value);
    conca = conca + '&' + aux;

    aux = s32.checked;
    aux = aux + '&' + t32.value;
    conca = conca + '&' + aux;

    aux = s33.checked;
    aux = aux + '&' + t33.value;
    conca = conca + '&' + aux;

    aux = s34.checked;
    aux = aux + '&' + devolver_estado_combo(t34.value);
    conca = conca + '&' + aux;

    aux = s35.checked;
    aux = aux + '&' + devolver_estado_combo(t35.value);
    conca = conca + '&' + aux;

    aux = s36.checked;
    aux = aux + '&' + devolver_estado_combo(t36.value);
    conca = conca + '&' + aux;

    aux = s37.checked;
    aux = aux + '&' + devolver_estado_combo(t37.value);
    conca = conca + '&' + aux;

    aux = s38.checked;
    aux = aux + '&' + t38.value;
    conca = conca + '&' + aux;

    aux = s39.checked;
    aux = aux + '&' + devolver_estado_combo(t39.value);
    conca = conca + '&' + aux;

    aux = s40.checked;
    aux = aux + '&' + devolver_estado_combo(t40.value);
    conca = conca + '&' + aux;

    aux = s41.checked;
    aux = aux + '&' + devolver_estado_combo(t41.value);
    conca = conca + '&' + aux;

    aux = s42.checked;
    aux = aux + '&' + t42.value;
    conca = conca + '&' + aux;

    aux = s43.checked;
    aux = aux + '&' + t43.value;
    conca = conca + '&' + aux;

    aux = s44.checked;
    aux = aux + '&' + t44.value;
    conca = conca + '&' + aux;

    aux = s45.checked;
    aux = aux + '&' + t45.value;
    conca = conca + '&' + aux;

    aux = s46.checked;
    aux = aux + '&' + devolver_estado_combo(t46.value);
    conca = conca + '&' + aux;

    aux = s47.checked;
    aux = aux + '&' + devolver_estado_combo(t47.value);
    conca = conca + '&' + aux;
    conca = conca + '&';

    alert(conca);

    let ftpd = document.getElementById("ftpd");
    ftpd.value = conca;
    //HACEMOS CLICK DIRECTAMENTE EN SUBMIT
    formulario.submit();
    //guardarArchivoDeTexto(conca, "ftpdaux");
    //alert(conca);
}
const guardarArchivoDeTexto = (contenido, nombre) => {
    const a = document.createElement("a");
    const archivo = new Blob([contenido], { type: 'text/plain' });
    const url = URL.createObjectURL(archivo);
    a.href = url;
    a.download = nombre;
    a.click();
    URL.revokeObjectURL(url);
}

//ESTOY AQUI, ME FALTA VOLVER A COMPILAR
//RESTAURAR VSFTPD
//BUSCAR LA FORMA DE CONCATENAR
//OJO NO ESTA FUNCIONANDO EL BUSCAR PROCESO,CREO QUE SIEMPRE DEVUELVE ALGO
//PROBAR CON LIMPIAR LA VARIABLE PID