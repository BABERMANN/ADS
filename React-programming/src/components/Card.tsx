interface CardProps {
  name: string;
  status: string;
  species: string;
  image: string;
  // Nova Prop: Uma função que não retorna nada (void)
  // e o botao de pânico
  onDelete: () => void;
}

export function Card({ name, status, species, image, onDelete }: CardProps) {
  return (
    <div style={{ 
      border: '1px solid #333', 
      padding: '10px', 
      borderRadius: '8px', 
      width: '200px', 
      display: 'flex', 
      flexDirection: 'column', 
      gap: '10px' 
    }}>
      <img src={image} alt={name} style={{ width: '100%', borderRadius: '4px' }} />
      
      <div>
        <h3 style={{ margin: 0 }}>{name}</h3>
        <p style={{ margin: 0, color: '#666' }}>{status} - {species}</p>
      </div>

      {/* Botao de Deletar */}
      
      <button 
        onClick={onDelete} 
        style={{ 
          backgroundColor: 'tomato', 
          color: 'white', 
          border: 'none', 
          padding: '8px', 
          borderRadius: '4px', 
          cursor: 'pointer',
          fontWeight: 'bold'
        }}
      >
        🗑️ Remover
      </button>
    </div>
  )
}