class Triangulo {
    constructor(lado1, lado2, lado3){
        this.lado1 = lado1;
        this.lado2 = lado2;
        this.lado3 = lado3;
    }
    tipo(){
        let resposta = '' ;
    if (this.lado1 == this.lado2 && this.lado2 == this.lado3) {
        resposta = 'Equilátero';
    }else if (this.lado1 != this.lado2 && this.lado2 != this.lado3 && this.lado1 != this.lado3) {
        resposta = 'Escaleno';
    } else {
        resposta = 'Isosceles';
    }
    return resposta;
    
   }
   showHTML(){
    let str = `<label>Lado1:</label><label>${this.lado1}</label>`;
    str += `<label>Lado2:</label><label>${this.lado2}</label>`;
    str += `<label>Lado3:</label><label>${this.lado3}</label>`;
    str += `<label>Tipo:</label><label>${this.tipo()}</label>`;
    return str;
    }
}
//Criar instâncias desta classe em uma lista
const lista = [];
lista.push(new Triangulo(10,10,10));
lista.push(new Triangulo(10,50,10));
lista.push(new Triangulo(10,10,20));
lista.push(new Triangulo(10,20,30));
lista.push(new Triangulo(10,50,10));

//Mostrar no Console
console.table(lista);

//Mostrar no HTML
const dados = document.getElementById('triangulos');
lista.forEach(obj => {
    const div = document.createElement('div');
    div.innerHTML = obj.showHTML();
    dados.appendChild(div);
});
