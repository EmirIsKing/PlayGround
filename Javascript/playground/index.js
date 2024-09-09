document.addEventListener('DOMContentLoaded', () => {
            const input = document.getElementById('numericInput');

            const handleChange = (e) => {
                const inputValue = e.target.value;
                
                // Regular expression to allow only numbers and one decimal point
                const regex = /^\d{0,6}(\.\d{0,6})?$/;
                
                if (regex.test(inputValue)) {
                    e.target.value = inputValue; // Update input value if valid
                } else {
                    e.target.value = e.target.value.slice(0, -1); // Remove last character if invalid
                }
            };

            input.addEventListener('input', handleChange);