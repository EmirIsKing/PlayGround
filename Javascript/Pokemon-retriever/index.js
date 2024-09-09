let pokemon
const fetchBtn = document.getElementById("fetchPokemon")

const imgEl = document.getElementById("pokemonimg")
const pokemoninfo = document.getElementById("pokemonInfo")


fetchBtn.addEventListener("click", () => {
    pokemon = document.getElementById("pokemon")
    let pokeLower = pokemon.value
    fetchData(pokeLower.toLowerCase().trim())
})


async function fetchData(pokemon){
    try {
        const errorElement = document.getElementById("error");
        if (errorElement) {
            document.getElementById("info-container").removeChild(errorElement);
        }


        const response = await fetch(`https://pokeapi.co/api/v2/pokemon/${pokemon}`)
        if (!response.ok) {
            throw new Error("Could not find Pokemon")
        }

        const data = await response.json()
        const name = data.name
        const type = data.types[0].type.name
        const ability = data.abilities
        const imgSrc = data.sprites["front_default"]
        

        pokemoninfo.innerHTML = `<div id="name">Name: ${name}</div>
                                 <div id="type">Type: ${type}</div>
                                 <div id="ability">Ability: </div>`


        const abilityEl = document.getElementById("ability")

        for (let i = 0; i < ability.length; i++) {
            abilityEl.textContent += ability[i].ability.name
            if (i != ability.length - 1) {
                abilityEl.textContent += ", "
            }
            
        }

        
        imgEl.innerHTML = `<img id="pokemonImg" src="${imgSrc}" alt="pokemon">`


    } catch (error) {
        const newH1 = document.createElement("h1")
        newH1.id = "error"
        newH1.textContent = "Could not find Pokemon"
        document.getElementById("info-container").prepend(newH1)
        pokemoninfo.innerHTML = ""
        imgEl.innerHTML = ""
    }
}

