# Hacking 101

- Fundamentals of System & Network Exploitation
- Hacking Tricks, Techniques & Tools
- Based on the book: Hacking: The Art of Exploitation 2nd Ediition by Jon Erickson

# Requirements

- Ubuntu/Debian Linux Bash
- gcc
- Jupyter Notebook
- Python2 and 3
- gdb
- peda - https://github.com/longld/peda

# Install Required Tools
- update Linux and install tools

```bash
sudo apt update
sudo apt install curl build-essential ccache gdb gcc-multilib
git clone https://github.com/longld/peda.git ~/peda
echo "source ~/peda/peda.py" >> ~/.gdbinit
```

- Install Python 3.x Miniconda for Linux: https://conda.io/en/latest/miniconda.html

```bash
curl -o Miniconda.sh https://repo.anaconda.com/miniconda/Miniconda3-latest-Linux-x86_64.sh
bash Miniconda.sh # pick defaults; python 3 is installed!
conda update conda
conda install notebook # jupyter notebook
conda install -c conda-forge xeus-cling #c++ kernel
```

# Play with Notebooks

- Clone/download this repository
- Compile and run C programs found in demo-programs folder
- Using a terminal cd into the repo folder and run `jupyter notebook`

```bash
jupyter notebook
```
- open the link shown in a browser if it's not opened on its own
- Open 00-Introduction.ipynb chapter and access all the notebooks
