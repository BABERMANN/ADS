interface CardProps { 
    name:string;
    status:string;
    species:string;
    image:string;
}

export function Card({ name, status, species, image }: CardProps) {
  return (
    <div style={{ border: '1px solid #333', padding: '10px', borderRadius: '8px', width: '200px' }}>
      <img src={image} alt={name} style={{ width: '100%', borderRadius: '4px' }} />
      <h3>{name}</h3>
      <p>{status} - {species}</p>
    </div>
  )
}