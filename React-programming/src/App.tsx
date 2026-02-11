import { useState, useEffect, type FormEvent } from 'react'
import { Card } from './components/Card'

interface Product {
  id: number;
  title: string;
  price: number;
  image: string;
  category?: string;
}

function App() {
  // Lazy Initialization
  // verifica se tem algo no navegador
  const [products, setProducts] = useState<Product[]>(() => {
    const salvo = localStorage.getItem('minha_loja_estoque')
    if (salvo) {
      return JSON.parse(salvo) // comeca com os salvos
    }
    return [] 
  })

  const [loading, setLoading] = useState(false)
  const [erro, setErro] = useState('')

  // entradas do formulário
  const [novoTitulo, setNovoTitulo] = useState('')
  const [novoPreco, setNovoPreco] = useState('')

 
  useEffect(() => {
    async function carregarDados() {
      // Se já tem o produto no localstage
      if (products.length > 0) return 

      setLoading(true)
      try {
        const resposta = await fetch('https://fakestoreapi.com/products')
        const dados = await resposta.json()
        
        if (Array.isArray(dados)) {
          setProducts(dados)
        }
      } catch (e) {
        setErro("Falha ao buscar produtos.")
      } finally {
        setLoading(false)
      }
    }
    carregarDados()
  }, []) // O array pra rodar 1 vez ao abrir

  // toda vez que products mudar ele salva no navegador.
  useEffect(() => {
    if (products.length > 0) {
      localStorage.setItem('minha_loja_estoque', JSON.stringify(products))
    }
  }, [products]) 

  

  function deletarProduto(id: number) {
    const novaLista = products.filter(item => item.id !== id)
    setProducts(novaLista)
  }

  function adicionarProduto(event: FormEvent) {
    event.preventDefault()
    if (!novoTitulo || !novoPreco) return

    const novoProduto: Product = {
      id: Math.random(),
      title: novoTitulo,
      price: Number(novoPreco),
      image: "https://placehold.co/150x150?text=Novo",
      category: "manual"
    }

    setProducts([novoProduto, ...products])
    setNovoTitulo('')
    setNovoPreco('')
  }

  return (
    <div style={{ padding: '20px', fontFamily: 'Arial, sans-serif' }}>
      <h1 style={{ textAlign: 'center' }}>Minha Loja Virtual 🛍️</h1>

      {loading && <p style={{ textAlign: 'center' }}>Carregando estoque inicial...</p>}
      {erro && <p style={{ color: 'red', textAlign: 'center' }}>{erro}</p>}

      {/* formulário */}
      <form onSubmit={adicionarProduto} style={{ maxWidth: '500px', margin: '20px auto', display: 'flex', gap: '10px' }}>
        <input 
          type="text" 
          placeholder="Produto" 
          value={novoTitulo}
          onChange={e => setNovoTitulo(e.target.value)}
          style={{ flex: 1, padding: '8px' }}
        />
        <input 
          type="number" 
          placeholder="Preço" 
          value={novoPreco}
          onChange={e => setNovoPreco(e.target.value)}
          style={{ width: '100px', padding: '8px' }}
        />
        <button type="submit" style={{ padding: '8px', background: 'green', color: 'white', border: 'none' }}>+</button>
      </form>

      {/* lista */}
      <div style={{ display: 'flex', flexWrap: 'wrap', gap: '20px', justifyContent: 'center' }}>
        {products.map(produto => (
          <Card 
            key={produto.id}
            title={produto.title}
            price={produto.price}
            image={produto.image}
            onDelete={() => deletarProduto(produto.id)}
          />
        ))}
      </div>
    </div>
  )
}

export default App