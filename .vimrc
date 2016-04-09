set nocompatible              " be iMproved, required
set t_Co=256
filetype on                 " required
"set shortmess+=c
let  s:clang_library_path='/usr/lib/x86_64-linux-gnu'
if isdirectory(s:clang_library_path)
	    let g:clang_library_path=s:clang_library_path
    endif
" set the runtime path to include Vundle and initialize
autocmd filetype cpp nnoremap<F5> :!g++ % -ggdb -I /usr/local/boost_1_60_0 -lboost_system  -lboost_thread -o /tmp/%:r && /tmp/%:r <CR>
autocmd filetype * nnoremap<F2> :wq! <CR>
autocmd filetype * nnoremap w :w <CR>
autocmd filetype * nnoremap q :q <CR>
autocmd filetype * nnoremap<C-N>:bn <CR>
autocmd filetype * nnoremap<C-P>:bp <CR>
autocmd filetype * nnoremap<C-O>:NERDTree <CR>
autocmd filetype * nnoremap<C-T>:b <CR>



syntax on
set number
filetype plugin on
set laststatus=2
"let g:airline_theme = 'base16'
let g:airline_powerline_fonts = 1
" Display tab information
let g:airline#extensions#tabline#enabled = 1
let g:airline#extensions#tabline#left_sep = ' '
let g:airline#extensions#tabline#left_alt_sep = ''
set statusline+=%#warningmsg#
set statusline+=%{SyntasticStatuslineFlag()}
set statusline+=%*
set statusline=   " clear the statusline for when vimrc is reloaded
set statusline+=%-3.3n\                      " buffer number
set statusline+=%f\                          " file name
set statusline+=%h%m%r%w                     " flags
set statusline+=[%{strlen(&ft)?&ft:'none'},  " filetype
set statusline+=%{strlen(&fenc)?&fenc:&enc}, " encoding
set statusline+=%{&fileformat}]              " file format
set statusline+=%=                           " right align
set statusline+=%{synIDattr(synID(line('.'),col('.'),1),'name')}\  " highlight
set statusline+=%b,0x%-8B\                   " current char
set statusline+=%-14.(%l,%c%V%)\ %<%P        " offset"
let g:syntastic_always_populate_loc_list = 1
let g:syntastic_auto_loc_list = 1
let g:syntastic_check_on_open = 1
let g:syntastic_check_on_wq = 0

let g:clang_user_options='|| exit 0'
let g:clang_complete_auto = 1
let g:clang_complete_copen = 1
let g:clang_debug = 1
let g:clang_hl_errors=1
set rtp+=~/.vim/bundle/Vundle.vim
call vundle#begin()
set background=dark
"colorscheme solarized
" alternatively, pass a path where Vundle should install plugins
"call vundle#begin('~/some/path/here')
Plugin 'vim-airline/vim-airline'
Plugin 'vim-airline/vim-airline-themes'
Plugin 'scrooloose/syntastic'
Plugin 'lokaltog/vim-powerline'
Plugin 'scrooloose/nerdtree'
Plugin 'scrooloose/nerdcommenter'
Plugin 'tpope/vim-surround'
Plugin 'altercation/vim-colors-solarized'
Plugin 'taglist.vim'
Plugin 'rip-rip/clang_complete'
" let Vundle manage Vundle, required
Plugin 'https://github.com/vim-scripts/Conque-GDB.git'
Plugin 'VundleVim/Vundle.vim'
Plugin 'https://github.com/Raimondi/delimitMate'"
" The following are examples of different formats supported.
" Keep Plugin commands between vundle#begin/end.
" plugin on GitHub repo
Plugin 'tpope/vim-fugitive'"
"" plugin from http://vim-scripts.org/vim/scripts.html
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
