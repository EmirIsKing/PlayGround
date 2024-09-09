from PIL import Image
import pytesseract

# Load the image
image_path = "image.png"
image = Image.open(image_path)

# Use Tesseract to convert the image to text
text = pytesseract.image_to_string(image)

# Output the extracted text
print(text)  # Show the first 1000 characters to avoid overly long output
