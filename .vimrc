set nocompatible              " be iMproved, required
filetype on                 " required
"set shortmess+=c
let  s:clang_library_path='/usr/lib/x86_64-linux-gnu'
if isdirectory(s:clang_library_path)
	    let g:clang_library_path=s:clang_library_path
    endif
" set the runtime path to include Vundle and initialize
autocmd filetype cpp nnoremap<F5> :!g++ % -ggdb -o %:r && ./%:r <CR>
syntax on
set number
filetype plugin on
let g:clang_user_options='|| exit 0'
let g:clang_complete_auto = 1
let g:clang_complete_copen = 1
let g:clang_debug = 1
let g:clang_hl_errors=1
set rtp+=~/.vim/bundle/Vundle.vim
call vundle#begin()
" alternatively, pass a path where Vundle should install plugins
"call vundle#begin('~/some/path/here')
Plugin 'taglist.vim'
Plugin 'rip-rip/clang_complete'
" let Vundle manage Vundle, required
"Plugin 'https://github.com/vim-scripts/Conque-GDB.git'
Plugin 'VundleVim/Vundle.vim'
Plugin 'https://github.com/Raimondi/delimitMate'"
" The following are examples of different formats supported.
" Keep Plugin commands between vundle#begin/end.
" plugin on GitHub repo
"Plugin 'tpope/vim-fugitive'"
" plugin from http://vim-scripts.org/vim/scripts.html
"Plugin 'L9'"
" Git plugin not hosted on GitHub
Plugin 'https://github.com/wincent/Command-T.git'"
" git repos on your local machine (i.e. when working on your own plugin)
"Plugin 'file:///home/gmarik/path/to/plugin'"
" The sparkup vim script is in a subdirectory of this repo called vim.
" Pass the path to set the runtimepath properly.
Plugin 'rstacruz/sparkup', {'rtp': 'vim/'}
" Install L9 and avoid a Naming conflict if you've already installed a
" different version somewhere else.
Plugin 'ascenator/L9', {'name': 'newL9'}

" All of your Plugins must be added before the following line
call vundle#end()            " required
filetype plugin indent on    " required
" To ignore plugin indent changes, instead use:
"filetype plugin on
"
" Brief help
" :PluginList       - lists configured plugins
" :PluginInstall    - installs plugins; append `!` to update or just :PluginUpdate
" :PluginSearch foo - searches for foo; append `!` to refresh local cache
" :PluginClean      - confirms removal of unused plugins; append `!` to auto-approve removal
"
" see :h vundle for more details or wiki for FAQ
" Put your non-Plugin stuff after this line
