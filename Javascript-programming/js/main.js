const Usuarios = [
{
  id: 1,           
  nome: "Eredin", 
  isAdmin: false    
},
{
id: 2,
nome: "Caua",
isAdmin: true
},

];


 const listaDeAdmin = Usuarios.filter(Usuarios => Usuarios.isAdmin === true );

const listaComYennefer = [...Usuarios, {id: 3, nome: "Yennefer", isAdmin: true}];

console.log(listaComYennefer)
console.log(listaDeAdmin);

async function buscarPersonagem() {
  
  const resposta = await fetch("insira minha api aqui");
  

  const dados = await resposta.json();
  
  
  console.log(dados.name);
}