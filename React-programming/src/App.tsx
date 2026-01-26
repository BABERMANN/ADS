import { useState, useEffect } from 'react'
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

  useEffect(() => {
    async function carregarDados() {
      const resposta = await fetch('https://rickandmortyapi.com/api/character')
      const dados = await resposta.json()
      
     
      setCharacters(dados.results)
    }

    carregarDados()
  }, [])

  return (
    <div style={{ padding: '20px' }}>
      <h1>Galeria Rick and Morty</h1>
      
      
      <div style={{ display: 'flex', flexWrap: 'wrap', gap: '20px' }}>
        
        
        {characters.map(personagem => (
          <Card 
            key={personagem.id} 
            name={personagem.name}
            status={personagem.status}
            species={personagem.species}
            image={personagem.image}
          />
        ))}

      </div>
    </div>
  )
}

export default App