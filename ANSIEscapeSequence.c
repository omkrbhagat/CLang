#include <stdio.h>
    
    /*
      ★ Escape Sequence :
      standard escape codes are prefixed with `ESC`.
      octal: `\033`
      unicode: `\u001b`
      hexadecimal: `\x1b`
      decimal: `27`
      
      Followed by the command, sometimes
      delimited by the `[` known as (CSI)
      Control Sequence Introducer, optionally
      followed by arguments & commands itself.
      Arguments are delimited by `;`
      
      ★ Graphics Mode Sequences:
      Escape code                        Reset code
      `ESC[1m` ~        bold mode       ~ `ESC[22m`
      `ESC[2m` ~      dim/faint mode    ~ `ESC[22m`
      `ESC[3m` ~       italic mode      ~ `ESC[23m`
      `ESC[4m` ~     underline mode     ~ `ESC[24m`
      `ESC[5m` ~     blinking mode      ~ `ESC[25m`
      `ESC[7m` ~  inverse/reverse mode  ~ `ESC[27m`
      `ESC[8m` ~  hidden/invisible mode ~ `ESC[28m`
      `ESC[9m` ~   strikethrough mode   ~ `ESC[29m`
      
      ★ 8-16 Color code:
       Color  |  FG  |  BG  
      ————————|——————|——————
      Black   | `30` | `40` 
      Red     | `31` | `41` 
      Green   | `32` | `42` 
      Yellow  | `33` | `43` 
      Blue    | `34` | `44` 
      Magenta | `35` | `45` 
      Cyan    | `36` | `46` 
      White   | `37` | `47` 
      Default | `39` | `49` 
      Reset   | `0`  | `0`  
      
      *Set style to dimmed White FG with Red BG*
      `\x1b[2;37;41m`
      
           Color     |  FG  |  BG   
      ———————————————|——————|———————
      Bright Black   | `90` | `100` 
      Bright Red     | `91` | `101` 
      Bright Green   | `92` | `102` 
      Bright Yellow  | `93` | `103` 
      Bright Blue    | `94` | `104` 
      Bright Magenta | `95` | `105` 
      Bright Cyan    | `96` | `106` 
      Bright White   | `97` | `107` 
      
      ★ 256 Color code:
      the following escape codes tell the terminal
      to use the given color {ID} :
      
          ESC Code     | Description
      —————————————————|———————————————
      `ESC[38;5;{ID}m` | foreground
      `ESC[48;5;{ID}m` | background   
    */

int main() {
    //printf("Hello, World !\n");
    //printf("\x1b[3BOmkar");
}