import { useState, useEffect } from 'react'
import type { FormEvent } from 'react'
import { Card } from './components/Card'

interface Character {
  id: number;
  name: string;
  status: string;
  species: string;
  image: string;
}

function App() {
  const [characters, setCharacters] = useState<Character[]>([])

 
  // Guardam o que você está digitando nos inputs
  const [novoNome, setNovoNome] = useState('')
  const [novaEspecie, setNovaEspecie] = useState('')

  // Carregar dados da API
  useEffect(() => {
    async function carregarDados() {
      const resposta = await fetch('https://rickandmortyapi.com/api/character')
      const dados = await resposta.json()
      setCharacters(dados.results)
    }
    carregarDados()
  }, [])

  // FunçAo de Deletar 
  function deletarPersonagem(id: number) {
    const novaLista = characters.filter(item => item.id !== id)
    setCharacters(novaLista)
  }

  // (CREATE)
  function adicionarPersonagem(event: FormEvent) {
    event.preventDefault() // Evita que a página recarregue

    //Montamos o novo boneco
    const novoPersonagem: Character = {
      id: Math.random(), // Gera um ID aleatOrio 
      name: novoNome,
      species: novaEspecie,
      status: "Alive", // PadrAo
      image: "https://rickandmortyapi.com/api/character/avatar/19.jpeg" 
    }

    
    
    setCharacters([novoPersonagem, ...characters])

    // Limpa os inputs
    setNovoNome('')
    setNovaEspecie('')
  }

  return (
    <div style={{ padding: '20px' }}>
      <h1>Galeria Rick and Morty</h1>

      {/* --- formulario de cadastro --- */}
      <form onSubmit={adicionarPersonagem} style={{ marginBottom: '30px', background: '#f0f0f0', padding: '20px', borderRadius: '8px' }}>
        <h3>Adicionar Novo Personagem</h3>
        
        <div style={{ display: 'flex', gap: '10px' }}>
          <input 
            type="text" 
            placeholder="Nome do Personagem" 
            value={novoNome}
            onChange={e => setNovoNome(e.target.value)}
            style={{ padding: '8px' }}
            required
          />
          
          <input 
            type="text" 
            placeholder="Espécie (ex: Human, Alien)" 
            value={novaEspecie}
            onChange={e => setNovaEspecie(e.target.value)}
            style={{ padding: '8px' }}
            required
          />

          <button type="submit" style={{ padding: '8px 20px', background: 'green', color: 'white', border: 'none', cursor: 'pointer' }}>
            Criar
          </button>
        </div>
      </form>

      {/* lista de cards */}
      <div style={{ display: 'flex', flexWrap: 'wrap', gap: '20px' }}>
        {characters.map(personagem => (
          <Card 
            key={personagem.id}
            name={personagem.name}
            status={personagem.status}
            species={personagem.species}
            image={personagem.image}
            onDelete={() => deletarPersonagem(personagem.id)}
          />
        ))}
      </div>
    </div>
  )
}

export default App