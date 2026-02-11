interface CardProps {
  title: string;
  price: number;
  image: string;
  onDelete: () => void;
}

export function Card({ title, price, image, onDelete }: CardProps) {
  return (
    <div style={{ 
      border: '1px solid #ddd', 
      padding: '15px', 
      borderRadius: '8px', 
      width: '220px', 
      display: 'flex', 
      flexDirection: 'column', 
      justifyContent: 'space-between', // botao vai pro final
      backgroundColor: 'white',
      boxShadow: '0 2px 5px rgba(0,0,0,0.1)'
    }}>
      {/* tamanho fixo */}
      <div style={{ height: '150px', display: 'flex', alignItems: 'center', justifyContent: 'center', marginBottom: '10px' }}>
        <img src={image} alt={title} style={{ maxHeight: '100%', maxWidth: '100%' }} />
      </div>
      
      <div>
        <h4 style={{ margin: '0 0 10px 0', fontSize: '14px', height: '40px', overflow: 'hidden' }}>
          {title}
        </h4>
        <p style={{ margin: '0 0 15px 0', color: 'green', fontWeight: 'bold', fontSize: '18px' }}>
          R$ {price.toFixed(2)}
        </p>
      </div>

      <button 
        onClick={onDelete} 
        style={{ 
          backgroundColor: '#ff4d4d', 
          color: 'white', 
          border: 'none', 
          padding: '8px', 
          borderRadius: '4px', 
          cursor: 'pointer',
          width: '100%'
        }}
      >
        Remover Produto
      </button>
    </div>
  )
}