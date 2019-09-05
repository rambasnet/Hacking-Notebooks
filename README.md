# Hacking 101
- Fundamentals of System & Network Exploitation
- Hacking Tricks, Techniques & Tools
- Based on the book: Hacking: The Art of Exploitation by Jon Erickson

# Requirements

- Linux Bash
- gcc
- Jupyter Notebook
- Jupyter Lab
- Python3

# Install Required Tools

-   Install Python 3.x Miniconda for Linux: https://conda.io/en/latest/miniconda.html
-   Once miniconda is installed, install Jupyter Notebook using conda
    -   `conda install notebook`
-   install minimal C kernel using terminal
    -   `sudo pip install jupyter-c-kernel`
    -   `sudo install_c_kernel`
    - NOTE: if conda is used to install notebook, you must run notebook as root to run C kernel
-   Install Jupyter Lab using conda
    - `conda install -c conda-forge jupyterlab`

# Play with Notebooks

-   Clone/download this repository
-   Compile and run C programs found in demo-programs folder
-   Using a terminal cd into the repo folder and run `jupyter notebook` or `jupyter lab`
    -   `jupyter lab`
-   Open 00-Introduction.ipynb chapter and access all the notebooks
