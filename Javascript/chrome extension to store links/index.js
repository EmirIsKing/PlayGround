let myLeads = []
const inputEl = document.getElementById("input-el")

const inputBtn = document.getElementById("input-btn")
const ulEl = document.getElementById("ul-el")
const clearBtn = document.getElementById("clear-btn")
const saveTab = document.getElementById("save-tab")
const leads = JSON.parse(localStorage.getItem("myleads"))

if (leads) {
    myLeads = leads
    loadList(myLeads)
}


saveTab.addEventListener("click", function(){
    chrome.tabs.query({active: true, currentWindow: true}, function(tabs) {
        myLeads.push(tabs[0].url)
        localStorage.setItem("myleads", JSON.stringify(myLeads))
        loadList(myLeads)
    })

})



clearBtn.addEventListener("dblclick", function() {
    localStorage.clear()
    myLeads = []
    loadList(myLeads)
})


inputBtn.addEventListener("click", function() {
    myLeads.push(inputEl.value)
    inputEl.value = ""
    localStorage.setItem("myleads", JSON.stringify(myLeads))
    loadList(myLeads)
})





loadList(myLeads)
function loadList(rawLeads) {
    ulEl.innerHTML = ""
    let listItems = ""
    for (let i = 0; i < rawLeads.length; i++){
        listItems += `
        <li>
            <a target='_blank' href='${rawLeads[i]}'>
                ${rawLeads[i]}
            </a>
        </li>`
    }
    ulEl.innerHTML = listItems
    
}
