
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

function getParameterByName(name) {
    name = name.replace(/[\[]/, "\\[").replace(/[\]]/, "\\]");
    var regex = new RegExp("[\\?&]" + name + "=([^&#]*)"),
        results = regex.exec(location.search);
    return results === null ? "" : decodeURIComponent(results[1].replace(/\+/g, " "));
}
const cuerpoDelDocumento = document.body;
cuerpoDelDocumento.onload = cargar_datos(getParameterByName('ftp'));


function cargar_datos(parametro) {
    var index_aux = 0;
    const myArray = parametro.split("-");
    //alert(parametro);

    //alert(myArray[0] + "-" + myArray[1] + "-" + myArray[2] + "-" &myArray[3] );

    s1.checked = Number(myArray[1]); 
    t1.value = devolver_valor_combobox(myArray[2]);

    s2.checked = Number(myArray[3]);
    t2.value = devolver_valor_combobox(myArray[4]);

    s3.checked =Number(myArray[5]);
    t3.value = devolver_valor_combobox(myArray[6]);

    s4.checked = Number(myArray[7]);
    t4.value = devolver_valor_combobox(myArray[8]);

    s5.checked = Number(myArray[9]);
    t5.value = devolver_valor_combobox(myArray[10]);

    s6.checked = Number(myArray[11]);
    t6.value = devolver_valor_combobox(myArray[12]);

    s7.checked = Number(myArray[13]);
    t7.value = devolver_valor_combobox(myArray[14]);

    s8.checked = Number(myArray[15]);
    t8.value = devolver_valor_combobox(myArray[16]);

    s9.checked = Number(myArray[17]);
    t9.value = devolver_valor_combobox(myArray[18]);

    s10.checked = Number(myArray[19]);
    t10.value = devolver_valor_combobox(myArray[20]);

    s11.checked = Number(myArray[21]);
    t11.value = devolver_valor_combobox(myArray[22]);

    s12.checked = Number(myArray[23]);
    t12.value = devolver_valor_combobox(myArray[24]);

    s13.checked = Number(myArray[25]);
    t13.value = devolver_valor_combobox(myArray[26]);

    s14.checked = Number(myArray[27]);
    t14.value = devolver_valor_combobox(myArray[28]);

    s15.checked = Number(myArray[28]);
    t15.value = devolver_valor_combobox(myArray[30]);

    s16.checked = Number(myArray[31]);
    t16.value = devolver_valor_combobox(myArray[32]);

    s17.checked = Number(myArray[33]);
    t17.value = devolver_valor_combobox(myArray[34]);

    s18.checked = Number(myArray[35]);
    t18.value = devolver_valor_combobox(myArray[36]);

    s19.checked = Number(myArray[37]);
    t19.value = devolver_valor_combobox(myArray[38]);

    s20.checked = Number(myArray[39]);
    t20.value = devolver_valor_combobox(myArray[40]);

    s21.checked = Number(myArray[41]);
    t21.value = devolver_valor_combobox(myArray[42]);

    s22.checked = Number(myArray[43]);
    t22a.value = devolver_valor_combobox(myArray[44]);

    t22b.value = devolver_valor_combobox(myArray[46]);

    s23.checked = Number(myArray[47]);
    t23.value = devolver_valor_combobox(myArray[48]);

    s24.checked = Number(myArray[49]);
    t24.value = devolver_valor_combobox(myArray[50]);

    s25.checked =Number(myArray[51]);
    t25.value = devolver_valor_combobox(myArray[52]);

    s26.checked = Number(myArray[53]);
    t26.value = devolver_valor_combobox(myArray[54]);

    s27.checked = Number(myArray[55]);
    t27.value = devolver_valor_combobox(myArray[56]);

    s28.checked = Number(myArray[57]);
    t28.value = devolver_valor_combobox(myArray[58]);

    s29.checked = Number(myArray[59]);
    t29.value = devolver_valor_combobox(myArray[60]);

    s30.checked = Number(myArray[61]);
    t30.value = devolver_valor_combobox(myArray[62]);

    s31.checked = Number(myArray[63]);
    t31.value = devolver_valor_combobox(myArray[64]);

    s32.checked = Number(myArray[65]);
    t32.value = devolver_valor_combobox(myArray[66]);

    s33.checked = Number(myArray[67]);
    t33.value = devolver_valor_combobox(myArray[68]);

    s34.checked = Number(myArray[69]);
    t34.value = devolver_valor_combobox(myArray[70]);

    s35.checked = Number(myArray[71]);
    t35.value = devolver_valor_combobox(myArray[72]);

    s36.checked = Number(myArray[73]);
    t36.value = devolver_valor_combobox(myArray[74]);

    s37.checked = Number(myArray[75]);
    t37.value = devolver_valor_combobox(myArray[76]);

    s38.checked = Number(myArray[77]);
    t38.value = devolver_valor_combobox(myArray[78]);

    s39.checked = Number(myArray[79]);
    t39.value = devolver_valor_combobox(myArray[80]);

    s40.checked = Number(myArray[81]);
    t40.value = devolver_valor_combobox(myArray[82]);

    s41.checked = Number(myArray[83]);
    t41.value = devolver_valor_combobox(myArray[84]);

    s42.checked = Number(myArray[85]);
    t42.value = devolver_valor_combobox(myArray[86]);

    s43.checked = Number(myArray[87]);
    t43.value = devolver_valor_combobox(myArray[88]);

    s44.checked = Number(myArray[89]);
    t44.value = devolver_valor_combobox(myArray[90]);

    s45.checked = Number(myArray[91]);
    t45.value = devolver_valor_combobox(myArray[92]);

    s46.checked = Number(myArray[93]);
    t46.value = devolver_valor_combobox(myArray[94]);

    s47.checked = Number(myArray[95]);
    t47.value = devolver_valor_combobox(myArray[96]);

    cargar_switch(); //importante que carguemos los estilos del switch

    /*
    myArray.forEach(function(elemento, index) {
        //alternar pares e impares
        //impares sw/pares t

        //index empieza eb 0
        index_aux=index +1;
        if (index_aux%2==0){
            //cargamos el switch
            let sw = document.getElementById('s47');
            if (index_aux>=1 && index_aux<=21){

            }else{


            }



        }else{


        }
        //tres escenarios
        //1:< a 22 : solo new=index+1 s(new).value t(new).value
        //2:==22 :s22.value tsa(new).value tsb(new).value rango(22)
        
        let txt = document.getElementById('t47');

        alert(`${index} : ${elemento}`);
    });
    */

}

function devolver_valor_switch(contenido){
    if (contenido=="TRUE"){
        return 1;
    }else{
        return 0;
    }
}
function devolver_valor_combobox(valor){
    if (valor=="YES"){
        return 1;
    }else{
        if (valor=="NO"){
            return 2;
        }else{
            
            return valor;
        };
    }
}

//alert(getParameterByName('ftp'));

function cargar_switch() {
    var i = 0;
    var conc;
    for (i = 1; i < 48; i++) {
        conc = "s" + i;
        //alert(conc);
        let sw = document.getElementById(conc);
        cambioestadoswitch(sw);
    }
}

function cambioestadoswitch(evento) {
    var id_aux = evento.id;

    if (id_aux === "s22") {
        let elemento_aux = document.getElementById("t22a");
        let elemento_aux1 = document.getElementById("t22b");
        if (evento.checked) {
            elemento_aux.disabled = false;
            elemento_aux1.disabled = false;
        } else {
            elemento_aux.disabled = true;
            elemento_aux1.disabled = true;
        }
    } else {
        let elemento_aux2 = document.getElementById("t" + id_aux.slice(1));
        if (evento.checked) {
            elemento_aux2.disabled = false;

        } else {
            elemento_aux2.disabled = true;
        }
    }
}