import tkinter as tk

def ShowEstatisticas():
    Arquivo = open("Personagem.txt", "r")
    lb["text"] = Arquivo.read()
    bt1.config(text = "Ocultar estatísticas do personagem", command = SalvarArquivo)
    Arquivo.close

def SalvarArquivo():
    Arquivo = open("Personagem.txt", "w")
    Arquivo.write("Nome: Marcus\nStatus: Vivo\nVida Maxima: 20\nVida Atual: 30\nConstituicao: 4\nforca: 4\ndestreza: 5\ncarisma: 4\nsabedoria: 1\ninteligencia: 2")
    lb["text"] = ""
    bt1.config(text = "Exibir estatísticas do personagem", command = ShowEstatisticas)
    Arquivo.close

MainWindow = tk.Tk()

bt1 = tk.Button(MainWindow, width = 30, text = "Exibir estatísticas do personagem", command = ShowEstatisticas)
bt1.grid()

lb = tk.Label(MainWindow, text = "")
lb.grid()

#Título da Janela
MainWindow.title("RCO - RPG Customizado Online")

#Largura X Altura + Distância da esquerda + Distância do topo
MainWindow.geometry("800x600+280+50")

MainWindow.mainloop()