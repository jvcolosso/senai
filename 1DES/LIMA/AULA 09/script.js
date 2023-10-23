// // let - variavel local
// // var - varoavel global
// // const - variavel constante

// const obj = [
//     {
//     name: 'João',
//     age: 21,
//     country: 'Brazil'
//     },
//     {
//     name: 'Ana',
//     age: 18,
//     country: 'Germany' 
//     },
//     {
//     name: 'Sofya',
//     age: 22,
//     country: 'Russia'    
//     },
// ]

// console.log(obj);
// console.warn('AVISO');
// console.error('ERRO');
// console.table(obj);

//OPeradores Aritimeticos

// + soma
// - subtração
// * multiplicação
// / divisão
// ** potenciação
// % resto da divisão

//Operadores de comparação

//  > maior que
//  < menor que
//  >= maior ou igual que
//  <= menor ou igual que
//  = atribuição
//  == igualdade (valor) atribuir um valor a outro
//  != diferente (valor) 
//  === istritamente igualdade (valor e tipo)
//  !== istirtamente diferente (valor e tipo)

// var a = 10;
// var b = '10';
// console.log(a === b);

//----------------------------------------------------------------------------------------------------------------------------------------------------------------

//Desenvolva um programa que leia três variáveis (a, b, c) e resolva a expressão: ( a + b ) / c.
//CONTA SIMPLES EM JAVASCRIPT EX1 DA LISTA1 DE C.        
// let a = 5;
// let b = 5;
// let c = 2;
// let d = (a + b) / c

// console.log(d)

//---------------------------------------------------------------------------------------------------------------------------------------------------------------


//Desenvolva um programa que leia a velocidade de um carro (km/h) e a distância a ser percorrida (km) por ele. 
//Calcule e apresente na tela, quanto tempo (horas) será necessário para o carro percorrer a distância informada.
//EX2 LISTA1 C 
// var vel = 100
// var dist = 25
// var temp = dist / vel;

// console.log(temp);


//---------------------------------------------------------------------------------------------------------------------------------------------------------------


//Desenvolva um programa que leia o nome e o salário de uma pessoa, depois leia o valor do índice percentual (%) de reajuste do salário.
//Calcule e apresente na tela, o valor do novo salário e o nome da pessoa.
//EXC3 LISTA C
// var nome = 'Lucas'
// var salario = 1000
// var reajuste = 10;
// var novoSalario = salario + (salario * reajuste / 100) 

// console.log(nome + ' - Novo Salário: ' , novoSalario);


//----------------------------------------------------------------------------------------------------------------------------------------------------------------------

// var data = new Date()

// var dia = data.getDate();
// var mes = data.getMonth() + 1;
// var ano = data.getFullYear();

// //var anoCompleto = dia + '/' + mes + '/' + ano;
// var anoCompleto = dia + '${dia}/${mes}/${ano}';

// var hora = data.getHours(); 
// var min = data.getMinutes();

// var horaCompleta ='${hora}/${min}';

// console.log(anoCompleto, horaCompleta);

//----------------------------------------------------------------------------------------------------------------------------------------------------------------------------


//Math.ceil() - arredonda para cima
//Math.floor() - arredonda para baixo
//Math.round() - arredonda para o mais próximo

//var n = '10'

//Number.parseInt(); - converte para inteiro

//console.log(n, Number.parseFloat(n));


//-----------------------------------------------------------------------------------------------------------------------------------------------------------------------

//if(){

//}else if(){

//}else{

//}

//-----------------------------------------------------------------------------------------------------------------------------------------------------------------------

//condiçao ? true : false;

// switch (){
//     case 1:
//         break;
//        default:
//         break;

// }

//--------------------------------------------------------------------------------------

// for(let i = 0; i < 10; i++){
//     console.log(i);
// }

//---------------------------------------------------------------------------------------

// while(){
        
// }

//do{

//}while()

//---------------------------------------------------------------------------------------

// var lista = 'a b c d e'.split(' ');

// for(let i = 0; i < lista.length; i++){
//     console.log(lista[i])
// }

// lista.forEach(item =>{
//     console.log(item);
// })

//-------------------------------------------------------------------------------------------

// for(let item of lista){
//     console.log(item);
// }
