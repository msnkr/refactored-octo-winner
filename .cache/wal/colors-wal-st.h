const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#0A0101", /* black   */
  [1] = "#D53E2D", /* red     */
  [2] = "#FAA152", /* green   */
  [3] = "#FAA966", /* yellow  */
  [4] = "#2D65AB", /* blue    */
  [5] = "#EBB096", /* magenta */
  [6] = "#FECF9D", /* cyan    */
  [7] = "#f6e6e0", /* white   */

  /* 8 bright colors */
  [8]  = "#aca19c",  /* black   */
  [9]  = "#D53E2D",  /* red     */
  [10] = "#FAA152", /* green   */
  [11] = "#FAA966", /* yellow  */
  [12] = "#2D65AB", /* blue    */
  [13] = "#EBB096", /* magenta */
  [14] = "#FECF9D", /* cyan    */
  [15] = "#f6e6e0", /* white   */

  /* special colors */
  [256] = "#0A0101", /* background */
  [257] = "#f6e6e0", /* foreground */
  [258] = "#f6e6e0",     /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
 unsigned int defaultbg = 0;
 unsigned int defaultfg = 257;
 unsigned int defaultcs = 258;
 unsigned int defaultrcs= 258;
