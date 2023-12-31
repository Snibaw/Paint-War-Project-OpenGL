/ * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * 
   *   G L F W   3 . 4   -   w w w . g l f w . o r g 
   *   A   l i b r a r y   f o r   O p e n G L ,   w i n d o w   a n d   i n p u t 
   * - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - 
   *   C o p y r i g h t   ( c )   2 0 0 2 - 2 0 0 6   M a r c u s   G e e l n a r d 
   *   C o p y r i g h t   ( c )   2 0 0 6 - 2 0 1 9   C a m i l l a   L � w y   < e l m i n d r e d a @ g l f w . o r g > 
   * 
   *   T h i s   s o f t w a r e   i s   p r o v i d e d   ' a s - i s ' ,   w i t h o u t   a n y   e x p r e s s   o r   i m p l i e d 
   *   w a r r a n t y .   I n   n o   e v e n t   w i l l   t h e   a u t h o r s   b e   h e l d   l i a b l e   f o r   a n y   d a m a g e s 
   *   a r i s i n g   f r o m   t h e   u s e   o f   t h i s   s o f t w a r e . 
   * 
   *   P e r m i s s i o n   i s   g r a n t e d   t o   a n y o n e   t o   u s e   t h i s   s o f t w a r e   f o r   a n y   p u r p o s e , 
   *   i n c l u d i n g   c o m m e r c i a l   a p p l i c a t i o n s ,   a n d   t o   a l t e r   i t   a n d   r e d i s t r i b u t e   i t 
   *   f r e e l y ,   s u b j e c t   t o   t h e   f o l l o w i n g   r e s t r i c t i o n s : 
   * 
   *   1 .   T h e   o r i g i n   o f   t h i s   s o f t w a r e   m u s t   n o t   b e   m i s r e p r e s e n t e d ;   y o u   m u s t   n o t 
   *         c l a i m   t h a t   y o u   w r o t e   t h e   o r i g i n a l   s o f t w a r e .   I f   y o u   u s e   t h i s   s o f t w a r e 
   *         i n   a   p r o d u c t ,   a n   a c k n o w l e d g m e n t   i n   t h e   p r o d u c t   d o c u m e n t a t i o n   w o u l d 
   *         b e   a p p r e c i a t e d   b u t   i s   n o t   r e q u i r e d . 
   * 
   *   2 .   A l t e r e d   s o u r c e   v e r s i o n s   m u s t   b e   p l a i n l y   m a r k e d   a s   s u c h ,   a n d   m u s t   n o t 
   *         b e   m i s r e p r e s e n t e d   a s   b e i n g   t h e   o r i g i n a l   s o f t w a r e . 
   * 
   *   3 .   T h i s   n o t i c e   m a y   n o t   b e   r e m o v e d   o r   a l t e r e d   f r o m   a n y   s o u r c e 
   *         d i s t r i b u t i o n .   
   * 
   * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * / 
 
 # i f n d e f   _ g l f w 3 _ h _ 
 # d e f i n e   _ g l f w 3 _ h _ 
 
 # i f d e f   _ _ c p l u s p l u s 
 e x t e r n   " C "   { 
 # e n d i f 
 
 
 / * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * 
   *   D o x y g e n   d o c u m e n t a t i o n 
   * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * / 
 
 / * !   @ f i l e   g l f w 3 . h 
   *     @ b r i e f   T h e   h e a d e r   o f   t h e   G L F W   3   A P I . 
   * 
   *     T h i s   i s   t h e   h e a d e r   f i l e   o f   t h e   G L F W   3   A P I .     I t   d e f i n e s   a l l   i t s   t y p e s   a n d 
   *     d e c l a r e s   a l l   i t s   f u n c t i o n s . 
   * 
   *     F o r   m o r e   i n f o r m a t i o n   a b o u t   h o w   t o   u s e   t h i s   f i l e ,   s e e   @ r e f   b u i l d _ i n c l u d e . 
   * / 
 / * !   @ d e f g r o u p   c o n t e x t   C o n t e x t   r e f e r e n c e 
   *     @ b r i e f   F u n c t i o n s   a n d   t y p e s   r e l a t e d   t o   O p e n G L   a n d   O p e n G L   E S   c o n t e x t s . 
   * 
   *     T h i s   i s   t h e   r e f e r e n c e   d o c u m e n t a t i o n   f o r   O p e n G L   a n d   O p e n G L   E S   c o n t e x t   r e l a t e d 
   *     f u n c t i o n s .     F o r   m o r e   t a s k - o r i e n t e d   i n f o r m a t i o n ,   s e e   t h e   @ r e f   c o n t e x t _ g u i d e . 
   * / 
 / * !   @ d e f g r o u p   v u l k a n   V u l k a n   s u p p o r t   r e f e r e n c e 
   *     @ b r i e f   F u n c t i o n s   a n d   t y p e s   r e l a t e d   t o   V u l k a n . 
   * 
   *     T h i s   i s   t h e   r e f e r e n c e   d o c u m e n t a t i o n   f o r   V u l k a n   r e l a t e d   f u n c t i o n s   a n d   t y p e s . 
   *     F o r   m o r e   t a s k - o r i e n t e d   i n f o r m a t i o n ,   s e e   t h e   @ r e f   v u l k a n _ g u i d e . 
   * / 
 / * !   @ d e f g r o u p   i n i t   I n i t i a l i z a t i o n ,   v e r s i o n   a n d   e r r o r   r e f e r e n c e 
   *     @ b r i e f   F u n c t i o n s   a n d   t y p e s   r e l a t e d   t o   i n i t i a l i z a t i o n   a n d   e r r o r   h a n d l i n g . 
   * 
   *     T h i s   i s   t h e   r e f e r e n c e   d o c u m e n t a t i o n   f o r   i n i t i a l i z a t i o n   a n d   t e r m i n a t i o n   o f 
   *     t h e   l i b r a r y ,   v e r s i o n   m a n a g e m e n t   a n d   e r r o r   h a n d l i n g .     F o r   m o r e   t a s k - o r i e n t e d 
   *     i n f o r m a t i o n ,   s e e   t h e   @ r e f   i n t r o _ g u i d e . 
   * / 
 / * !   @ d e f g r o u p   i n p u t   I n p u t   r e f e r e n c e 
   *     @ b r i e f   F u n c t i o n s   a n d   t y p e s   r e l a t e d   t o   i n p u t   h a n d l i n g . 
   * 
   *     T h i s   i s   t h e   r e f e r e n c e   d o c u m e n t a t i o n   f o r   i n p u t   r e l a t e d   f u n c t i o n s   a n d   t y p e s . 
   *     F o r   m o r e   t a s k - o r i e n t e d   i n f o r m a t i o n ,   s e e   t h e   @ r e f   i n p u t _ g u i d e . 
   * / 
 / * !   @ d e f g r o u p   m o n i t o r   M o n i t o r   r e f e r e n c e 
   *     @ b r i e f   F u n c t i o n s   a n d   t y p e s   r e l a t e d   t o   m o n i t o r s . 
   * 
   *     T h i s   i s   t h e   r e f e r e n c e   d o c u m e n t a t i o n   f o r   m o n i t o r   r e l a t e d   f u n c t i o n s   a n d   t y p e s . 
   *     F o r   m o r e   t a s k - o r i e n t e d   i n f o r m a t i o n ,   s e e   t h e   @ r e f   m o n i t o r _ g u i d e . 
   * / 
 / * !   @ d e f g r o u p   w i n d o w   W i n d o w   r e f e r e n c e 
   *     @ b r i e f   F u n c t i o n s   a n d   t y p e s   r e l a t e d   t o   w i n d o w s . 
   * 
   *     T h i s   i s   t h e   r e f e r e n c e   d o c u m e n t a t i o n   f o r   w i n d o w   r e l a t e d   f u n c t i o n s   a n d   t y p e s , 
   *     i n c l u d i n g   c r e a t i o n ,   d e l e t i o n   a n d   e v e n t   p o l l i n g .     F o r   m o r e   t a s k - o r i e n t e d 
   *     i n f o r m a t i o n ,   s e e   t h e   @ r e f   w i n d o w _ g u i d e . 
   * / 
 
 
 / * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * 
   *   C o m p i l e r -   a n d   p l a t f o r m - s p e c i f i c   p r e p r o c e s s o r   w o r k 
   * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * / 
 
 / *   I f   w e   a r e   w e   o n   W i n d o w s ,   w e   w a n t   a   s i n g l e   d e f i n e   f o r   i t . 
   * / 
 # i f   ! d e f i n e d ( _ W I N 3 2 )   & &   ( d e f i n e d ( _ _ W I N 3 2 _ _ )   | |   d e f i n e d ( W I N 3 2 )   | |   d e f i n e d ( _ _ M I N G W 3 2 _ _ ) ) 
   # d e f i n e   _ W I N 3 2 
 # e n d i f   / *   _ W I N 3 2   * / 
 
 / *   I n c l u d e   b e c a u s e   m o s t   W i n d o w s   G L U   h e a d e r s   n e e d   w c h a r _ t   a n d 
   *   t h e   m a c O S   O p e n G L   h e a d e r   b l o c k s   t h e   d e f i n i t i o n   o f   p t r d i f f _ t   b y   g l e x t . h . 
   *   I n c l u d e   i t   u n c o n d i t i o n a l l y   t o   a v o i d   s u r p r i s i n g   s i d e - e f f e c t s . 
   * / 
 # i n c l u d e   < s t d d e f . h > 
 
 / *   I n c l u d e   b e c a u s e   i t   i s   n e e d e d   b y   V u l k a n   a n d   r e l a t e d   f u n c t i o n s . 
   *   I n c l u d e   i t   u n c o n d i t i o n a l l y   t o   a v o i d   s u r p r i s i n g   s i d e - e f f e c t s . 
   * / 
 # i n c l u d e   < s t d i n t . h > 
 
 # i f   d e f i n e d ( G L F W _ I N C L U D E _ V U L K A N ) 
     # i n c l u d e   < v u l k a n / v u l k a n . h > 
 # e n d i f   / *   V u l k a n   h e a d e r   * / 
 
 / *   T h e   V u l k a n   h e a d e r   m a y   h a v e   i n d i r e c t l y   i n c l u d e d   w i n d o w s . h   ( b e c a u s e   o f 
   *   V K _ U S E _ P L A T F O R M _ W I N 3 2 _ K H R )   s o   w e   o f f e r   o u r   r e p l a c e m e n t   s y m b o l s   a f t e r   i t . 
   * / 
 
 / *   I t   i s   c u s t o m a r y   t o   u s e   A P I E N T R Y   f o r   O p e n G L   f u n c t i o n   p o i n t e r   d e c l a r a t i o n s   o n 
   *   a l l   p l a t f o r m s .     A d d i t i o n a l l y ,   t h e   W i n d o w s   O p e n G L   h e a d e r   n e e d s   A P I E N T R Y . 
   * / 
 # i f   ! d e f i n e d ( A P I E N T R Y ) 
   # i f   d e f i n e d ( _ W I N 3 2 ) 
     # d e f i n e   A P I E N T R Y   _ _ s t d c a l l 
   # e l s e 
     # d e f i n e   A P I E N T R Y 
   # e n d i f 
   # d e f i n e   G L F W _ A P I E N T R Y _ D E F I N E D 
 # e n d i f   / *   A P I E N T R Y   * / 
 
 / *   S o m e   W i n d o w s   O p e n G L   h e a d e r s   n e e d   t h i s . 
   * / 
 # i f   ! d e f i n e d ( W I N G D I A P I )   & &   d e f i n e d ( _ W I N 3 2 ) 
   # d e f i n e   W I N G D I A P I   _ _ d e c l s p e c ( d l l i m p o r t ) 
   # d e f i n e   G L F W _ W I N G D I A P I _ D E F I N E D 
 # e n d i f   / *   W I N G D I A P I   * / 
 
 / *   S o m e   W i n d o w s   G L U   h e a d e r s   n e e d   t h i s . 
   * / 
 # i f   ! d e f i n e d ( C A L L B A C K )   & &   d e f i n e d ( _ W I N 3 2 ) 
   # d e f i n e   C A L L B A C K   _ _ s t d c a l l 
   # d e f i n e   G L F W _ C A L L B A C K _ D E F I N E D 
 # e n d i f   / *   C A L L B A C K   * / 
 
 / *   I n c l u d e   t h e   c h o s e n   O p e n G L   o r   O p e n G L   E S   h e a d e r s . 
   * / 
 # i f   d e f i n e d ( G L F W _ I N C L U D E _ E S 1 ) 
 
   # i n c l u d e   < G L E S / g l . h > 
   # i f   d e f i n e d ( G L F W _ I N C L U D E _ G L E X T ) 
     # i n c l u d e   < G L E S / g l e x t . h > 
   # e n d i f 
 
 # e l i f   d e f i n e d ( G L F W _ I N C L U D E _ E S 2 ) 
 
   # i n c l u d e   < G L E S 2 / g l 2 . h > 
   # i f   d e f i n e d ( G L F W _ I N C L U D E _ G L E X T ) 
     # i n c l u d e   < G L E S 2 / g l 2 e x t . h > 
   # e n d i f 
 
 # e l i f   d e f i n e d ( G L F W _ I N C L U D E _ E S 3 ) 
 
   # i n c l u d e   < G L E S 3 / g l 3 . h > 
   # i f   d e f i n e d ( G L F W _ I N C L U D E _ G L E X T ) 
     # i n c l u d e   < G L E S 2 / g l 2 e x t . h > 
   # e n d i f 
 
 # e l i f   d e f i n e d ( G L F W _ I N C L U D E _ E S 3 1 ) 
 
   # i n c l u d e   < G L E S 3 / g l 3 1 . h > 
   # i f   d e f i n e d ( G L F W _ I N C L U D E _ G L E X T ) 
     # i n c l u d e   < G L E S 2 / g l 2 e x t . h > 
   # e n d i f 
 
 # e l i f   d e f i n e d ( G L F W _ I N C L U D E _ E S 3 2 ) 
 
   # i n c l u d e   < G L E S 3 / g l 3 2 . h > 
   # i f   d e f i n e d ( G L F W _ I N C L U D E _ G L E X T ) 
     # i n c l u d e   < G L E S 2 / g l 2 e x t . h > 
   # e n d i f 
 
 # e l i f   d e f i n e d ( G L F W _ I N C L U D E _ G L C O R E A R B ) 
 
   # i f   d e f i n e d ( _ _ A P P L E _ _ ) 
 
     # i n c l u d e   < O p e n G L / g l 3 . h > 
     # i f   d e f i n e d ( G L F W _ I N C L U D E _ G L E X T ) 
       # i n c l u d e   < O p e n G L / g l 3 e x t . h > 
     # e n d i f   / * G L F W _ I N C L U D E _ G L E X T * / 
 
   # e l s e   / * _ _ A P P L E _ _ * / 
 
     # i n c l u d e   < G L / g l c o r e a r b . h > 
     # i f   d e f i n e d ( G L F W _ I N C L U D E _ G L E X T ) 
       # i n c l u d e   < G L / g l e x t . h > 
     # e n d i f 
 
   # e n d i f   / * _ _ A P P L E _ _ * / 
 
 # e l i f   d e f i n e d ( G L F W _ I N C L U D E _ G L U ) 
 
   # i f   d e f i n e d ( _ _ A P P L E _ _ ) 
 
     # i f   d e f i n e d ( G L F W _ I N C L U D E _ G L U ) 
       # i n c l u d e   < O p e n G L / g l u . h > 
     # e n d i f 
 
   # e l s e   / * _ _ A P P L E _ _ * / 
 
     # i f   d e f i n e d ( G L F W _ I N C L U D E _ G L U ) 
       # i n c l u d e   < G L / g l u . h > 
     # e n d i f 
 
   # e n d i f   / * _ _ A P P L E _ _ * / 
 
 # e l i f   ! d e f i n e d ( G L F W _ I N C L U D E _ N O N E )   & &   \ 
             ! d e f i n e d ( _ _ g l _ h _ )   & &   \ 
             ! d e f i n e d ( _ _ g l e s 1 _ g l _ h _ )   & &   \ 
             ! d e f i n e d ( _ _ g l e s 2 _ g l 2 _ h _ )   & &   \ 
             ! d e f i n e d ( _ _ g l e s 2 _ g l 3 _ h _ )   & &   \ 
             ! d e f i n e d ( _ _ g l e s 2 _ g l 3 1 _ h _ )   & &   \ 
             ! d e f i n e d ( _ _ g l e s 2 _ g l 3 2 _ h _ )   & &   \ 
             ! d e f i n e d ( _ _ g l _ g l c o r e a r b _ h _ )   & &   \ 
             ! d e f i n e d ( _ _ g l 2 _ h _ )   / * l e g a c y * /   & &   \ 
             ! d e f i n e d ( _ _ g l 3 _ h _ )   / * l e g a c y * /   & &   \ 
             ! d e f i n e d ( _ _ g l 3 1 _ h _ )   / * l e g a c y * /   & &   \ 
             ! d e f i n e d ( _ _ g l 3 2 _ h _ )   / * l e g a c y * /   & &   \ 
             ! d e f i n e d ( _ _ g l c o r e a r b _ h _ )   / * l e g a c y * /   & &   \ 
             ! d e f i n e d ( _ _ G L _ H _ _ )   / * n o n - s t a n d a r d * /   & &   \ 
             ! d e f i n e d ( _ _ g l t y p e s _ h _ )   / * n o n - s t a n d a r d * /   & &   \ 
             ! d e f i n e d ( _ _ g l e e _ h _ )   / * n o n - s t a n d a r d * / 
 
   # i f   d e f i n e d ( _ _ A P P L E _ _ ) 
 
     # i f   ! d e f i n e d ( G L F W _ I N C L U D E _ G L E X T ) 
       # d e f i n e   G L _ G L E X T _ L E G A C Y 
     # e n d i f 
     # i n c l u d e   < O p e n G L / g l . h > 
 
   # e l s e   / * _ _ A P P L E _ _ * / 
 
     # i n c l u d e   < G L / g l . h > 
     # i f   d e f i n e d ( G L F W _ I N C L U D E _ G L E X T ) 
       # i n c l u d e   < G L / g l e x t . h > 
     # e n d i f 
 
   # e n d i f   / * _ _ A P P L E _ _ * / 
 
 # e n d i f   / *   O p e n G L   a n d   O p e n G L   E S   h e a d e r s   * / 
 
 # i f   d e f i n e d ( G L F W _ D L L )   & &   d e f i n e d ( _ G L F W _ B U I L D _ D L L ) 
   / *   G L F W _ D L L   m u s t   b e   d e f i n e d   b y   a p p l i c a t i o n s   t h a t   a r e   l i n k i n g   a g a i n s t   t h e   D L L 
     *   v e r s i o n   o f   t h e   G L F W   l i b r a r y .     _ G L F W _ B U I L D _ D L L   i s   d e f i n e d   b y   t h e   G L F W 
     *   c o n f i g u r a t i o n   h e a d e r   w h e n   c o m p i l i n g   t h e   D L L   v e r s i o n   o f   t h e   l i b r a r y . 
     * / 
   # e r r o r   " Y o u   m u s t   n o t   h a v e   b o t h   G L F W _ D L L   a n d   _ G L F W _ B U I L D _ D L L   d e f i n e d " 
 # e n d i f 
 
 / *   G L F W A P I   i s   u s e d   t o   d e c l a r e   p u b l i c   A P I   f u n c t i o n s   f o r   e x p o r t 
   *   f r o m   t h e   D L L   /   s h a r e d   l i b r a r y   /   d y n a m i c   l i b r a r y . 
   * / 
 # i f   d e f i n e d ( _ W I N 3 2 )   & &   d e f i n e d ( _ G L F W _ B U I L D _ D L L ) 
   / *   W e   a r e   b u i l d i n g   G L F W   a s   a   W i n 3 2   D L L   * / 
   # d e f i n e   G L F W A P I   _ _ d e c l s p e c ( d l l e x p o r t ) 
 # e l i f   d e f i n e d ( _ W I N 3 2 )   & &   d e f i n e d ( G L F W _ D L L ) 
   / *   W e   a r e   c a l l i n g   a   G L F W   W i n 3 2   D L L   * / 
   # d e f i n e   G L F W A P I   _ _ d e c l s p e c ( d l l i m p o r t ) 
 # e l i f   d e f i n e d ( _ _ G N U C _ _ )   & &   d e f i n e d ( _ G L F W _ B U I L D _ D L L ) 
   / *   W e   a r e   b u i l d i n g   G L F W   a s   a   U n i x   s h a r e d   l i b r a r y   * / 
   # d e f i n e   G L F W A P I   _ _ a t t r i b u t e _ _ ( ( v i s i b i l i t y ( " d e f a u l t " ) ) ) 
 # e l s e 
   # d e f i n e   G L F W A P I 
 # e n d i f 
 
 
 / * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * 
   *   G L F W   A P I   t o k e n s 
   * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * / 
 
 / * !   @ n a m e   G L F W   v e r s i o n   m a c r o s 
   *     @ {   * / 
 / * !   @ b r i e f   T h e   m a j o r   v e r s i o n   n u m b e r   o f   t h e   G L F W   h e a d e r . 
   * 
   *     T h e   m a j o r   v e r s i o n   n u m b e r   o f   t h e   G L F W   h e a d e r .     T h i s   i s   i n c r e m e n t e d   w h e n   t h e 
   *     A P I   i s   c h a n g e d   i n   n o n - c o m p a t i b l e   w a y s . 
   *     @ i n g r o u p   i n i t 
   * / 
 # d e f i n e   G L F W _ V E R S I O N _ M A J O R                     3 
 / * !   @ b r i e f   T h e   m i n o r   v e r s i o n   n u m b e r   o f   t h e   G L F W   h e a d e r . 
   * 
   *     T h e   m i n o r   v e r s i o n   n u m b e r   o f   t h e   G L F W   h e a d e r .     T h i s   i s   i n c r e m e n t e d   w h e n 
   *     f e a t u r e s   a r e   a d d e d   t o   t h e   A P I   b u t   i t   r e m a i n s   b a c k w a r d - c o m p a t i b l e . 
   *     @ i n g r o u p   i n i t 
   * / 
 # d e f i n e   G L F W _ V E R S I O N _ M I N O R                     4 
 / * !   @ b r i e f   T h e   r e v i s i o n   n u m b e r   o f   t h e   G L F W   h e a d e r . 
   * 
   *     T h e   r e v i s i o n   n u m b e r   o f   t h e   G L F W   h e a d e r .     T h i s   i s   i n c r e m e n t e d   w h e n   a   b u g   f i x 
   *     r e l e a s e   i s   m a d e   t h a t   d o e s   n o t   c o n t a i n   a n y   A P I   c h a n g e s . 
   *     @ i n g r o u p   i n i t 
   * / 
 # d e f i n e   G L F W _ V E R S I O N _ R E V I S I O N               0 
 / * !   @ }   * / 
 
 / * !   @ b r i e f   O n e . 
   * 
   *     T h i s   i s   o n l y   s e m a n t i c   s u g a r   f o r   t h e   n u m b e r   1 .     Y o u   c a n   i n s t e a d   u s e   ` 1 `   o r 
   *     ` t r u e `   o r   ` _ T r u e `   o r   ` G L _ T R U E `   o r   ` V K _ T R U E `   o r   a n y t h i n g   e l s e   t h a t   i s   e q u a l 
   *     t o   o n e . 
   * 
   *     @ i n g r o u p   i n i t 
   * / 
 # d e f i n e   G L F W _ T R U E                                       1 
 / * !   @ b r i e f   Z e r o . 
   * 
   *     T h i s   i s   o n l y   s e m a n t i c   s u g a r   f o r   t h e   n u m b e r   0 .     Y o u   c a n   i n s t e a d   u s e   ` 0 `   o r 
   *     ` f a l s e `   o r   ` _ F a l s e `   o r   ` G L _ F A L S E `   o r   ` V K _ F A L S E `   o r   a n y t h i n g   e l s e   t h a t   i s 
   *     e q u a l   t o   z e r o . 
   * 
   *     @ i n g r o u p   i n i t 
   * / 
 # d e f i n e   G L F W _ F A L S E                                     0 
 
 / * !   @ n a m e   K e y   a n d   b u t t o n   a c t i o n s 
   *     @ {   * / 
 / * !   @ b r i e f   T h e   k e y   o r   m o u s e   b u t t o n   w a s   r e l e a s e d . 
   * 
   *     T h e   k e y   o r   m o u s e   b u t t o n   w a s   r e l e a s e d . 
   * 
   *     @ i n g r o u p   i n p u t 
   * / 
 # d e f i n e   G L F W _ R E L E A S E                                 0 
 / * !   @ b r i e f   T h e   k e y   o r   m o u s e   b u t t o n   w a s   p r e s s e d . 
   * 
   *     T h e   k e y   o r   m o u s e   b u t t o n   w a s   p r e s s e d . 
   * 
   *     @ i n g r o u p   i n p u t 
   * / 
 # d e f i n e   G L F W _ P R E S S                                     1 
 / * !   @ b r i e f   T h e   k e y   w a s   h e l d   d o w n   u n t i l   i t   r e p e a t e d . 
   * 
   *     T h e   k e y   w a s   h e l d   d o w n   u n t i l   i t   r e p e a t e d . 
   * 
   *     @ i n g r o u p   i n p u t 
   * / 
 # d e f i n e   G L F W _ R E P E A T                                   2 
 / * !   @ }   * / 
 
 / * !   @ d e f g r o u p   h a t _ s t a t e   J o y s t i c k   h a t   s t a t e s 
   *     @ b r i e f   J o y s t i c k   h a t   s t a t e s . 
   * 
   *     S e e   [ j o y s t i c k   h a t   i n p u t ] ( @ r e f   j o y s t i c k _ h a t )   f o r   h o w   t h e s e   a r e   u s e d . 
   * 
   *     @ i n g r o u p   i n p u t 
   *     @ {   * / 
 # d e f i n e   G L F W _ H A T _ C E N T E R E D                       0 
 # d e f i n e   G L F W _ H A T _ U P                                   1 
 # d e f i n e   G L F W _ H A T _ R I G H T                             2 
 # d e f i n e   G L F W _ H A T _ D O W N                               4 
 # d e f i n e   G L F W _ H A T _ L E F T                               8 
 # d e f i n e   G L F W _ H A T _ R I G H T _ U P                       ( G L F W _ H A T _ R I G H T   |   G L F W _ H A T _ U P ) 
 # d e f i n e   G L F W _ H A T _ R I G H T _ D O W N                   ( G L F W _ H A T _ R I G H T   |   G L F W _ H A T _ D O W N ) 
 # d e f i n e   G L F W _ H A T _ L E F T _ U P                         ( G L F W _ H A T _ L E F T     |   G L F W _ H A T _ U P ) 
 # d e f i n e   G L F W _ H A T _ L E F T _ D O W N                     ( G L F W _ H A T _ L E F T     |   G L F W _ H A T _ D O W N ) 
 / * !   @ }   * / 
 
 / * !   @ d e f g r o u p   k e y s   K e y b o a r d   k e y s 
   *     @ b r i e f   K e y b o a r d   k e y   I D s . 
   * 
   *     S e e   [ k e y   i n p u t ] ( @ r e f   i n p u t _ k e y )   f o r   h o w   t h e s e   a r e   u s e d . 
   * 
   *     T h e s e   k e y   c o d e s   a r e   i n s p i r e d   b y   t h e   _ U S B   H I D   U s a g e   T a b l e s   v 1 . 1 2 _   ( p .   5 3 - 6 0 ) , 
   *     b u t   r e - a r r a n g e d   t o   m a p   t o   7 - b i t   A S C I I   f o r   p r i n t a b l e   k e y s   ( f u n c t i o n   k e y s   a r e 
   *     p u t   i n   t h e   2 5 6 +   r a n g e ) . 
   * 
   *     T h e   n a m i n g   o f   t h e   k e y   c o d e s   f o l l o w   t h e s e   r u l e s : 
   *       -   T h e   U S   k e y b o a r d   l a y o u t   i s   u s e d 
   *       -   N a m e s   o f   p r i n t a b l e   a l p h a n u m e r i c   c h a r a c t e r s   a r e   u s e d   ( e . g .   " A " ,   " R " , 
   *           " 3 " ,   e t c . ) 
   *       -   F o r   n o n - a l p h a n u m e r i c   c h a r a c t e r s ,   U n i c o d e : i s h   n a m e s   a r e   u s e d   ( e . g . 
   *           " C O M M A " ,   " L E F T _ S Q U A R E _ B R A C K E T " ,   e t c . ) .   N o t e   t h a t   s o m e   n a m e s   d o   n o t 
   *           c o r r e s p o n d   t o   t h e   U n i c o d e   s t a n d a r d   ( u s u a l l y   f o r   b r e v i t y ) 
   *       -   K e y s   t h a t   l a c k   a   c l e a r   U S   m a p p i n g   a r e   n a m e d   " W O R L D _ x " 
   *       -   F o r   n o n - p r i n t a b l e   k e y s ,   c u s t o m   n a m e s   a r e   u s e d   ( e . g .   " F 4 " , 
   *           " B A C K S P A C E " ,   e t c . ) 
   * 
   *     @ i n g r o u p   i n p u t 
   *     @ { 
   * / 
 
 / *   T h e   u n k n o w n   k e y   * / 
 # d e f i n e   G L F W _ K E Y _ U N K N O W N                         - 1 
 
 / *   P r i n t a b l e   k e y s   * / 
 # d e f i n e   G L F W _ K E Y _ S P A C E                             3 2 
 # d e f i n e   G L F W _ K E Y _ A P O S T R O P H E                   3 9     / *   '   * / 
 # d e f i n e   G L F W _ K E Y _ C O M M A                             4 4     / *   ,   * / 
 # d e f i n e   G L F W _ K E Y _ M I N U S                             4 5     / *   -   * / 
 # d e f i n e   G L F W _ K E Y _ P E R I O D                           4 6     / *   .   * / 
 # d e f i n e   G L F W _ K E Y _ S L A S H                             4 7     / *   /   * / 
 # d e f i n e   G L F W _ K E Y _ 0                                     4 8 
 # d e f i n e   G L F W _ K E Y _ 1                                     4 9 
 # d e f i n e   G L F W _ K E Y _ 2                                     5 0 
 # d e f i n e   G L F W _ K E Y _ 3                                     5 1 
 # d e f i n e   G L F W _ K E Y _ 4                                     5 2 
 # d e f i n e   G L F W _ K E Y _ 5                                     5 3 
 # d e f i n e   G L F W _ K E Y _ 6                                     5 4 
 # d e f i n e   G L F W _ K E Y _ 7                                     5 5 
 # d e f i n e   G L F W _ K E Y _ 8                                     5 6 
 # d e f i n e   G L F W _ K E Y _ 9                                     5 7 
 # d e f i n e   G L F W _ K E Y _ S E M I C O L O N                     5 9     / *   ;   * / 
 # d e f i n e   G L F W _ K E Y _ E Q U A L                             6 1     / *   =   * / 
 # d e f i n e   G L F W _ K E Y _ A                                     6 5 
 # d e f i n e   G L F W _ K E Y _ B                                     6 6 
 # d e f i n e   G L F W _ K E Y _ C                                     6 7 
 # d e f i n e   G L F W _ K E Y _ D                                     6 8 
 # d e f i n e   G L F W _ K E Y _ E                                     6 9 
 # d e f i n e   G L F W _ K E Y _ F                                     7 0 
 # d e f i n e   G L F W _ K E Y _ G                                     7 1 
 # d e f i n e   G L F W _ K E Y _ H                                     7 2 
 # d e f i n e   G L F W _ K E Y _ I                                     7 3 
 # d e f i n e   G L F W _ K E Y _ J                                     7 4 
 # d e f i n e   G L F W _ K E Y _ K                                     7 5 
 # d e f i n e   G L F W _ K E Y _ L                                     7 6 
 # d e f i n e   G L F W _ K E Y _ M                                     7 7 
 # d e f i n e   G L F W _ K E Y _ N                                     7 8 
 # d e f i n e   G L F W _ K E Y _ O                                     7 9 
 # d e f i n e   G L F W _ K E Y _ P                                     8 0 
 # d e f i n e   G L F W _ K E Y _ Q                                     8 1 
 # d e f i n e   G L F W _ K E Y _ R                                     8 2 
 # d e f i n e   G L F W _ K E Y _ S                                     8 3 
 # d e f i n e   G L F W _ K E Y _ T                                     8 4 
 # d e f i n e   G L F W _ K E Y _ U                                     8 5 
 # d e f i n e   G L F W _ K E Y _ V                                     8 6 
 # d e f i n e   G L F W _ K E Y _ W                                     8 7 
 # d e f i n e   G L F W _ K E Y _ X                                     8 8 
 # d e f i n e   G L F W _ K E Y _ Y                                     8 9 
 # d e f i n e   G L F W _ K E Y _ Z                                     9 0 
 # d e f i n e   G L F W _ K E Y _ L E F T _ B R A C K E T               9 1     / *   [   * / 
 # d e f i n e   G L F W _ K E Y _ B A C K S L A S H                     9 2     / *   \   * / 
 # d e f i n e   G L F W _ K E Y _ R I G H T _ B R A C K E T             9 3     / *   ]   * / 
 # d e f i n e   G L F W _ K E Y _ G R A V E _ A C C E N T               9 6     / *   `   * / 
 # d e f i n e   G L F W _ K E Y _ W O R L D _ 1                         1 6 1   / *   n o n - U S   # 1   * / 
 # d e f i n e   G L F W _ K E Y _ W O R L D _ 2                         1 6 2   / *   n o n - U S   # 2   * / 
 
 / *   F u n c t i o n   k e y s   * / 
 # d e f i n e   G L F W _ K E Y _ E S C A P E                           2 5 6 
 # d e f i n e   G L F W _ K E Y _ E N T E R                             2 5 7 
 # d e f i n e   G L F W _ K E Y _ T A B                                 2 5 8 
 # d e f i n e   G L F W _ K E Y _ B A C K S P A C E                     2 5 9 
 # d e f i n e   G L F W _ K E Y _ I N S E R T                           2 6 0 
 # d e f i n e   G L F W _ K E Y _ D E L E T E                           2 6 1 
 # d e f i n e   G L F W _ K E Y _ R I G H T                             2 6 2 
 # d e f i n e   G L F W _ K E Y _ L E F T                               2 6 3 
 # d e f i n e   G L F W _ K E Y _ D O W N                               2 6 4 
 # d e f i n e   G L F W _ K E Y _ U P                                   2 6 5 
 # d e f i n e   G L F W _ K E Y _ P A G E _ U P                         2 6 6 
 # d e f i n e   G L F W _ K E Y _ P A G E _ D O W N                     2 6 7 
 # d e f i n e   G L F W _ K E Y _ H O M E                               2 6 8 
 # d e f i n e   G L F W _ K E Y _ E N D                                 2 6 9 
 # d e f i n e   G L F W _ K E Y _ C A P S _ L O C K                     2 8 0 
 # d e f i n e   G L F W _ K E Y _ S C R O L L _ L O C K                 2 8 1 
 # d e f i n e   G L F W _ K E Y _ N U M _ L O C K                       2 8 2 
 # d e f i n e   G L F W _ K E Y _ P R I N T _ S C R E E N               2 8 3 
 # d e f i n e   G L F W _ K E Y _ P A U S E                             2 8 4 
 # d e f i n e   G L F W _ K E Y _ F 1                                   2 9 0 
 # d e f i n e   G L F W _ K E Y _ F 2                                   2 9 1 
 # d e f i n e   G L F W _ K E Y _ F 3                                   2 9 2 
 # d e f i n e   G L F W _ K E Y _ F 4                                   2 9 3 
 # d e f i n e   G L F W _ K E Y _ F 5                                   2 9 4 
 # d e f i n e   G L F W _ K E Y _ F 6                                   2 9 5 
 # d e f i n e   G L F W _ K E Y _ F 7                                   2 9 6 
 # d e f i n e   G L F W _ K E Y _ F 8                                   2 9 7 
 # d e f i n e   G L F W _ K E Y _ F 9                                   2 9 8 
 # d e f i n e   G L F W _ K E Y _ F 1 0                                 2 9 9 
 # d e f i n e   G L F W _ K E Y _ F 1 1                                 3 0 0 
 # d e f i n e   G L F W _ K E Y _ F 1 2                                 3 0 1 
 # d e f i n e   G L F W _ K E Y _ F 1 3                                 3 0 2 
 # d e f i n e   G L F W _ K E Y _ F 1 4                                 3 0 3 
 # d e f i n e   G L F W _ K E Y _ F 1 5                                 3 0 4 
 # d e f i n e   G L F W _ K E Y _ F 1 6                                 3 0 5 
 # d e f i n e   G L F W _ K E Y _ F 1 7                                 3 0 6 
 # d e f i n e   G L F W _ K E Y _ F 1 8                                 3 0 7 
 # d e f i n e   G L F W _ K E Y _ F 1 9                                 3 0 8 
 # d e f i n e   G L F W _ K E Y _ F 2 0                                 3 0 9 
 # d e f i n e   G L F W _ K E Y _ F 2 1                                 3 1 0 
 # d e f i n e   G L F W _ K E Y _ F 2 2                                 3 1 1 
 # d e f i n e   G L F W _ K E Y _ F 2 3                                 3 1 2 
 # d e f i n e   G L F W _ K E Y _ F 2 4                                 3 1 3 
 # d e f i n e   G L F W _ K E Y _ F 2 5                                 3 1 4 
 # d e f i n e   G L F W _ K E Y _ K P _ 0                               3 2 0 
 # d e f i n e   G L F W _ K E Y _ K P _ 1                               3 2 1 
 # d e f i n e   G L F W _ K E Y _ K P _ 2                               3 2 2 
 # d e f i n e   G L F W _ K E Y _ K P _ 3                               3 2 3 
 # d e f i n e   G L F W _ K E Y _ K P _ 4                               3 2 4 
 # d e f i n e   G L F W _ K E Y _ K P _ 5                               3 2 5 
 # d e f i n e   G L F W _ K E Y _ K P _ 6                               3 2 6 
 # d e f i n e   G L F W _ K E Y _ K P _ 7                               3 2 7 
 # d e f i n e   G L F W _ K E Y _ K P _ 8                               3 2 8 
 # d e f i n e   G L F W _ K E Y _ K P _ 9                               3 2 9 
 # d e f i n e   G L F W _ K E Y _ K P _ D E C I M A L                   3 3 0 
 # d e f i n e   G L F W _ K E Y _ K P _ D I V I D E                     3 3 1 
 # d e f i n e   G L F W _ K E Y _ K P _ M U L T I P L Y                 3 3 2 
 # d e f i n e   G L F W _ K E Y _ K P _ S U B T R A C T                 3 3 3 
 # d e f i n e   G L F W _ K E Y _ K P _ A D D                           3 3 4 
 # d e f i n e   G L F W _ K E Y _ K P _ E N T E R                       3 3 5 
 # d e f i n e   G L F W _ K E Y _ K P _ E Q U A L                       3 3 6 
 # d e f i n e   G L F W _ K E Y _ L E F T _ S H I F T                   3 4 0 
 # d e f i n e   G L F W _ K E Y _ L E F T _ C O N T R O L               3 4 1 
 # d e f i n e   G L F W _ K E Y _ L E F T _ A L T                       3 4 2 
 # d e f i n e   G L F W _ K E Y _ L E F T _ S U P E R                   3 4 3 
 # d e f i n e   G L F W _ K E Y _ R I G H T _ S H I F T                 3 4 4 
 # d e f i n e   G L F W _ K E Y _ R I G H T _ C O N T R O L             3 4 5 
 # d e f i n e   G L F W _ K E Y _ R I G H T _ A L T                     3 4 6 
 # d e f i n e   G L F W _ K E Y _ R I G H T _ S U P E R                 3 4 7 
 # d e f i n e   G L F W _ K E Y _ M E N U                               3 4 8 
 
 # d e f i n e   G L F W _ K E Y _ L A S T                               G L F W _ K E Y _ M E N U 
 
 / * !   @ }   * / 
 
 / * !   @ d e f g r o u p   m o d s   M o d i f i e r   k e y   f l a g s 
   *     @ b r i e f   M o d i f i e r   k e y   f l a g s . 
   * 
   *     S e e   [ k e y   i n p u t ] ( @ r e f   i n p u t _ k e y )   f o r   h o w   t h e s e   a r e   u s e d . 
   * 
   *     @ i n g r o u p   i n p u t 
   *     @ {   * / 
 
 / * !   @ b r i e f   I f   t h i s   b i t   i s   s e t   o n e   o r   m o r e   S h i f t   k e y s   w e r e   h e l d   d o w n . 
   * 
   *     I f   t h i s   b i t   i s   s e t   o n e   o r   m o r e   S h i f t   k e y s   w e r e   h e l d   d o w n . 
   * / 
 # d e f i n e   G L F W _ M O D _ S H I F T                       0 x 0 0 0 1 
 / * !   @ b r i e f   I f   t h i s   b i t   i s   s e t   o n e   o r   m o r e   C o n t r o l   k e y s   w e r e   h e l d   d o w n . 
   * 
   *     I f   t h i s   b i t   i s   s e t   o n e   o r   m o r e   C o n t r o l   k e y s   w e r e   h e l d   d o w n . 
   * / 
 # d e f i n e   G L F W _ M O D _ C O N T R O L                   0 x 0 0 0 2 
 / * !   @ b r i e f   I f   t h i s   b i t   i s   s e t   o n e   o r   m o r e   A l t   k e y s   w e r e   h e l d   d o w n . 
   * 
   *     I f   t h i s   b i t   i s   s e t   o n e   o r   m o r e   A l t   k e y s   w e r e   h e l d   d o w n . 
   * / 
 # d e f i n e   G L F W _ M O D _ A L T                           0 x 0 0 0 4 
 / * !   @ b r i e f   I f   t h i s   b i t   i s   s e t   o n e   o r   m o r e   S u p e r   k e y s   w e r e   h e l d   d o w n . 
   * 
   *     I f   t h i s   b i t   i s   s e t   o n e   o r   m o r e   S u p e r   k e y s   w e r e   h e l d   d o w n . 
   * / 
 # d e f i n e   G L F W _ M O D _ S U P E R                       0 x 0 0 0 8 
 / * !   @ b r i e f   I f   t h i s   b i t   i s   s e t   t h e   C a p s   L o c k   k e y   i s   e n a b l e d . 
   * 
   *     I f   t h i s   b i t   i s   s e t   t h e   C a p s   L o c k   k e y   i s   e n a b l e d   a n d   t h e   @ r e f 
   *     G L F W _ L O C K _ K E Y _ M O D S   i n p u t   m o d e   i s   s e t . 
   * / 
 # d e f i n e   G L F W _ M O D _ C A P S _ L O C K               0 x 0 0 1 0 
 / * !   @ b r i e f   I f   t h i s   b i t   i s   s e t   t h e   N u m   L o c k   k e y   i s   e n a b l e d . 
   * 
   *     I f   t h i s   b i t   i s   s e t   t h e   N u m   L o c k   k e y   i s   e n a b l e d   a n d   t h e   @ r e f 
   *     G L F W _ L O C K _ K E Y _ M O D S   i n p u t   m o d e   i s   s e t . 
   * / 
 # d e f i n e   G L F W _ M O D _ N U M _ L O C K                 0 x 0 0 2 0 
 
 / * !   @ }   * / 
 
 / * !   @ d e f g r o u p   b u t t o n s   M o u s e   b u t t o n s 
   *     @ b r i e f   M o u s e   b u t t o n   I D s . 
   * 
   *     S e e   [ m o u s e   b u t t o n   i n p u t ] ( @ r e f   i n p u t _ m o u s e _ b u t t o n )   f o r   h o w   t h e s e   a r e   u s e d . 
   * 
   *     @ i n g r o u p   i n p u t 
   *     @ {   * / 
 # d e f i n e   G L F W _ M O U S E _ B U T T O N _ 1                   0 
 # d e f i n e   G L F W _ M O U S E _ B U T T O N _ 2                   1 
 # d e f i n e   G L F W _ M O U S E _ B U T T O N _ 3                   2 
 # d e f i n e   G L F W _ M O U S E _ B U T T O N _ 4                   3 
 # d e f i n e   G L F W _ M O U S E _ B U T T O N _ 5                   4 
 # d e f i n e   G L F W _ M O U S E _ B U T T O N _ 6                   5 
 # d e f i n e   G L F W _ M O U S E _ B U T T O N _ 7                   6 
 # d e f i n e   G L F W _ M O U S E _ B U T T O N _ 8                   7 
 # d e f i n e   G L F W _ M O U S E _ B U T T O N _ L A S T             G L F W _ M O U S E _ B U T T O N _ 8 
 # d e f i n e   G L F W _ M O U S E _ B U T T O N _ L E F T             G L F W _ M O U S E _ B U T T O N _ 1 
 # d e f i n e   G L F W _ M O U S E _ B U T T O N _ R I G H T           G L F W _ M O U S E _ B U T T O N _ 2 
 # d e f i n e   G L F W _ M O U S E _ B U T T O N _ M I D D L E         G L F W _ M O U S E _ B U T T O N _ 3 
 / * !   @ }   * / 
 
 / * !   @ d e f g r o u p   j o y s t i c k s   J o y s t i c k s 
   *     @ b r i e f   J o y s t i c k   I D s . 
   * 
   *     S e e   [ j o y s t i c k   i n p u t ] ( @ r e f   j o y s t i c k )   f o r   h o w   t h e s e   a r e   u s e d . 
   * 
   *     @ i n g r o u p   i n p u t 
   *     @ {   * / 
 # d e f i n e   G L F W _ J O Y S T I C K _ 1                           0 
 # d e f i n e   G L F W _ J O Y S T I C K _ 2                           1 
 # d e f i n e   G L F W _ J O Y S T I C K _ 3                           2 
 # d e f i n e   G L F W _ J O Y S T I C K _ 4                           3 
 # d e f i n e   G L F W _ J O Y S T I C K _ 5                           4 
 # d e f i n e   G L F W _ J O Y S T I C K _ 6                           5 
 # d e f i n e   G L F W _ J O Y S T I C K _ 7                           6 
 # d e f i n e   G L F W _ J O Y S T I C K _ 8                           7 
 # d e f i n e   G L F W _ J O Y S T I C K _ 9                           8 
 # d e f i n e   G L F W _ J O Y S T I C K _ 1 0                         9 
 # d e f i n e   G L F W _ J O Y S T I C K _ 1 1                         1 0 
 # d e f i n e   G L F W _ J O Y S T I C K _ 1 2                         1 1 
 # d e f i n e   G L F W _ J O Y S T I C K _ 1 3                         1 2 
 # d e f i n e   G L F W _ J O Y S T I C K _ 1 4                         1 3 
 # d e f i n e   G L F W _ J O Y S T I C K _ 1 5                         1 4 
 # d e f i n e   G L F W _ J O Y S T I C K _ 1 6                         1 5 
 # d e f i n e   G L F W _ J O Y S T I C K _ L A S T                     G L F W _ J O Y S T I C K _ 1 6 
 / * !   @ }   * / 
 
 / * !   @ d e f g r o u p   g a m e p a d _ b u t t o n s   G a m e p a d   b u t t o n s 
   *     @ b r i e f   G a m e p a d   b u t t o n s . 
   * 
   *     S e e   @ r e f   g a m e p a d   f o r   h o w   t h e s e   a r e   u s e d . 
   * 
   *     @ i n g r o u p   i n p u t 
   *     @ {   * / 
 # d e f i n e   G L F W _ G A M E P A D _ B U T T O N _ A                               0 
 # d e f i n e   G L F W _ G A M E P A D _ B U T T O N _ B                               1 
 # d e f i n e   G L F W _ G A M E P A D _ B U T T O N _ X                               2 
 # d e f i n e   G L F W _ G A M E P A D _ B U T T O N _ Y                               3 
 # d e f i n e   G L F W _ G A M E P A D _ B U T T O N _ L E F T _ B U M P E R           4 
 # d e f i n e   G L F W _ G A M E P A D _ B U T T O N _ R I G H T _ B U M P E R         5 
 # d e f i n e   G L F W _ G A M E P A D _ B U T T O N _ B A C K                         6 
 # d e f i n e   G L F W _ G A M E P A D _ B U T T O N _ S T A R T                       7 
 # d e f i n e   G L F W _ G A M E P A D _ B U T T O N _ G U I D E                       8 
 # d e f i n e   G L F W _ G A M E P A D _ B U T T O N _ L E F T _ T H U M B             9 
 # d e f i n e   G L F W _ G A M E P A D _ B U T T O N _ R I G H T _ T H U M B           1 0 
 # d e f i n e   G L F W _ G A M E P A D _ B U T T O N _ D P A D _ U P                   1 1 
 # d e f i n e   G L F W _ G A M E P A D _ B U T T O N _ D P A D _ R I G H T             1 2 
 # d e f i n e   G L F W _ G A M E P A D _ B U T T O N _ D P A D _ D O W N               1 3 
 # d e f i n e   G L F W _ G A M E P A D _ B U T T O N _ D P A D _ L E F T               1 4 
 # d e f i n e   G L F W _ G A M E P A D _ B U T T O N _ L A S T                         G L F W _ G A M E P A D _ B U T T O N _ D P A D _ L E F T 
 
 # d e f i n e   G L F W _ G A M E P A D _ B U T T O N _ C R O S S               G L F W _ G A M E P A D _ B U T T O N _ A 
 # d e f i n e   G L F W _ G A M E P A D _ B U T T O N _ C I R C L E             G L F W _ G A M E P A D _ B U T T O N _ B 
 # d e f i n e   G L F W _ G A M E P A D _ B U T T O N _ S Q U A R E             G L F W _ G A M E P A D _ B U T T O N _ X 
 # d e f i n e   G L F W _ G A M E P A D _ B U T T O N _ T R I A N G L E         G L F W _ G A M E P A D _ B U T T O N _ Y 
 / * !   @ }   * / 
 
 / * !   @ d e f g r o u p   g a m e p a d _ a x e s   G a m e p a d   a x e s 
   *     @ b r i e f   G a m e p a d   a x e s . 
   * 
   *     S e e   @ r e f   g a m e p a d   f o r   h o w   t h e s e   a r e   u s e d . 
   * 
   *     @ i n g r o u p   i n p u t 
   *     @ {   * / 
 # d e f i n e   G L F W _ G A M E P A D _ A X I S _ L E F T _ X                 0 
 # d e f i n e   G L F W _ G A M E P A D _ A X I S _ L E F T _ Y                 1 
 # d e f i n e   G L F W _ G A M E P A D _ A X I S _ R I G H T _ X               2 
 # d e f i n e   G L F W _ G A M E P A D _ A X I S _ R I G H T _ Y               3 
 # d e f i n e   G L F W _ G A M E P A D _ A X I S _ L E F T _ T R I G G E R     4 
 # d e f i n e   G L F W _ G A M E P A D _ A X I S _ R I G H T _ T R I G G E R   5 
 # d e f i n e   G L F W _ G A M E P A D _ A X I S _ L A S T                     G L F W _ G A M E P A D _ A X I S _ R I G H T _ T R I G G E R 
 / * !   @ }   * / 
 
 / * !   @ d e f g r o u p   e r r o r s   E r r o r   c o d e s 
   *     @ b r i e f   E r r o r   c o d e s . 
   * 
   *     S e e   [ e r r o r   h a n d l i n g ] ( @ r e f   e r r o r _ h a n d l i n g )   f o r   h o w   t h e s e   a r e   u s e d . 
   * 
   *     @ i n g r o u p   i n i t 
   *     @ {   * / 
 / * !   @ b r i e f   N o   e r r o r   h a s   o c c u r r e d . 
   * 
   *     N o   e r r o r   h a s   o c c u r r e d . 
   * 
   *     @ a n a l y s i s   Y a y . 
   * / 
 # d e f i n e   G L F W _ N O _ E R R O R                               0 
 / * !   @ b r i e f   G L F W   h a s   n o t   b e e n   i n i t i a l i z e d . 
   * 
   *     T h i s   o c c u r s   i f   a   G L F W   f u n c t i o n   w a s   c a l l e d   t h a t   m u s t   n o t   b e   c a l l e d   u n l e s s   t h e 
   *     l i b r a r y   i s   [ i n i t i a l i z e d ] ( @ r e f   i n t r o _ i n i t ) . 
   * 
   *     @ a n a l y s i s   A p p l i c a t i o n   p r o g r a m m e r   e r r o r .     I n i t i a l i z e   G L F W   b e f o r e   c a l l i n g   a n y 
   *     f u n c t i o n   t h a t   r e q u i r e s   i n i t i a l i z a t i o n . 
   * / 
 # d e f i n e   G L F W _ N O T _ I N I T I A L I Z E D                 0 x 0 0 0 1 0 0 0 1 
 / * !   @ b r i e f   N o   c o n t e x t   i s   c u r r e n t   f o r   t h i s   t h r e a d . 
   * 
   *     T h i s   o c c u r s   i f   a   G L F W   f u n c t i o n   w a s   c a l l e d   t h a t   n e e d s   a n d   o p e r a t e s   o n   t h e 
   *     c u r r e n t   O p e n G L   o r   O p e n G L   E S   c o n t e x t   b u t   n o   c o n t e x t   i s   c u r r e n t   o n   t h e   c a l l i n g 
   *     t h r e a d .     O n e   s u c h   f u n c t i o n   i s   @ r e f   g l f w S w a p I n t e r v a l . 
   * 
   *     @ a n a l y s i s   A p p l i c a t i o n   p r o g r a m m e r   e r r o r .     E n s u r e   a   c o n t e x t   i s   c u r r e n t   b e f o r e 
   *     c a l l i n g   f u n c t i o n s   t h a t   r e q u i r e   a   c u r r e n t   c o n t e x t . 
   * / 
 # d e f i n e   G L F W _ N O _ C U R R E N T _ C O N T E X T           0 x 0 0 0 1 0 0 0 2 
 / * !   @ b r i e f   O n e   o f   t h e   a r g u m e n t s   t o   t h e   f u n c t i o n   w a s   a n   i n v a l i d   e n u m   v a l u e . 
   * 
   *     O n e   o f   t h e   a r g u m e n t s   t o   t h e   f u n c t i o n   w a s   a n   i n v a l i d   e n u m   v a l u e ,   f o r   e x a m p l e 
   *     r e q u e s t i n g   @ r e f   G L F W _ R E D _ B I T S   w i t h   @ r e f   g l f w G e t W i n d o w A t t r i b . 
   * 
   *     @ a n a l y s i s   A p p l i c a t i o n   p r o g r a m m e r   e r r o r .     F i x   t h e   o f f e n d i n g   c a l l . 
   * / 
 # d e f i n e   G L F W _ I N V A L I D _ E N U M                       0 x 0 0 0 1 0 0 0 3 
 / * !   @ b r i e f   O n e   o f   t h e   a r g u m e n t s   t o   t h e   f u n c t i o n   w a s   a n   i n v a l i d   v a l u e . 
   * 
   *     O n e   o f   t h e   a r g u m e n t s   t o   t h e   f u n c t i o n   w a s   a n   i n v a l i d   v a l u e ,   f o r   e x a m p l e 
   *     r e q u e s t i n g   a   n o n - e x i s t e n t   O p e n G L   o r   O p e n G L   E S   v e r s i o n   l i k e   2 . 7 . 
   * 
   *     R e q u e s t i n g   a   v a l i d   b u t   u n a v a i l a b l e   O p e n G L   o r   O p e n G L   E S   v e r s i o n   w i l l   i n s t e a d 
   *     r e s u l t   i n   a   @ r e f   G L F W _ V E R S I O N _ U N A V A I L A B L E   e r r o r . 
   * 
   *     @ a n a l y s i s   A p p l i c a t i o n   p r o g r a m m e r   e r r o r .     F i x   t h e   o f f e n d i n g   c a l l . 
   * / 
 # d e f i n e   G L F W _ I N V A L I D _ V A L U E                     0 x 0 0 0 1 0 0 0 4 
 / * !   @ b r i e f   A   m e m o r y   a l l o c a t i o n   f a i l e d . 
   * 
   *     A   m e m o r y   a l l o c a t i o n   f a i l e d . 
   * 
   *     @ a n a l y s i s   A   b u g   i n   G L F W   o r   t h e   u n d e r l y i n g   o p e r a t i n g   s y s t e m .     R e p o r t   t h e   b u g 
   *     t o   o u r   [ i s s u e   t r a c k e r ] ( h t t p s : / / g i t h u b . c o m / g l f w / g l f w / i s s u e s ) . 
   * / 
 # d e f i n e   G L F W _ O U T _ O F _ M E M O R Y                     0 x 0 0 0 1 0 0 0 5 
 / * !   @ b r i e f   G L F W   c o u l d   n o t   f i n d   s u p p o r t   f o r   t h e   r e q u e s t e d   A P I   o n   t h e   s y s t e m . 
   * 
   *     G L F W   c o u l d   n o t   f i n d   s u p p o r t   f o r   t h e   r e q u e s t e d   A P I   o n   t h e   s y s t e m . 
   * 
   *     @ a n a l y s i s   T h e   i n s t a l l e d   g r a p h i c s   d r i v e r   d o e s   n o t   s u p p o r t   t h e   r e q u e s t e d 
   *     A P I ,   o r   d o e s   n o t   s u p p o r t   i t   v i a   t h e   c h o s e n   c o n t e x t   c r e a t i o n   A P I . 
   *     B e l o w   a r e   a   f e w   e x a m p l e s . 
   * 
   *     @ p a r 
   *     S o m e   p r e - i n s t a l l e d   W i n d o w s   g r a p h i c s   d r i v e r s   d o   n o t   s u p p o r t   O p e n G L .     A M D   o n l y 
   *     s u p p o r t s   O p e n G L   E S   v i a   E G L ,   w h i l e   N v i d i a   a n d   I n t e l   o n l y   s u p p o r t   i t   v i a 
   *     a   W G L   o r   G L X   e x t e n s i o n .     m a c O S   d o e s   n o t   p r o v i d e   O p e n G L   E S   a t   a l l .     T h e   M e s a 
   *     E G L ,   O p e n G L   a n d   O p e n G L   E S   l i b r a r i e s   d o   n o t   i n t e r f a c e   w i t h   t h e   N v i d i a   b i n a r y 
   *     d r i v e r .     O l d e r   g r a p h i c s   d r i v e r s   d o   n o t   s u p p o r t   V u l k a n . 
   * / 
 # d e f i n e   G L F W _ A P I _ U N A V A I L A B L E                 0 x 0 0 0 1 0 0 0 6 
 / * !   @ b r i e f   T h e   r e q u e s t e d   O p e n G L   o r   O p e n G L   E S   v e r s i o n   i s   n o t   a v a i l a b l e . 
   * 
   *     T h e   r e q u e s t e d   O p e n G L   o r   O p e n G L   E S   v e r s i o n   ( i n c l u d i n g   a n y   r e q u e s t e d   c o n t e x t 
   *     o r   f r a m e b u f f e r   h i n t s )   i s   n o t   a v a i l a b l e   o n   t h i s   m a c h i n e . 
   * 
   *     @ a n a l y s i s   T h e   m a c h i n e   d o e s   n o t   s u p p o r t   y o u r   r e q u i r e m e n t s .     I f   y o u r 
   *     a p p l i c a t i o n   i s   s u f f i c i e n t l y   f l e x i b l e ,   d o w n g r a d e   y o u r   r e q u i r e m e n t s   a n d   t r y 
   *     a g a i n .     O t h e r w i s e ,   i n f o r m   t h e   u s e r   t h a t   t h e i r   m a c h i n e   d o e s   n o t   m a t c h   y o u r 
   *     r e q u i r e m e n t s . 
   * 
   *     @ p a r 
   *     F u t u r e   i n v a l i d   O p e n G L   a n d   O p e n G L   E S   v e r s i o n s ,   f o r   e x a m p l e   O p e n G L   4 . 8   i f   5 . 0 
   *     c o m e s   o u t   b e f o r e   t h e   4 . x   s e r i e s   g e t s   t h a t   f a r ,   a l s o   f a i l   w i t h   t h i s   e r r o r   a n d 
   *     n o t   @ r e f   G L F W _ I N V A L I D _ V A L U E ,   b e c a u s e   G L F W   c a n n o t   k n o w   w h a t   f u t u r e   v e r s i o n s 
   *     w i l l   e x i s t . 
   * / 
 # d e f i n e   G L F W _ V E R S I O N _ U N A V A I L A B L E         0 x 0 0 0 1 0 0 0 7 
 / * !   @ b r i e f   A   p l a t f o r m - s p e c i f i c   e r r o r   o c c u r r e d   t h a t   d o e s   n o t   m a t c h   a n y   o f   t h e 
   *     m o r e   s p e c i f i c   c a t e g o r i e s . 
   * 
   *     A   p l a t f o r m - s p e c i f i c   e r r o r   o c c u r r e d   t h a t   d o e s   n o t   m a t c h   a n y   o f   t h e   m o r e 
   *     s p e c i f i c   c a t e g o r i e s . 
   * 
   *     @ a n a l y s i s   A   b u g   o r   c o n f i g u r a t i o n   e r r o r   i n   G L F W ,   t h e   u n d e r l y i n g   o p e r a t i n g 
   *     s y s t e m   o r   i t s   d r i v e r s ,   o r   a   l a c k   o f   r e q u i r e d   r e s o u r c e s .     R e p o r t   t h e   i s s u e   t o 
   *     o u r   [ i s s u e   t r a c k e r ] ( h t t p s : / / g i t h u b . c o m / g l f w / g l f w / i s s u e s ) . 
   * / 
 # d e f i n e   G L F W _ P L A T F O R M _ E R R O R                   0 x 0 0 0 1 0 0 0 8 
 / * !   @ b r i e f   T h e   r e q u e s t e d   f o r m a t   i s   n o t   s u p p o r t e d   o r   a v a i l a b l e . 
   * 
   *     I f   e m i t t e d   d u r i n g   w i n d o w   c r e a t i o n ,   t h e   r e q u e s t e d   p i x e l   f o r m a t   i s   n o t 
   *     s u p p o r t e d . 
   * 
   *     I f   e m i t t e d   w h e n   q u e r y i n g   t h e   c l i p b o a r d ,   t h e   c o n t e n t s   o f   t h e   c l i p b o a r d   c o u l d 
   *     n o t   b e   c o n v e r t e d   t o   t h e   r e q u e s t e d   f o r m a t . 
   * 
   *     @ a n a l y s i s   I f   e m i t t e d   d u r i n g   w i n d o w   c r e a t i o n ,   o n e   o r   m o r e 
   *     [ h a r d   c o n s t r a i n t s ] ( @ r e f   w i n d o w _ h i n t s _ h a r d )   d i d   n o t   m a t c h   a n y   o f   t h e 
   *     a v a i l a b l e   p i x e l   f o r m a t s .     I f   y o u r   a p p l i c a t i o n   i s   s u f f i c i e n t l y   f l e x i b l e , 
   *     d o w n g r a d e   y o u r   r e q u i r e m e n t s   a n d   t r y   a g a i n .     O t h e r w i s e ,   i n f o r m   t h e   u s e r   t h a t 
   *     t h e i r   m a c h i n e   d o e s   n o t   m a t c h   y o u r   r e q u i r e m e n t s . 
   * 
   *     @ p a r 
   *     I f   e m i t t e d   w h e n   q u e r y i n g   t h e   c l i p b o a r d ,   i g n o r e   t h e   e r r o r   o r   r e p o r t   i t   t o 
   *     t h e   u s e r ,   a s   a p p r o p r i a t e . 
   * / 
 # d e f i n e   G L F W _ F O R M A T _ U N A V A I L A B L E           0 x 0 0 0 1 0 0 0 9 
 / * !   @ b r i e f   T h e   s p e c i f i e d   w i n d o w   d o e s   n o t   h a v e   a n   O p e n G L   o r   O p e n G L   E S   c o n t e x t . 
   * 
   *     A   w i n d o w   t h a t   d o e s   n o t   h a v e   a n   O p e n G L   o r   O p e n G L   E S   c o n t e x t   w a s   p a s s e d   t o 
   *     a   f u n c t i o n   t h a t   r e q u i r e s   i t   t o   h a v e   o n e . 
   * 
   *     @ a n a l y s i s   A p p l i c a t i o n   p r o g r a m m e r   e r r o r .     F i x   t h e   o f f e n d i n g   c a l l . 
   * / 
 # d e f i n e   G L F W _ N O _ W I N D O W _ C O N T E X T             0 x 0 0 0 1 0 0 0 A 
 / * !   @ b r i e f   T h e   s p e c i f i e d   c u r s o r   s h a p e   i s   n o t   a v a i l a b l e . 
   * 
   *     T h e   s p e c i f i e d   s t a n d a r d   c u r s o r   s h a p e   i s   n o t   a v a i l a b l e ,   e i t h e r   b e c a u s e   t h e 
   *     c u r r e n t   p l a t f o r m   c u r s o r   t h e m e   d o e s   n o t   p r o v i d e   i t   o r   b e c a u s e   i t   i s   n o t 
   *     a v a i l a b l e   o n   t h e   p l a t f o r m . 
   * 
   *     @ a n a l y s i s   P l a t f o r m   o r   s y s t e m   s e t t i n g s   l i m i t a t i o n .     P i c k   a n o t h e r 
   *     [ s t a n d a r d   c u r s o r   s h a p e ] ( @ r e f   s h a p e s )   o r   c r e a t e   a 
   *     [ c u s t o m   c u r s o r ] ( @ r e f   c u r s o r _ c u s t o m ) . 
   * / 
 # d e f i n e   G L F W _ C U R S O R _ U N A V A I L A B L E           0 x 0 0 0 1 0 0 0 B 
 / * !   @ b r i e f   T h e   r e q u e s t e d   f e a t u r e   i s   n o t   p r o v i d e d   b y   t h e   p l a t f o r m . 
   * 
   *     T h e   r e q u e s t e d   f e a t u r e   i s   n o t   p r o v i d e d   b y   t h e   p l a t f o r m ,   s o   G L F W   i s   u n a b l e   t o 
   *     i m p l e m e n t   i t .     T h e   d o c u m e n t a t i o n   f o r   e a c h   f u n c t i o n   n o t e s   i f   i t   c o u l d   e m i t 
   *     t h i s   e r r o r . 
   * 
   *     @ a n a l y s i s   P l a t f o r m   o r   p l a t f o r m   v e r s i o n   l i m i t a t i o n .     T h e   e r r o r   c a n   b e   i g n o r e d 
   *     u n l e s s   t h e   f e a t u r e   i s   c r i t i c a l   t o   t h e   a p p l i c a t i o n . 
   * 
   *     @ p a r 
   *     A   f u n c t i o n   c a l l   t h a t   e m i t s   t h i s   e r r o r   h a s   n o   e f f e c t   o t h e r   t h a n   t h e   e r r o r   a n d 
   *     u p d a t i n g   a n y   e x i s t i n g   o u t   p a r a m e t e r s . 
   * / 
 # d e f i n e   G L F W _ F E A T U R E _ U N A V A I L A B L E         0 x 0 0 0 1 0 0 0 C 
 / * !   @ b r i e f   T h e   r e q u e s t e d   f e a t u r e   i s   n o t   i m p l e m e n t e d   f o r   t h e   p l a t f o r m . 
   * 
   *     T h e   r e q u e s t e d   f e a t u r e   h a s   n o t   y e t   b e e n   i m p l e m e n t e d   i n   G L F W   f o r   t h i s   p l a t f o r m . 
   * 
   *     @ a n a l y s i s   A n   i n c o m p l e t e   i m p l e m e n t a t i o n   o f   G L F W   f o r   t h i s   p l a t f o r m ,   h o p e f u l l y 
   *     f i x e d   i n   a   f u t u r e   r e l e a s e .     T h e   e r r o r   c a n   b e   i g n o r e d   u n l e s s   t h e   f e a t u r e   i s 
   *     c r i t i c a l   t o   t h e   a p p l i c a t i o n . 
   * 
   *     @ p a r 
   *     A   f u n c t i o n   c a l l   t h a t   e m i t s   t h i s   e r r o r   h a s   n o   e f f e c t   o t h e r   t h a n   t h e   e r r o r   a n d 
   *     u p d a t i n g   a n y   e x i s t i n g   o u t   p a r a m e t e r s . 
   * / 
 # d e f i n e   G L F W _ F E A T U R E _ U N I M P L E M E N T E D     0 x 0 0 0 1 0 0 0 D 
 / * !   @ b r i e f   P l a t f o r m   u n a v a i l a b l e   o r   n o   m a t c h i n g   p l a t f o r m   w a s   f o u n d . 
   * 
   *     I f   e m i t t e d   d u r i n g   i n i t i a l i z a t i o n ,   n o   m a t c h i n g   p l a t f o r m   w a s   f o u n d .     I f   @ r e f 
   *     G L F W _ P L A T F O R M   i s   s e t   t o   ` G L F W _ A N Y _ P L A T F O R M ` ,   G L F W   c o u l d   n o t   d e t e c t   a n y   o f   t h e 
   *     p l a t f o r m s   s u p p o r t e d   b y   t h i s   l i b r a r y   b i n a r y ,   e x c e p t   f o r   t h e   N u l l   p l a t f o r m .     I f   s e t   t o 
   *     a   s p e c i f i c   p l a t f o r m ,   i t   i s   e i t h e r   n o t   s u p p o r t e d   b y   t h i s   l i b r a r y   b i n a r y   o r   G L F W   w a s   n o t 
   *     a b l e   t o   d e t e c t   i t . 
   * 
   *     I f   e m i t t e d   b y   a   n a t i v e   a c c e s s   f u n c t i o n ,   G L F W   w a s   i n i t i a l i z e d   f o r   a   d i f f e r e n t   p l a t f o r m 
   *     t h a n   t h e   f u n c t i o n   i s   f o r . 
   * 
   *     @ a n a l y s i s   F a i l u r e   t o   d e t e c t   a n y   p l a t f o r m   u s u a l l y   o n l y   h a p p e n s   o n   n o n - m a c O S   U n i x 
   *     s y s t e m s ,   e i t h e r   w h e n   n o   w i n d o w   s y s t e m   i s   r u n n i n g   o r   t h e   p r o g r a m   w a s   r u n   f r o m 
   *     a   t e r m i n a l   t h a t   d o e s   n o t   h a v e   t h e   n e c e s s a r y   e n v i r o n m e n t   v a r i a b l e s .     F a l l   b a c k   t o 
   *     a   d i f f e r e n t   p l a t f o r m   i f   p o s s i b l e   o r   n o t i f y   t h e   u s e r   t h a t   n o   u s a b l e   p l a t f o r m   w a s 
   *     d e t e c t e d . 
   * 
   *     F a i l u r e   t o   d e t e c t   a   s p e c i f i c   p l a t f o r m   m a y   h a v e   t h e   s a m e   c a u s e   a s   a b o v e   o r   b e   b e c a u s e 
   *     s u p p o r t   f o r   t h a t   p l a t f o r m   w a s   n o t   c o m p i l e d   i n .     C a l l   @ r e f   g l f w P l a t f o r m S u p p o r t e d   t o 
   *     c h e c k   w h e t h e r   a   s p e c i f i c   p l a t f o r m   i s   s u p p o r t e d   b y   a   l i b r a r y   b i n a r y . 
   * / 
 # d e f i n e   G L F W _ P L A T F O R M _ U N A V A I L A B L E       0 x 0 0 0 1 0 0 0 E 
 / * !   @ }   * / 
 
 / * !   @ a d d t o g r o u p   w i n d o w 
   *     @ {   * / 
 / * !   @ b r i e f   I n p u t   f o c u s   w i n d o w   h i n t   a n d   a t t r i b u t e 
   * 
   *     I n p u t   f o c u s   [ w i n d o w   h i n t ] ( @ r e f   G L F W _ F O C U S E D _ h i n t )   o r 
   *     [ w i n d o w   a t t r i b u t e ] ( @ r e f   G L F W _ F O C U S E D _ a t t r i b ) . 
   * / 
 # d e f i n e   G L F W _ F O C U S E D                                 0 x 0 0 0 2 0 0 0 1 
 / * !   @ b r i e f   W i n d o w   i c o n i f i c a t i o n   w i n d o w   a t t r i b u t e 
   * 
   *     W i n d o w   i c o n i f i c a t i o n   [ w i n d o w   a t t r i b u t e ] ( @ r e f   G L F W _ I C O N I F I E D _ a t t r i b ) . 
   * / 
 # d e f i n e   G L F W _ I C O N I F I E D                             0 x 0 0 0 2 0 0 0 2 
 / * !   @ b r i e f   W i n d o w   r e s i z e - a b i l i t y   w i n d o w   h i n t   a n d   a t t r i b u t e 
   * 
   *     W i n d o w   r e s i z e - a b i l i t y   [ w i n d o w   h i n t ] ( @ r e f   G L F W _ R E S I Z A B L E _ h i n t )   a n d 
   *     [ w i n d o w   a t t r i b u t e ] ( @ r e f   G L F W _ R E S I Z A B L E _ a t t r i b ) . 
   * / 
 # d e f i n e   G L F W _ R E S I Z A B L E                             0 x 0 0 0 2 0 0 0 3 
 / * !   @ b r i e f   W i n d o w   v i s i b i l i t y   w i n d o w   h i n t   a n d   a t t r i b u t e 
   * 
   *     W i n d o w   v i s i b i l i t y   [ w i n d o w   h i n t ] ( @ r e f   G L F W _ V I S I B L E _ h i n t )   a n d 
   *     [ w i n d o w   a t t r i b u t e ] ( @ r e f   G L F W _ V I S I B L E _ a t t r i b ) . 
   * / 
 # d e f i n e   G L F W _ V I S I B L E                                 0 x 0 0 0 2 0 0 0 4 
 / * !   @ b r i e f   W i n d o w   d e c o r a t i o n   w i n d o w   h i n t   a n d   a t t r i b u t e 
   * 
   *     W i n d o w   d e c o r a t i o n   [ w i n d o w   h i n t ] ( @ r e f   G L F W _ D E C O R A T E D _ h i n t )   a n d 
   *     [ w i n d o w   a t t r i b u t e ] ( @ r e f   G L F W _ D E C O R A T E D _ a t t r i b ) . 
   * / 
 # d e f i n e   G L F W _ D E C O R A T E D                             0 x 0 0 0 2 0 0 0 5 
 / * !   @ b r i e f   W i n d o w   a u t o - i c o n i f i c a t i o n   w i n d o w   h i n t   a n d   a t t r i b u t e 
   * 
   *     W i n d o w   a u t o - i c o n i f i c a t i o n   [ w i n d o w   h i n t ] ( @ r e f   G L F W _ A U T O _ I C O N I F Y _ h i n t )   a n d 
   *     [ w i n d o w   a t t r i b u t e ] ( @ r e f   G L F W _ A U T O _ I C O N I F Y _ a t t r i b ) . 
   * / 
 # d e f i n e   G L F W _ A U T O _ I C O N I F Y                       0 x 0 0 0 2 0 0 0 6 
 / * !   @ b r i e f   W i n d o w   d e c o r a t i o n   w i n d o w   h i n t   a n d   a t t r i b u t e 
   * 
   *     W i n d o w   d e c o r a t i o n   [ w i n d o w   h i n t ] ( @ r e f   G L F W _ F L O A T I N G _ h i n t )   a n d 
   *     [ w i n d o w   a t t r i b u t e ] ( @ r e f   G L F W _ F L O A T I N G _ a t t r i b ) . 
   * / 
 # d e f i n e   G L F W _ F L O A T I N G                               0 x 0 0 0 2 0 0 0 7 
 / * !   @ b r i e f   W i n d o w   m a x i m i z a t i o n   w i n d o w   h i n t   a n d   a t t r i b u t e 
   * 
   *     W i n d o w   m a x i m i z a t i o n   [ w i n d o w   h i n t ] ( @ r e f   G L F W _ M A X I M I Z E D _ h i n t )   a n d 
   *     [ w i n d o w   a t t r i b u t e ] ( @ r e f   G L F W _ M A X I M I Z E D _ a t t r i b ) . 
   * / 
 # d e f i n e   G L F W _ M A X I M I Z E D                             0 x 0 0 0 2 0 0 0 8 
 / * !   @ b r i e f   C u r s o r   c e n t e r i n g   w i n d o w   h i n t 
   * 
   *     C u r s o r   c e n t e r i n g   [ w i n d o w   h i n t ] ( @ r e f   G L F W _ C E N T E R _ C U R S O R _ h i n t ) . 
   * / 
 # d e f i n e   G L F W _ C E N T E R _ C U R S O R                     0 x 0 0 0 2 0 0 0 9 
 / * !   @ b r i e f   W i n d o w   f r a m e b u f f e r   t r a n s p a r e n c y   h i n t   a n d   a t t r i b u t e 
   * 
   *     W i n d o w   f r a m e b u f f e r   t r a n s p a r e n c y 
   *     [ w i n d o w   h i n t ] ( @ r e f   G L F W _ T R A N S P A R E N T _ F R A M E B U F F E R _ h i n t )   a n d 
   *     [ w i n d o w   a t t r i b u t e ] ( @ r e f   G L F W _ T R A N S P A R E N T _ F R A M E B U F F E R _ a t t r i b ) . 
   * / 
 # d e f i n e   G L F W _ T R A N S P A R E N T _ F R A M E B U F F E R   0 x 0 0 0 2 0 0 0 A 
 / * !   @ b r i e f   M o u s e   c u r s o r   h o v e r   w i n d o w   a t t r i b u t e . 
   * 
   *     M o u s e   c u r s o r   h o v e r   [ w i n d o w   a t t r i b u t e ] ( @ r e f   G L F W _ H O V E R E D _ a t t r i b ) . 
   * / 
 # d e f i n e   G L F W _ H O V E R E D                                 0 x 0 0 0 2 0 0 0 B 
 / * !   @ b r i e f   I n p u t   f o c u s   o n   c a l l i n g   s h o w   w i n d o w   h i n t   a n d   a t t r i b u t e 
   * 
   *     I n p u t   f o c u s   [ w i n d o w   h i n t ] ( @ r e f   G L F W _ F O C U S _ O N _ S H O W _ h i n t )   o r 
   *     [ w i n d o w   a t t r i b u t e ] ( @ r e f   G L F W _ F O C U S _ O N _ S H O W _ a t t r i b ) . 
   * / 
 # d e f i n e   G L F W _ F O C U S _ O N _ S H O W                     0 x 0 0 0 2 0 0 0 C 
 
 / * !   @ b r i e f   M o u s e   i n p u t   t r a n s p a r e n c y   w i n d o w   h i n t   a n d   a t t r i b u t e 
   * 
   *     M o u s e   i n p u t   t r a n s p a r e n c y   [ w i n d o w   h i n t ] ( @ r e f   G L F W _ M O U S E _ P A S S T H R O U G H _ h i n t )   o r 
   *     [ w i n d o w   a t t r i b u t e ] ( @ r e f   G L F W _ M O U S E _ P A S S T H R O U G H _ a t t r i b ) . 
   * / 
 # d e f i n e   G L F W _ M O U S E _ P A S S T H R O U G H             0 x 0 0 0 2 0 0 0 D 
 
 / * !   @ b r i e f   I n i t i a l   p o s i t i o n   x - c o o r d i n a t e   w i n d o w   h i n t . 
   * 
   *     I n i t i a l   p o s i t i o n   x - c o o r d i n a t e   [ w i n d o w   h i n t ] ( @ r e f   G L F W _ P O S I T I O N _ X ) . 
   * / 
 # d e f i n e   G L F W _ P O S I T I O N _ X                           0 x 0 0 0 2 0 0 0 E 
 
 / * !   @ b r i e f   I n i t i a l   p o s i t i o n   y - c o o r d i n a t e   w i n d o w   h i n t . 
   * 
   *     I n i t i a l   p o s i t i o n   y - c o o r d i n a t e   [ w i n d o w   h i n t ] ( @ r e f   G L F W _ P O S I T I O N _ Y ) . 
   * / 
 # d e f i n e   G L F W _ P O S I T I O N _ Y                           0 x 0 0 0 2 0 0 0 F 
 
 / * !   @ b r i e f   F r a m e b u f f e r   b i t   d e p t h   h i n t . 
   * 
   *     F r a m e b u f f e r   b i t   d e p t h   [ h i n t ] ( @ r e f   G L F W _ R E D _ B I T S ) . 
   * / 
 # d e f i n e   G L F W _ R E D _ B I T S                               0 x 0 0 0 2 1 0 0 1 
 / * !   @ b r i e f   F r a m e b u f f e r   b i t   d e p t h   h i n t . 
   * 
   *     F r a m e b u f f e r   b i t   d e p t h   [ h i n t ] ( @ r e f   G L F W _ G R E E N _ B I T S ) . 
   * / 
 # d e f i n e   G L F W _ G R E E N _ B I T S                           0 x 0 0 0 2 1 0 0 2 
 / * !   @ b r i e f   F r a m e b u f f e r   b i t   d e p t h   h i n t . 
   * 
   *     F r a m e b u f f e r   b i t   d e p t h   [ h i n t ] ( @ r e f   G L F W _ B L U E _ B I T S ) . 
   * / 
 # d e f i n e   G L F W _ B L U E _ B I T S                             0 x 0 0 0 2 1 0 0 3 
 / * !   @ b r i e f   F r a m e b u f f e r   b i t   d e p t h   h i n t . 
   * 
   *     F r a m e b u f f e r   b i t   d e p t h   [ h i n t ] ( @ r e f   G L F W _ A L P H A _ B I T S ) . 
   * / 
 # d e f i n e   G L F W _ A L P H A _ B I T S                           0 x 0 0 0 2 1 0 0 4 
 / * !   @ b r i e f   F r a m e b u f f e r   b i t   d e p t h   h i n t . 
   * 
   *     F r a m e b u f f e r   b i t   d e p t h   [ h i n t ] ( @ r e f   G L F W _ D E P T H _ B I T S ) . 
   * / 
 # d e f i n e   G L F W _ D E P T H _ B I T S                           0 x 0 0 0 2 1 0 0 5 
 / * !   @ b r i e f   F r a m e b u f f e r   b i t   d e p t h   h i n t . 
   * 
   *     F r a m e b u f f e r   b i t   d e p t h   [ h i n t ] ( @ r e f   G L F W _ S T E N C I L _ B I T S ) . 
   * / 
 # d e f i n e   G L F W _ S T E N C I L _ B I T S                       0 x 0 0 0 2 1 0 0 6 
 / * !   @ b r i e f   F r a m e b u f f e r   b i t   d e p t h   h i n t . 
   * 
   *     F r a m e b u f f e r   b i t   d e p t h   [ h i n t ] ( @ r e f   G L F W _ A C C U M _ R E D _ B I T S ) . 
   * / 
 # d e f i n e   G L F W _ A C C U M _ R E D _ B I T S                   0 x 0 0 0 2 1 0 0 7 
 / * !   @ b r i e f   F r a m e b u f f e r   b i t   d e p t h   h i n t . 
   * 
   *     F r a m e b u f f e r   b i t   d e p t h   [ h i n t ] ( @ r e f   G L F W _ A C C U M _ G R E E N _ B I T S ) . 
   * / 
 # d e f i n e   G L F W _ A C C U M _ G R E E N _ B I T S               0 x 0 0 0 2 1 0 0 8 
 / * !   @ b r i e f   F r a m e b u f f e r   b i t   d e p t h   h i n t . 
   * 
   *     F r a m e b u f f e r   b i t   d e p t h   [ h i n t ] ( @ r e f   G L F W _ A C C U M _ B L U E _ B I T S ) . 
   * / 
 # d e f i n e   G L F W _ A C C U M _ B L U E _ B I T S                 0 x 0 0 0 2 1 0 0 9 
 / * !   @ b r i e f   F r a m e b u f f e r   b i t   d e p t h   h i n t . 
   * 
   *     F r a m e b u f f e r   b i t   d e p t h   [ h i n t ] ( @ r e f   G L F W _ A C C U M _ A L P H A _ B I T S ) . 
   * / 
 # d e f i n e   G L F W _ A C C U M _ A L P H A _ B I T S               0 x 0 0 0 2 1 0 0 A 
 / * !   @ b r i e f   F r a m e b u f f e r   a u x i l i a r y   b u f f e r   h i n t . 
   * 
   *     F r a m e b u f f e r   a u x i l i a r y   b u f f e r   [ h i n t ] ( @ r e f   G L F W _ A U X _ B U F F E R S ) . 
   * / 
 # d e f i n e   G L F W _ A U X _ B U F F E R S                         0 x 0 0 0 2 1 0 0 B 
 / * !   @ b r i e f   O p e n G L   s t e r e o s c o p i c   r e n d e r i n g   h i n t . 
   * 
   *     O p e n G L   s t e r e o s c o p i c   r e n d e r i n g   [ h i n t ] ( @ r e f   G L F W _ S T E R E O ) . 
   * / 
 # d e f i n e   G L F W _ S T E R E O                                   0 x 0 0 0 2 1 0 0 C 
 / * !   @ b r i e f   F r a m e b u f f e r   M S A A   s a m p l e s   h i n t . 
   * 
   *     F r a m e b u f f e r   M S A A   s a m p l e s   [ h i n t ] ( @ r e f   G L F W _ S A M P L E S ) . 
   * / 
 # d e f i n e   G L F W _ S A M P L E S                                 0 x 0 0 0 2 1 0 0 D 
 / * !   @ b r i e f   F r a m e b u f f e r   s R G B   h i n t . 
   * 
   *     F r a m e b u f f e r   s R G B   [ h i n t ] ( @ r e f   G L F W _ S R G B _ C A P A B L E ) . 
   * / 
 # d e f i n e   G L F W _ S R G B _ C A P A B L E                       0 x 0 0 0 2 1 0 0 E 
 / * !   @ b r i e f   M o n i t o r   r e f r e s h   r a t e   h i n t . 
   * 
   *     M o n i t o r   r e f r e s h   r a t e   [ h i n t ] ( @ r e f   G L F W _ R E F R E S H _ R A T E ) . 
   * / 
 # d e f i n e   G L F W _ R E F R E S H _ R A T E                       0 x 0 0 0 2 1 0 0 F 
 / * !   @ b r i e f   F r a m e b u f f e r   d o u b l e   b u f f e r i n g   h i n t   a n d   a t t r i b u t e . 
   * 
   *     F r a m e b u f f e r   d o u b l e   b u f f e r i n g   [ h i n t ] ( @ r e f   G L F W _ D O U B L E B U F F E R _ h i n t )   a n d 
   *     [ a t t r i b u t e ] ( @ r e f   G L F W _ D O U B L E B U F F E R _ a t t r i b ) . 
   * / 
 # d e f i n e   G L F W _ D O U B L E B U F F E R                       0 x 0 0 0 2 1 0 1 0 
 
 / * !   @ b r i e f   C o n t e x t   c l i e n t   A P I   h i n t   a n d   a t t r i b u t e . 
   * 
   *     C o n t e x t   c l i e n t   A P I   [ h i n t ] ( @ r e f   G L F W _ C L I E N T _ A P I _ h i n t )   a n d 
   *     [ a t t r i b u t e ] ( @ r e f   G L F W _ C L I E N T _ A P I _ a t t r i b ) . 
   * / 
 # d e f i n e   G L F W _ C L I E N T _ A P I                           0 x 0 0 0 2 2 0 0 1 
 / * !   @ b r i e f   C o n t e x t   c l i e n t   A P I   m a j o r   v e r s i o n   h i n t   a n d   a t t r i b u t e . 
   * 
   *     C o n t e x t   c l i e n t   A P I   m a j o r   v e r s i o n   [ h i n t ] ( @ r e f   G L F W _ C O N T E X T _ V E R S I O N _ M A J O R _ h i n t ) 
   *     a n d   [ a t t r i b u t e ] ( @ r e f   G L F W _ C O N T E X T _ V E R S I O N _ M A J O R _ a t t r i b ) . 
   * / 
 # d e f i n e   G L F W _ C O N T E X T _ V E R S I O N _ M A J O R     0 x 0 0 0 2 2 0 0 2 
 / * !   @ b r i e f   C o n t e x t   c l i e n t   A P I   m i n o r   v e r s i o n   h i n t   a n d   a t t r i b u t e . 
   * 
   *     C o n t e x t   c l i e n t   A P I   m i n o r   v e r s i o n   [ h i n t ] ( @ r e f   G L F W _ C O N T E X T _ V E R S I O N _ M I N O R _ h i n t ) 
   *     a n d   [ a t t r i b u t e ] ( @ r e f   G L F W _ C O N T E X T _ V E R S I O N _ M I N O R _ a t t r i b ) . 
   * / 
 # d e f i n e   G L F W _ C O N T E X T _ V E R S I O N _ M I N O R     0 x 0 0 0 2 2 0 0 3 
 / * !   @ b r i e f   C o n t e x t   c l i e n t   A P I   r e v i s i o n   n u m b e r   a t t r i b u t e . 
   * 
   *     C o n t e x t   c l i e n t   A P I   r e v i s i o n   n u m b e r 
   *     [ a t t r i b u t e ] ( @ r e f   G L F W _ C O N T E X T _ R E V I S I O N _ a t t r i b ) . 
   * / 
 # d e f i n e   G L F W _ C O N T E X T _ R E V I S I O N               0 x 0 0 0 2 2 0 0 4 
 / * !   @ b r i e f   C o n t e x t   r o b u s t n e s s   h i n t   a n d   a t t r i b u t e . 
   * 
   *     C o n t e x t   c l i e n t   A P I   r e v i s i o n   n u m b e r   [ h i n t ] ( @ r e f   G L F W _ C O N T E X T _ R O B U S T N E S S _ h i n t ) 
   *     a n d   [ a t t r i b u t e ] ( @ r e f   G L F W _ C O N T E X T _ R O B U S T N E S S _ a t t r i b ) . 
   * / 
 # d e f i n e   G L F W _ C O N T E X T _ R O B U S T N E S S           0 x 0 0 0 2 2 0 0 5 
 / * !   @ b r i e f   O p e n G L   f o r w a r d - c o m p a t i b i l i t y   h i n t   a n d   a t t r i b u t e . 
   * 
   *     O p e n G L   f o r w a r d - c o m p a t i b i l i t y   [ h i n t ] ( @ r e f   G L F W _ O P E N G L _ F O R W A R D _ C O M P A T _ h i n t ) 
   *     a n d   [ a t t r i b u t e ] ( @ r e f   G L F W _ O P E N G L _ F O R W A R D _ C O M P A T _ a t t r i b ) . 
   * / 
 # d e f i n e   G L F W _ O P E N G L _ F O R W A R D _ C O M P A T     0 x 0 0 0 2 2 0 0 6 
 / * !   @ b r i e f   D e b u g   m o d e   c o n t e x t   h i n t   a n d   a t t r i b u t e . 
   * 
   *     D e b u g   m o d e   c o n t e x t   [ h i n t ] ( @ r e f   G L F W _ C O N T E X T _ D E B U G _ h i n t )   a n d 
   *     [ a t t r i b u t e ] ( @ r e f   G L F W _ C O N T E X T _ D E B U G _ a t t r i b ) . 
   * / 
 # d e f i n e   G L F W _ C O N T E X T _ D E B U G                     0 x 0 0 0 2 2 0 0 7 
 / * !   @ b r i e f   L e g a c y   n a m e   f o r   c o m p a t i b i l i t y . 
   * 
   *     T h i s   i s   a n   a l i a s   f o r   c o m p a t i b i l i t y   w i t h   e a r l i e r   v e r s i o n s . 
   * / 
 # d e f i n e   G L F W _ O P E N G L _ D E B U G _ C O N T E X T       G L F W _ C O N T E X T _ D E B U G 
 / * !   @ b r i e f   O p e n G L   p r o f i l e   h i n t   a n d   a t t r i b u t e . 
   * 
   *     O p e n G L   p r o f i l e   [ h i n t ] ( @ r e f   G L F W _ O P E N G L _ P R O F I L E _ h i n t )   a n d 
   *     [ a t t r i b u t e ] ( @ r e f   G L F W _ O P E N G L _ P R O F I L E _ a t t r i b ) . 
   * / 
 # d e f i n e   G L F W _ O P E N G L _ P R O F I L E                   0 x 0 0 0 2 2 0 0 8 
 / * !   @ b r i e f   C o n t e x t   f l u s h - o n - r e l e a s e   h i n t   a n d   a t t r i b u t e . 
   * 
   *     C o n t e x t   f l u s h - o n - r e l e a s e   [ h i n t ] ( @ r e f   G L F W _ C O N T E X T _ R E L E A S E _ B E H A V I O R _ h i n t )   a n d 
   *     [ a t t r i b u t e ] ( @ r e f   G L F W _ C O N T E X T _ R E L E A S E _ B E H A V I O R _ a t t r i b ) . 
   * / 
 # d e f i n e   G L F W _ C O N T E X T _ R E L E A S E _ B E H A V I O R   0 x 0 0 0 2 2 0 0 9 
 / * !   @ b r i e f   C o n t e x t   e r r o r   s u p p r e s s i o n   h i n t   a n d   a t t r i b u t e . 
   * 
   *     C o n t e x t   e r r o r   s u p p r e s s i o n   [ h i n t ] ( @ r e f   G L F W _ C O N T E X T _ N O _ E R R O R _ h i n t )   a n d 
   *     [ a t t r i b u t e ] ( @ r e f   G L F W _ C O N T E X T _ N O _ E R R O R _ a t t r i b ) . 
   * / 
 # d e f i n e   G L F W _ C O N T E X T _ N O _ E R R O R               0 x 0 0 0 2 2 0 0 A 
 / * !   @ b r i e f   C o n t e x t   c r e a t i o n   A P I   h i n t   a n d   a t t r i b u t e . 
   * 
   *     C o n t e x t   c r e a t i o n   A P I   [ h i n t ] ( @ r e f   G L F W _ C O N T E X T _ C R E A T I O N _ A P I _ h i n t )   a n d 
   *     [ a t t r i b u t e ] ( @ r e f   G L F W _ C O N T E X T _ C R E A T I O N _ A P I _ a t t r i b ) . 
   * / 
 # d e f i n e   G L F W _ C O N T E X T _ C R E A T I O N _ A P I       0 x 0 0 0 2 2 0 0 B 
 / * !   @ b r i e f   W i n d o w   c o n t e n t   a r e a   s c a l i n g   w i n d o w 
   *     [ w i n d o w   h i n t ] ( @ r e f   G L F W _ S C A L E _ T O _ M O N I T O R ) . 
   * / 
 # d e f i n e   G L F W _ S C A L E _ T O _ M O N I T O R               0 x 0 0 0 2 2 0 0 C 
 / * !   @ b r i e f   m a c O S   s p e c i f i c 
   *     [ w i n d o w   h i n t ] ( @ r e f   G L F W _ C O C O A _ R E T I N A _ F R A M E B U F F E R _ h i n t ) . 
   * / 
 # d e f i n e   G L F W _ C O C O A _ R E T I N A _ F R A M E B U F F E R   0 x 0 0 0 2 3 0 0 1 
 / * !   @ b r i e f   m a c O S   s p e c i f i c 
   *     [ w i n d o w   h i n t ] ( @ r e f   G L F W _ C O C O A _ F R A M E _ N A M E _ h i n t ) . 
   * / 
 # d e f i n e   G L F W _ C O C O A _ F R A M E _ N A M E                   0 x 0 0 0 2 3 0 0 2 
 / * !   @ b r i e f   m a c O S   s p e c i f i c 
   *     [ w i n d o w   h i n t ] ( @ r e f   G L F W _ C O C O A _ G R A P H I C S _ S W I T C H I N G _ h i n t ) . 
   * / 
 # d e f i n e   G L F W _ C O C O A _ G R A P H I C S _ S W I T C H I N G   0 x 0 0 0 2 3 0 0 3 
 / * !   @ b r i e f   X 1 1   s p e c i f i c 
   *     [ w i n d o w   h i n t ] ( @ r e f   G L F W _ X 1 1 _ C L A S S _ N A M E _ h i n t ) . 
   * / 
 # d e f i n e   G L F W _ X 1 1 _ C L A S S _ N A M E                   0 x 0 0 0 2 4 0 0 1 
 / * !   @ b r i e f   X 1 1   s p e c i f i c 
   *     [ w i n d o w   h i n t ] ( @ r e f   G L F W _ X 1 1 _ C L A S S _ N A M E _ h i n t ) . 
   * / 
 # d e f i n e   G L F W _ X 1 1 _ I N S T A N C E _ N A M E             0 x 0 0 0 2 4 0 0 2 
 # d e f i n e   G L F W _ W I N 3 2 _ K E Y B O A R D _ M E N U         0 x 0 0 0 2 5 0 0 1 
 / * !   @ b r i e f   W a y l a n d   s p e c i f i c 
   *     [ w i n d o w   h i n t ] ( @ r e f   G L F W _ W A Y L A N D _ A P P _ I D _ h i n t ) . 
   *     
   *     A l l o w s   s p e c i f i c a t i o n   o f   t h e   W a y l a n d   a p p _ i d . 
   * / 
 # d e f i n e   G L F W _ W A Y L A N D _ A P P _ I D                   0 x 0 0 0 2 6 0 0 1 
 / * !   @ }   * / 
 
 # d e f i n e   G L F W _ N O _ A P I                                                     0 
 # d e f i n e   G L F W _ O P E N G L _ A P I                           0 x 0 0 0 3 0 0 0 1 
 # d e f i n e   G L F W _ O P E N G L _ E S _ A P I                     0 x 0 0 0 3 0 0 0 2 
 
 # d e f i n e   G L F W _ N O _ R O B U S T N E S S                                       0 
 # d e f i n e   G L F W _ N O _ R E S E T _ N O T I F I C A T I O N     0 x 0 0 0 3 1 0 0 1 
 # d e f i n e   G L F W _ L O S E _ C O N T E X T _ O N _ R E S E T     0 x 0 0 0 3 1 0 0 2 
 
 # d e f i n e   G L F W _ O P E N G L _ A N Y _ P R O F I L E                             0 
 # d e f i n e   G L F W _ O P E N G L _ C O R E _ P R O F I L E         0 x 0 0 0 3 2 0 0 1 
 # d e f i n e   G L F W _ O P E N G L _ C O M P A T _ P R O F I L E     0 x 0 0 0 3 2 0 0 2 
 
 # d e f i n e   G L F W _ C U R S O R                                   0 x 0 0 0 3 3 0 0 1 
 # d e f i n e   G L F W _ S T I C K Y _ K E Y S                         0 x 0 0 0 3 3 0 0 2 
 # d e f i n e   G L F W _ S T I C K Y _ M O U S E _ B U T T O N S       0 x 0 0 0 3 3 0 0 3 
 # d e f i n e   G L F W _ L O C K _ K E Y _ M O D S                     0 x 0 0 0 3 3 0 0 4 
 # d e f i n e   G L F W _ R A W _ M O U S E _ M O T I O N               0 x 0 0 0 3 3 0 0 5 
 
 # d e f i n e   G L F W _ C U R S O R _ N O R M A L                     0 x 0 0 0 3 4 0 0 1 
 # d e f i n e   G L F W _ C U R S O R _ H I D D E N                     0 x 0 0 0 3 4 0 0 2 
 # d e f i n e   G L F W _ C U R S O R _ D I S A B L E D                 0 x 0 0 0 3 4 0 0 3 
 # d e f i n e   G L F W _ C U R S O R _ C A P T U R E D                 0 x 0 0 0 3 4 0 0 4 
 
 # d e f i n e   G L F W _ A N Y _ R E L E A S E _ B E H A V I O R                         0 
 # d e f i n e   G L F W _ R E L E A S E _ B E H A V I O R _ F L U S H   0 x 0 0 0 3 5 0 0 1 
 # d e f i n e   G L F W _ R E L E A S E _ B E H A V I O R _ N O N E     0 x 0 0 0 3 5 0 0 2 
 
 # d e f i n e   G L F W _ N A T I V E _ C O N T E X T _ A P I           0 x 0 0 0 3 6 0 0 1 
 # d e f i n e   G L F W _ E G L _ C O N T E X T _ A P I                 0 x 0 0 0 3 6 0 0 2 
 # d e f i n e   G L F W _ O S M E S A _ C O N T E X T _ A P I           0 x 0 0 0 3 6 0 0 3 
 
 # d e f i n e   G L F W _ A N G L E _ P L A T F O R M _ T Y P E _ N O N E         0 x 0 0 0 3 7 0 0 1 
 # d e f i n e   G L F W _ A N G L E _ P L A T F O R M _ T Y P E _ O P E N G L     0 x 0 0 0 3 7 0 0 2 
 # d e f i n e   G L F W _ A N G L E _ P L A T F O R M _ T Y P E _ O P E N G L E S   0 x 0 0 0 3 7 0 0 3 
 # d e f i n e   G L F W _ A N G L E _ P L A T F O R M _ T Y P E _ D 3 D 9         0 x 0 0 0 3 7 0 0 4 
 # d e f i n e   G L F W _ A N G L E _ P L A T F O R M _ T Y P E _ D 3 D 1 1       0 x 0 0 0 3 7 0 0 5 
 # d e f i n e   G L F W _ A N G L E _ P L A T F O R M _ T Y P E _ V U L K A N     0 x 0 0 0 3 7 0 0 7 
 # d e f i n e   G L F W _ A N G L E _ P L A T F O R M _ T Y P E _ M E T A L       0 x 0 0 0 3 7 0 0 8 
 
 # d e f i n e   G L F W _ W A Y L A N D _ P R E F E R _ L I B D E C O R         0 x 0 0 0 3 8 0 0 1 
 # d e f i n e   G L F W _ W A Y L A N D _ D I S A B L E _ L I B D E C O R       0 x 0 0 0 3 8 0 0 2 
 
 # d e f i n e   G L F W _ A N Y _ P O S I T I O N                       0 x 8 0 0 0 0 0 0 0 
 
 / * !   @ d e f g r o u p   s h a p e s   S t a n d a r d   c u r s o r   s h a p e s 
   *     @ b r i e f   S t a n d a r d   s y s t e m   c u r s o r   s h a p e s . 
   * 
   *     T h e s e   a r e   t h e   [ s t a n d a r d   c u r s o r   s h a p e s ] ( @ r e f   c u r s o r _ s t a n d a r d )   t h a t   c a n   b e 
   *     r e q u e s t e d   f r o m   t h e   p l a t f o r m   ( w i n d o w   s y s t e m ) . 
   * 
   *     @ i n g r o u p   i n p u t 
   *     @ {   * / 
 
 / * !   @ b r i e f   T h e   r e g u l a r   a r r o w   c u r s o r   s h a p e . 
   * 
   *     T h e   r e g u l a r   a r r o w   c u r s o r   s h a p e . 
   * / 
 # d e f i n e   G L F W _ A R R O W _ C U R S O R                       0 x 0 0 0 3 6 0 0 1 
 / * !   @ b r i e f   T h e   t e x t   i n p u t   I - b e a m   c u r s o r   s h a p e . 
   * 
   *     T h e   t e x t   i n p u t   I - b e a m   c u r s o r   s h a p e . 
   * / 
 # d e f i n e   G L F W _ I B E A M _ C U R S O R                       0 x 0 0 0 3 6 0 0 2 
 / * !   @ b r i e f   T h e   c r o s s h a i r   c u r s o r   s h a p e . 
   * 
   *     T h e   c r o s s h a i r   c u r s o r   s h a p e . 
   * / 
 # d e f i n e   G L F W _ C R O S S H A I R _ C U R S O R               0 x 0 0 0 3 6 0 0 3 
 / * !   @ b r i e f   T h e   p o i n t i n g   h a n d   c u r s o r   s h a p e . 
   * 
   *     T h e   p o i n t i n g   h a n d   c u r s o r   s h a p e . 
   * / 
 # d e f i n e   G L F W _ P O I N T I N G _ H A N D _ C U R S O R       0 x 0 0 0 3 6 0 0 4 
 / * !   @ b r i e f   T h e   h o r i z o n t a l   r e s i z e / m o v e   a r r o w   s h a p e . 
   * 
   *     T h e   h o r i z o n t a l   r e s i z e / m o v e   a r r o w   s h a p e .     T h i s   i s   u s u a l l y   a   h o r i z o n t a l 
   *     d o u b l e - h e a d e d   a r r o w . 
   * / 
 # d e f i n e   G L F W _ R E S I Z E _ E W _ C U R S O R               0 x 0 0 0 3 6 0 0 5 
 / * !   @ b r i e f   T h e   v e r t i c a l   r e s i z e / m o v e   a r r o w   s h a p e . 
   * 
   *     T h e   v e r t i c a l   r e s i z e / m o v e   s h a p e .     T h i s   i s   u s u a l l y   a   v e r t i c a l   d o u b l e - h e a d e d 
   *     a r r o w . 
   * / 
 # d e f i n e   G L F W _ R E S I Z E _ N S _ C U R S O R               0 x 0 0 0 3 6 0 0 6 
 / * !   @ b r i e f   T h e   t o p - l e f t   t o   b o t t o m - r i g h t   d i a g o n a l   r e s i z e / m o v e   a r r o w   s h a p e . 
   * 
   *     T h e   t o p - l e f t   t o   b o t t o m - r i g h t   d i a g o n a l   r e s i z e / m o v e   s h a p e .     T h i s   i s   u s u a l l y 
   *     a   d i a g o n a l   d o u b l e - h e a d e d   a r r o w . 
   * 
   *     @ n o t e   @ m a c o s   T h i s   s h a p e   i s   p r o v i d e d   b y   a   p r i v a t e   s y s t e m   A P I   a n d   m a y   f a i l 
   *     w i t h   @ r e f   G L F W _ C U R S O R _ U N A V A I L A B L E   i n   t h e   f u t u r e . 
   * 
   *     @ n o t e   @ x 1 1   T h i s   s h a p e   i s   p r o v i d e d   b y   a   n e w e r   s t a n d a r d   n o t   s u p p o r t e d   b y   a l l 
   *     c u r s o r   t h e m e s . 
   * 
   *     @ n o t e   @ w a y l a n d   T h i s   s h a p e   i s   p r o v i d e d   b y   a   n e w e r   s t a n d a r d   n o t   s u p p o r t e d   b y 
   *     a l l   c u r s o r   t h e m e s . 
   * / 
 # d e f i n e   G L F W _ R E S I Z E _ N W S E _ C U R S O R           0 x 0 0 0 3 6 0 0 7 
 / * !   @ b r i e f   T h e   t o p - r i g h t   t o   b o t t o m - l e f t   d i a g o n a l   r e s i z e / m o v e   a r r o w   s h a p e . 
   * 
   *     T h e   t o p - r i g h t   t o   b o t t o m - l e f t   d i a g o n a l   r e s i z e / m o v e   s h a p e .     T h i s   i s   u s u a l l y 
   *     a   d i a g o n a l   d o u b l e - h e a d e d   a r r o w . 
   * 
   *     @ n o t e   @ m a c o s   T h i s   s h a p e   i s   p r o v i d e d   b y   a   p r i v a t e   s y s t e m   A P I   a n d   m a y   f a i l 
   *     w i t h   @ r e f   G L F W _ C U R S O R _ U N A V A I L A B L E   i n   t h e   f u t u r e . 
   * 
   *     @ n o t e   @ x 1 1   T h i s   s h a p e   i s   p r o v i d e d   b y   a   n e w e r   s t a n d a r d   n o t   s u p p o r t e d   b y   a l l 
   *     c u r s o r   t h e m e s . 
   * 
   *     @ n o t e   @ w a y l a n d   T h i s   s h a p e   i s   p r o v i d e d   b y   a   n e w e r   s t a n d a r d   n o t   s u p p o r t e d   b y 
   *     a l l   c u r s o r   t h e m e s . 
   * / 
 # d e f i n e   G L F W _ R E S I Z E _ N E S W _ C U R S O R           0 x 0 0 0 3 6 0 0 8 
 / * !   @ b r i e f   T h e   o m n i - d i r e c t i o n a l   r e s i z e / m o v e   c u r s o r   s h a p e . 
   * 
   *     T h e   o m n i - d i r e c t i o n a l   r e s i z e   c u r s o r / m o v e   s h a p e .     T h i s   i s   u s u a l l y   e i t h e r 
   *     a   c o m b i n e d   h o r i z o n t a l   a n d   v e r t i c a l   d o u b l e - h e a d e d   a r r o w   o r   a   g r a b b i n g   h a n d . 
   * / 
 # d e f i n e   G L F W _ R E S I Z E _ A L L _ C U R S O R             0 x 0 0 0 3 6 0 0 9 
 / * !   @ b r i e f   T h e   o p e r a t i o n - n o t - a l l o w e d   s h a p e . 
   * 
   *     T h e   o p e r a t i o n - n o t - a l l o w e d   s h a p e .     T h i s   i s   u s u a l l y   a   c i r c l e   w i t h   a   d i a g o n a l 
   *     l i n e   t h r o u g h   i t . 
   * 
   *     @ n o t e   @ x 1 1   T h i s   s h a p e   i s   p r o v i d e d   b y   a   n e w e r   s t a n d a r d   n o t   s u p p o r t e d   b y   a l l 
   *     c u r s o r   t h e m e s . 
   * 
   *     @ n o t e   @ w a y l a n d   T h i s   s h a p e   i s   p r o v i d e d   b y   a   n e w e r   s t a n d a r d   n o t   s u p p o r t e d   b y 
   *     a l l   c u r s o r   t h e m e s . 
   * / 
 # d e f i n e   G L F W _ N O T _ A L L O W E D _ C U R S O R           0 x 0 0 0 3 6 0 0 A 
 / * !   @ b r i e f   L e g a c y   n a m e   f o r   c o m p a t i b i l i t y . 
   * 
   *     T h i s   i s   a n   a l i a s   f o r   c o m p a t i b i l i t y   w i t h   e a r l i e r   v e r s i o n s . 
   * / 
 # d e f i n e   G L F W _ H R E S I Z E _ C U R S O R                   G L F W _ R E S I Z E _ E W _ C U R S O R 
 / * !   @ b r i e f   L e g a c y   n a m e   f o r   c o m p a t i b i l i t y . 
   * 
   *     T h i s   i s   a n   a l i a s   f o r   c o m p a t i b i l i t y   w i t h   e a r l i e r   v e r s i o n s . 
   * / 
 # d e f i n e   G L F W _ V R E S I Z E _ C U R S O R                   G L F W _ R E S I Z E _ N S _ C U R S O R 
 / * !   @ b r i e f   L e g a c y   n a m e   f o r   c o m p a t i b i l i t y . 
   * 
   *     T h i s   i s   a n   a l i a s   f o r   c o m p a t i b i l i t y   w i t h   e a r l i e r   v e r s i o n s . 
   * / 
 # d e f i n e   G L F W _ H A N D _ C U R S O R                         G L F W _ P O I N T I N G _ H A N D _ C U R S O R 
 / * !   @ }   * / 
 
 # d e f i n e   G L F W _ C O N N E C T E D                             0 x 0 0 0 4 0 0 0 1 
 # d e f i n e   G L F W _ D I S C O N N E C T E D                       0 x 0 0 0 4 0 0 0 2 
 
 / * !   @ a d d t o g r o u p   i n i t 
   *     @ {   * / 
 / * !   @ b r i e f   J o y s t i c k   h a t   b u t t o n s   i n i t   h i n t . 
   * 
   *     J o y s t i c k   h a t   b u t t o n s   [ i n i t   h i n t ] ( @ r e f   G L F W _ J O Y S T I C K _ H A T _ B U T T O N S ) . 
   * / 
 # d e f i n e   G L F W _ J O Y S T I C K _ H A T _ B U T T O N S       0 x 0 0 0 5 0 0 0 1 
 / * !   @ b r i e f   A N G L E   r e n d e r i n g   b a c k e n d   i n i t   h i n t . 
   * 
   *     A N G L E   r e n d e r i n g   b a c k e n d   [ i n i t   h i n t ] ( @ r e f   G L F W _ A N G L E _ P L A T F O R M _ T Y P E _ h i n t ) . 
   * / 
 # d e f i n e   G L F W _ A N G L E _ P L A T F O R M _ T Y P E         0 x 0 0 0 5 0 0 0 2 
 / * !   @ b r i e f   P l a t f o r m   s e l e c t i o n   i n i t   h i n t . 
   * 
   *     P l a t f o r m   s e l e c t i o n   [ i n i t   h i n t ] ( @ r e f   G L F W _ P L A T F O R M ) . 
   * / 
 # d e f i n e   G L F W _ P L A T F O R M                               0 x 0 0 0 5 0 0 0 3 
 / * !   @ b r i e f   m a c O S   s p e c i f i c   i n i t   h i n t . 
   * 
   *     m a c O S   s p e c i f i c   [ i n i t   h i n t ] ( @ r e f   G L F W _ C O C O A _ C H D I R _ R E S O U R C E S _ h i n t ) . 
   * / 
 # d e f i n e   G L F W _ C O C O A _ C H D I R _ R E S O U R C E S     0 x 0 0 0 5 1 0 0 1 
 / * !   @ b r i e f   m a c O S   s p e c i f i c   i n i t   h i n t . 
   * 
   *     m a c O S   s p e c i f i c   [ i n i t   h i n t ] ( @ r e f   G L F W _ C O C O A _ M E N U B A R _ h i n t ) . 
   * / 
 # d e f i n e   G L F W _ C O C O A _ M E N U B A R                     0 x 0 0 0 5 1 0 0 2 
 / * !   @ b r i e f   X 1 1   s p e c i f i c   i n i t   h i n t . 
   * 
   *     X 1 1   s p e c i f i c   [ i n i t   h i n t ] ( @ r e f   G L F W _ X 1 1 _ X C B _ V U L K A N _ S U R F A C E _ h i n t ) . 
   * / 
 # d e f i n e   G L F W _ X 1 1 _ X C B _ V U L K A N _ S U R F A C E   0 x 0 0 0 5 2 0 0 1 
 / * !   @ b r i e f   W a y l a n d   s p e c i f i c   i n i t   h i n t . 
   * 
   *     W a y l a n d   s p e c i f i c   [ i n i t   h i n t ] ( @ r e f   G L F W _ W A Y L A N D _ L I B D E C O R _ h i n t ) . 
   * / 
 # d e f i n e   G L F W _ W A Y L A N D _ L I B D E C O R               0 x 0 0 0 5 3 0 0 1 
 / * !   @ }   * / 
 
 / * !   @ a d d t o g r o u p   i n i t 
   *     @ {   * / 
 / * !   @ b r i e f   H i n t   v a l u e   t h a t   e n a b l e s   a u t o m a t i c   p l a t f o r m   s e l e c t i o n . 
   * 
   *     H i n t   v a l u e   f o r   @ r e f   G L F W _ P L A T F O R M   t h a t   e n a b l e s   a u t o m a t i c   p l a t f o r m   s e l e c t i o n . 
   * / 
 # d e f i n e   G L F W _ A N Y _ P L A T F O R M                       0 x 0 0 0 6 0 0 0 0 
 # d e f i n e   G L F W _ P L A T F O R M _ W I N 3 2                   0 x 0 0 0 6 0 0 0 1 
 # d e f i n e   G L F W _ P L A T F O R M _ C O C O A                   0 x 0 0 0 6 0 0 0 2 
 # d e f i n e   G L F W _ P L A T F O R M _ W A Y L A N D               0 x 0 0 0 6 0 0 0 3 
 # d e f i n e   G L F W _ P L A T F O R M _ X 1 1                       0 x 0 0 0 6 0 0 0 4 
 # d e f i n e   G L F W _ P L A T F O R M _ N U L L                     0 x 0 0 0 6 0 0 0 5 
 / * !   @ }   * / 
 
 # d e f i n e   G L F W _ D O N T _ C A R E                             - 1 
 
 
 / * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * 
   *   G L F W   A P I   t y p e s 
   * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * / 
 
 / * !   @ b r i e f   C l i e n t   A P I   f u n c t i o n   p o i n t e r   t y p e . 
   * 
   *     G e n e r i c   f u n c t i o n   p o i n t e r   u s e d   f o r   r e t u r n i n g   c l i e n t   A P I   f u n c t i o n   p o i n t e r s 
   *     w i t h o u t   f o r c i n g   a   c a s t   f r o m   a   r e g u l a r   p o i n t e r . 
   * 
   *     @ s a   @ r e f   c o n t e x t _ g l e x t 
   *     @ s a   @ r e f   g l f w G e t P r o c A d d r e s s 
   * 
   *     @ s i n c e   A d d e d   i n   v e r s i o n   3 . 0 . 
   * 
   *     @ i n g r o u p   c o n t e x t 
   * / 
 t y p e d e f   v o i d   ( * G L F W g l p r o c ) ( v o i d ) ; 
 
 / * !   @ b r i e f   V u l k a n   A P I   f u n c t i o n   p o i n t e r   t y p e . 
   * 
   *     G e n e r i c   f u n c t i o n   p o i n t e r   u s e d   f o r   r e t u r n i n g   V u l k a n   A P I   f u n c t i o n   p o i n t e r s 
   *     w i t h o u t   f o r c i n g   a   c a s t   f r o m   a   r e g u l a r   p o i n t e r . 
   * 
   *     @ s a   @ r e f   v u l k a n _ p r o c 
   *     @ s a   @ r e f   g l f w G e t I n s t a n c e P r o c A d d r e s s 
   * 
   *     @ s i n c e   A d d e d   i n   v e r s i o n   3 . 2 . 
   * 
   *     @ i n g r o u p   v u l k a n 
   * / 
 t y p e d e f   v o i d   ( * G L F W v k p r o c ) ( v o i d ) ; 
 
 / * !   @ b r i e f   O p a q u e   m o n i t o r   o b j e c t . 
   * 
   *     O p a q u e   m o n i t o r   o b j e c t . 
   * 
   *     @ s e e   @ r e f   m o n i t o r _ o b j e c t 
   * 
   *     @ s i n c e   A d d e d   i n   v e r s i o n   3 . 0 . 
   * 
   *     @ i n g r o u p   m o n i t o r 
   * / 
 t y p e d e f   s t r u c t   G L F W m o n i t o r   G L F W m o n i t o r ; 
 
 / * !   @ b r i e f   O p a q u e   w i n d o w   o b j e c t . 
   * 
   *     O p a q u e   w i n d o w   o b j e c t . 
   * 
   *     @ s e e   @ r e f   w i n d o w _ o b j e c t 
   * 
   *     @ s i n c e   A d d e d   i n   v e r s i o n   3 . 0 . 
   * 
   *     @ i n g r o u p   w i n d o w 
   * / 
 t y p e d e f   s t r u c t   G L F W w i n d o w   G L F W w i n d o w ; 
 
 / * !   @ b r i e f   O p a q u e   c u r s o r   o b j e c t . 
   * 
   *     O p a q u e   c u r s o r   o b j e c t . 
   * 
   *     @ s e e   @ r e f   c u r s o r _ o b j e c t 
   * 
   *     @ s i n c e   A d d e d   i n   v e r s i o n   3 . 1 . 
   * 
   *     @ i n g r o u p   i n p u t 
   * / 
 t y p e d e f   s t r u c t   G L F W c u r s o r   G L F W c u r s o r ; 
 
 / * !   @ b r i e f   T h e   f u n c t i o n   p o i n t e r   t y p e   f o r   m e m o r y   a l l o c a t i o n   c a l l b a c k s . 
   * 
   *     T h i s   i s   t h e   f u n c t i o n   p o i n t e r   t y p e   f o r   m e m o r y   a l l o c a t i o n   c a l l b a c k s .     A   m e m o r y 
   *     a l l o c a t i o n   c a l l b a c k   f u n c t i o n   h a s   t h e   f o l l o w i n g   s i g n a t u r e : 
   *     @ c o d e 
   *     v o i d *   f u n c t i o n _ n a m e ( s i z e _ t   s i z e ,   v o i d *   u s e r ) 
   *     @ e n d c o d e 
   * 
   *     T h i s   f u n c t i o n   m u s t   r e t u r n   e i t h e r   a   m e m o r y   b l o c k   a t   l e a s t   ` s i z e `   b y t e s   l o n g , 
   *     o r   ` N U L L `   i f   a l l o c a t i o n   f a i l e d .     N o t e   t h a t   n o t   a l l   p a r t s   o f   G L F W   h a n d l e   a l l o c a t i o n 
   *     f a i l u r e s   g r a c e f u l l y   y e t . 
   * 
   *     T h i s   f u n c t i o n   m a y   b e   c a l l e d   d u r i n g   @ r e f   g l f w I n i t   b u t   b e f o r e   t h e   l i b r a r y   i s 
   *     f l a g g e d   a s   i n i t i a l i z e d ,   a s   w e l l   a s   d u r i n g   @ r e f   g l f w T e r m i n a t e   a f t e r   t h e 
   *     l i b r a r y   i s   n o   l o n g e r   f l a g g e d   a s   i n i t i a l i z e d . 
   * 
   *     A n y   m e m o r y   a l l o c a t e d   b y   t h i s   f u n c t i o n   w i l l   b e   d e a l l o c a t e d   d u r i n g   l i b r a r y 
   *     t e r m i n a t i o n   o r   e a r l i e r . 
   * 
   *     T h e   s i z e   w i l l   a l w a y s   b e   g r e a t e r   t h a n   z e r o .     A l l o c a t i o n s   o f   s i z e   z e r o   a r e   f i l t e r e d   o u t 
   *     b e f o r e   r e a c h i n g   t h e   c u s t o m   a l l o c a t o r . 
   * 
   *     @ p a r a m [ i n ]   s i z e   T h e   m i n i m u m   s i z e ,   i n   b y t e s ,   o f   t h e   m e m o r y   b l o c k . 
   *     @ p a r a m [ i n ]   u s e r   T h e   u s e r - d e f i n e d   p o i n t e r   f r o m   t h e   a l l o c a t o r . 
   *     @ r e t u r n   T h e   a d d r e s s   o f   t h e   n e w l y   a l l o c a t e d   m e m o r y   b l o c k ,   o r   ` N U L L `   i f   a n 
   *     e r r o r   o c c u r r e d . 
   * 
   *     @ p o i n t e r _ l i f e t i m e   T h e   r e t u r n e d   m e m o r y   b l o c k   m u s t   b e   v a l i d   a t   l e a s t   u n t i l   i t 
   *     i s   d e a l l o c a t e d . 
   * 
   *     @ r e e n t r a n c y   T h i s   f u n c t i o n   s h o u l d   n o t   c a l l   a n y   G L F W   f u n c t i o n . 
   * 
   *     @ t h r e a d _ s a f e t y   T h i s   f u n c t i o n   m a y   b e   c a l l e d   f r o m   a n y   t h r e a d   t h a t   c a l l s   G L F W   f u n c t i o n s . 
   * 
   *     @ s a   @ r e f   i n i t _ a l l o c a t o r 
   *     @ s a   @ r e f   G L F W a l l o c a t o r 
   * 
   *     @ s i n c e   A d d e d   i n   v e r s i o n   3 . 4 . 
   * 
   *     @ i n g r o u p   i n i t 
   * / 
 t y p e d e f   v o i d *   ( *   G L F W a l l o c a t e f u n ) ( s i z e _ t   s i z e ,   v o i d *   u s e r ) ; 
 
 / * !   @ b r i e f   T h e   f u n c t i o n   p o i n t e r   t y p e   f o r   m e m o r y   r e a l l o c a t i o n   c a l l b a c k s . 
   * 
   *     T h i s   i s   t h e   f u n c t i o n   p o i n t e r   t y p e   f o r   m e m o r y   r e a l l o c a t i o n   c a l l b a c k s . 
   *     A   m e m o r y   r e a l l o c a t i o n   c a l l b a c k   f u n c t i o n   h a s   t h e   f o l l o w i n g   s i g n a t u r e : 
   *     @ c o d e 
   *     v o i d *   f u n c t i o n _ n a m e ( v o i d *   b l o c k ,   s i z e _ t   s i z e ,   v o i d *   u s e r ) 
   *     @ e n d c o d e 
   * 
   *     T h i s   f u n c t i o n   m u s t   r e t u r n   a   m e m o r y   b l o c k   a t   l e a s t   ` s i z e `   b y t e s   l o n g ,   o r 
   *     ` N U L L `   i f   a l l o c a t i o n   f a i l e d .     N o t e   t h a t   n o t   a l l   p a r t s   o f   G L F W   h a n d l e   a l l o c a t i o n 
   *     f a i l u r e s   g r a c e f u l l y   y e t . 
   * 
   *     T h i s   f u n c t i o n   m a y   b e   c a l l e d   d u r i n g   @ r e f   g l f w I n i t   b u t   b e f o r e   t h e   l i b r a r y   i s 
   *     f l a g g e d   a s   i n i t i a l i z e d ,   a s   w e l l   a s   d u r i n g   @ r e f   g l f w T e r m i n a t e   a f t e r   t h e 
   *     l i b r a r y   i s   n o   l o n g e r   f l a g g e d   a s   i n i t i a l i z e d . 
   * 
   *     A n y   m e m o r y   a l l o c a t e d   b y   t h i s   f u n c t i o n   w i l l   b e   d e a l l o c a t e d   d u r i n g   l i b r a r y 
   *     t e r m i n a t i o n   o r   e a r l i e r . 
   * 
   *     T h e   b l o c k   a d d r e s s   w i l l   n e v e r   b e   ` N U L L `   a n d   t h e   s i z e   w i l l   a l w a y s   b e   g r e a t e r   t h a n   z e r o . 
   *     R e a l l o c a t i o n s   o f   a   b l o c k   t o   s i z e   z e r o   a r e   c o n v e r t e d   i n t o   d e a l l o c a t i o n s .     R e a l l o c a t i o n s 
   *     o f   ` N U L L `   t o   a   n o n - z e r o   s i z e   a r e   c o n v e r t e d   i n t o   r e g u l a r   a l l o c a t i o n s . 
   * 
   *     @ p a r a m [ i n ]   b l o c k   T h e   a d d r e s s   o f   t h e   m e m o r y   b l o c k   t o   r e a l l o c a t e . 
   *     @ p a r a m [ i n ]   s i z e   T h e   n e w   m i n i m u m   s i z e ,   i n   b y t e s ,   o f   t h e   m e m o r y   b l o c k . 
   *     @ p a r a m [ i n ]   u s e r   T h e   u s e r - d e f i n e d   p o i n t e r   f r o m   t h e   a l l o c a t o r . 
   *     @ r e t u r n   T h e   a d d r e s s   o f   t h e   n e w l y   a l l o c a t e d   o r   r e s i z e d   m e m o r y   b l o c k ,   o r 
   *     ` N U L L `   i f   a n   e r r o r   o c c u r r e d . 
   * 
   *     @ p o i n t e r _ l i f e t i m e   T h e   r e t u r n e d   m e m o r y   b l o c k   m u s t   b e   v a l i d   a t   l e a s t   u n t i l   i t 
   *     i s   d e a l l o c a t e d . 
   * 
   *     @ r e e n t r a n c y   T h i s   f u n c t i o n   s h o u l d   n o t   c a l l   a n y   G L F W   f u n c t i o n . 
   * 
   *     @ t h r e a d _ s a f e t y   T h i s   f u n c t i o n   m a y   b e   c a l l e d   f r o m   a n y   t h r e a d   t h a t   c a l l s   G L F W   f u n c t i o n s . 
   * 
   *     @ s a   @ r e f   i n i t _ a l l o c a t o r 
   *     @ s a   @ r e f   G L F W a l l o c a t o r 
   * 
   *     @ s i n c e   A d d e d   i n   v e r s i o n   3 . 4 . 
   * 
   *     @ i n g r o u p   i n i t 
   * / 
 t y p e d e f   v o i d *   ( *   G L F W r e a l l o c a t e f u n ) ( v o i d *   b l o c k ,   s i z e _ t   s i z e ,   v o i d *   u s e r ) ; 
 
 / * !   @ b r i e f   T h e   f u n c t i o n   p o i n t e r   t y p e   f o r   m e m o r y   d e a l l o c a t i o n   c a l l b a c k s . 
   * 
   *     T h i s   i s   t h e   f u n c t i o n   p o i n t e r   t y p e   f o r   m e m o r y   d e a l l o c a t i o n   c a l l b a c k s . 
   *     A   m e m o r y   d e a l l o c a t i o n   c a l l b a c k   f u n c t i o n   h a s   t h e   f o l l o w i n g   s i g n a t u r e : 
   *     @ c o d e 
   *     v o i d   f u n c t i o n _ n a m e ( v o i d *   b l o c k ,   v o i d *   u s e r ) 
   *     @ e n d c o d e 
   * 
   *     T h i s   f u n c t i o n   m a y   d e a l l o c a t e   t h e   s p e c i f i e d   m e m o r y   b l o c k .     T h i s   m e m o r y   b l o c k 
   *     w i l l   h a v e   b e e n   a l l o c a t e d   w i t h   t h e   s a m e   a l l o c a t o r . 
   * 
   *     T h i s   f u n c t i o n   m a y   b e   c a l l e d   d u r i n g   @ r e f   g l f w I n i t   b u t   b e f o r e   t h e   l i b r a r y   i s 
   *     f l a g g e d   a s   i n i t i a l i z e d ,   a s   w e l l   a s   d u r i n g   @ r e f   g l f w T e r m i n a t e   a f t e r   t h e 
   *     l i b r a r y   i s   n o   l o n g e r   f l a g g e d   a s   i n i t i a l i z e d . 
   * 
   *     T h e   b l o c k   a d d r e s s   w i l l   n e v e r   b e   ` N U L L ` .     D e a l l o c a t i o n s   o f   ` N U L L `   a r e   f i l t e r e d   o u t 
   *     b e f o r e   r e a c h i n g   t h e   c u s t o m   a l l o c a t o r . 
   * 
   *     @ p a r a m [ i n ]   b l o c k   T h e   a d d r e s s   o f   t h e   m e m o r y   b l o c k   t o   d e a l l o c a t e . 
   *     @ p a r a m [ i n ]   u s e r   T h e   u s e r - d e f i n e d   p o i n t e r   f r o m   t h e   a l l o c a t o r . 
   * 
   *     @ p o i n t e r _ l i f e t i m e   T h e   s p e c i f i e d   m e m o r y   b l o c k   w i l l   n o t   b e   a c c e s s e d   b y   G L F W 
   *     a f t e r   t h i s   f u n c t i o n   i s   c a l l e d . 
   * 
   *     @ r e e n t r a n c y   T h i s   f u n c t i o n   s h o u l d   n o t   c a l l   a n y   G L F W   f u n c t i o n . 
   * 
   *     @ t h r e a d _ s a f e t y   T h i s   f u n c t i o n   m a y   b e   c a l l e d   f r o m   a n y   t h r e a d   t h a t   c a l l s   G L F W   f u n c t i o n s . 
   * 
   *     @ s a   @ r e f   i n i t _ a l l o c a t o r 
   *     @ s a   @ r e f   G L F W a l l o c a t o r 
   * 
   *     @ s i n c e   A d d e d   i n   v e r s i o n   3 . 4 . 
   * 
   *     @ i n g r o u p   i n i t 
   * / 
 t y p e d e f   v o i d   ( *   G L F W d e a l l o c a t e f u n ) ( v o i d *   b l o c k ,   v o i d *   u s e r ) ; 
 
 / * !   @ b r i e f   T h e   f u n c t i o n   p o i n t e r   t y p e   f o r   e r r o r   c a l l b a c k s . 
   * 
   *     T h i s   i s   t h e   f u n c t i o n   p o i n t e r   t y p e   f o r   e r r o r   c a l l b a c k s .     A n   e r r o r   c a l l b a c k 
   *     f u n c t i o n   h a s   t h e   f o l l o w i n g   s i g n a t u r e : 
   *     @ c o d e 
   *     v o i d   c a l l b a c k _ n a m e ( i n t   e r r o r _ c o d e ,   c o n s t   c h a r *   d e s c r i p t i o n ) 
   *     @ e n d c o d e 
   * 
   *     @ p a r a m [ i n ]   e r r o r _ c o d e   A n   [ e r r o r   c o d e ] ( @ r e f   e r r o r s ) .     F u t u r e   r e l e a s e s   m a y   a d d 
   *     m o r e   e r r o r   c o d e s . 
   *     @ p a r a m [ i n ]   d e s c r i p t i o n   A   U T F - 8   e n c o d e d   s t r i n g   d e s c r i b i n g   t h e   e r r o r . 
   * 
   *     @ p o i n t e r _ l i f e t i m e   T h e   e r r o r   d e s c r i p t i o n   s t r i n g   i s   v a l i d   u n t i l   t h e   c a l l b a c k 
   *     f u n c t i o n   r e t u r n s . 
   * 
   *     @ s a   @ r e f   e r r o r _ h a n d l i n g 
   *     @ s a   @ r e f   g l f w S e t E r r o r C a l l b a c k 
   * 
   *     @ s i n c e   A d d e d   i n   v e r s i o n   3 . 0 . 
   * 
   *     @ i n g r o u p   i n i t 
   * / 
 t y p e d e f   v o i d   ( *   G L F W e r r o r f u n ) ( i n t   e r r o r _ c o d e ,   c o n s t   c h a r *   d e s c r i p t i o n ) ; 
 
 / * !   @ b r i e f   T h e   f u n c t i o n   p o i n t e r   t y p e   f o r   w i n d o w   p o s i t i o n   c a l l b a c k s . 
   * 
   *     T h i s   i s   t h e   f u n c t i o n   p o i n t e r   t y p e   f o r   w i n d o w   p o s i t i o n   c a l l b a c k s .     A   w i n d o w 
   *     p o s i t i o n   c a l l b a c k   f u n c t i o n   h a s   t h e   f o l l o w i n g   s i g n a t u r e : 
   *     @ c o d e 
   *     v o i d   c a l l b a c k _ n a m e ( G L F W w i n d o w *   w i n d o w ,   i n t   x p o s ,   i n t   y p o s ) 
   *     @ e n d c o d e 
   * 
   *     @ p a r a m [ i n ]   w i n d o w   T h e   w i n d o w   t h a t   w a s   m o v e d . 
   *     @ p a r a m [ i n ]   x p o s   T h e   n e w   x - c o o r d i n a t e ,   i n   s c r e e n   c o o r d i n a t e s ,   o f   t h e 
   *     u p p e r - l e f t   c o r n e r   o f   t h e   c o n t e n t   a r e a   o f   t h e   w i n d o w . 
   *     @ p a r a m [ i n ]   y p o s   T h e   n e w   y - c o o r d i n a t e ,   i n   s c r e e n   c o o r d i n a t e s ,   o f   t h e 
   *     u p p e r - l e f t   c o r n e r   o f   t h e   c o n t e n t   a r e a   o f   t h e   w i n d o w . 
   * 
   *     @ s a   @ r e f   w i n d o w _ p o s 
   *     @ s a   @ r e f   g l f w S e t W i n d o w P o s C a l l b a c k 
   * 
   *     @ s i n c e   A d d e d   i n   v e r s i o n   3 . 0 . 
   * 
   *     @ i n g r o u p   w i n d o w 
   * / 
 t y p e d e f   v o i d   ( *   G L F W w i n d o w p o s f u n ) ( G L F W w i n d o w *   w i n d o w ,   i n t   x p o s ,   i n t   y p o s ) ; 
 
 / * !   @ b r i e f   T h e   f u n c t i o n   p o i n t e r   t y p e   f o r   w i n d o w   s i z e   c a l l b a c k s . 
   * 
   *     T h i s   i s   t h e   f u n c t i o n   p o i n t e r   t y p e   f o r   w i n d o w   s i z e   c a l l b a c k s .     A   w i n d o w   s i z e 
   *     c a l l b a c k   f u n c t i o n   h a s   t h e   f o l l o w i n g   s i g n a t u r e : 
   *     @ c o d e 
   *     v o i d   c a l l b a c k _ n a m e ( G L F W w i n d o w *   w i n d o w ,   i n t   w i d t h ,   i n t   h e i g h t ) 
   *     @ e n d c o d e 
   * 
   *     @ p a r a m [ i n ]   w i n d o w   T h e   w i n d o w   t h a t   w a s   r e s i z e d . 
   *     @ p a r a m [ i n ]   w i d t h   T h e   n e w   w i d t h ,   i n   s c r e e n   c o o r d i n a t e s ,   o f   t h e   w i n d o w . 
   *     @ p a r a m [ i n ]   h e i g h t   T h e   n e w   h e i g h t ,   i n   s c r e e n   c o o r d i n a t e s ,   o f   t h e   w i n d o w . 
   * 
   *     @ s a   @ r e f   w i n d o w _ s i z e 
   *     @ s a   @ r e f   g l f w S e t W i n d o w S i z e C a l l b a c k 
   * 
   *     @ s i n c e   A d d e d   i n   v e r s i o n   1 . 0 . 
   *     @ g l f w 3   A d d e d   w i n d o w   h a n d l e   p a r a m e t e r . 
   * 
   *     @ i n g r o u p   w i n d o w 
   * / 
 t y p e d e f   v o i d   ( *   G L F W w i n d o w s i z e f u n ) ( G L F W w i n d o w *   w i n d o w ,   i n t   w i d t h ,   i n t   h e i g h t ) ; 
 
 / * !   @ b r i e f   T h e   f u n c t i o n   p o i n t e r   t y p e   f o r   w i n d o w   c l o s e   c a l l b a c k s . 
   * 
   *     T h i s   i s   t h e   f u n c t i o n   p o i n t e r   t y p e   f o r   w i n d o w   c l o s e   c a l l b a c k s .     A   w i n d o w 
   *     c l o s e   c a l l b a c k   f u n c t i o n   h a s   t h e   f o l l o w i n g   s i g n a t u r e : 
   *     @ c o d e 
   *     v o i d   f u n c t i o n _ n a m e ( G L F W w i n d o w *   w i n d o w ) 
   *     @ e n d c o d e 
   * 
   *     @ p a r a m [ i n ]   w i n d o w   T h e   w i n d o w   t h a t   t h e   u s e r   a t t e m p t e d   t o   c l o s e . 
   * 
   *     @ s a   @ r e f   w i n d o w _ c l o s e 
   *     @ s a   @ r e f   g l f w S e t W i n d o w C l o s e C a l l b a c k 
   * 
   *     @ s i n c e   A d d e d   i n   v e r s i o n   2 . 5 . 
   *     @ g l f w 3   A d d e d   w i n d o w   h a n d l e   p a r a m e t e r . 
   * 
   *     @ i n g r o u p   w i n d o w 
   * / 
 t y p e d e f   v o i d   ( *   G L F W w i n d o w c l o s e f u n ) ( G L F W w i n d o w *   w i n d o w ) ; 
 
 / * !   @ b r i e f   T h e   f u n c t i o n   p o i n t e r   t y p e   f o r   w i n d o w   c o n t e n t   r e f r e s h   c a l l b a c k s . 
   * 
   *     T h i s   i s   t h e   f u n c t i o n   p o i n t e r   t y p e   f o r   w i n d o w   c o n t e n t   r e f r e s h   c a l l b a c k s . 
   *     A   w i n d o w   c o n t e n t   r e f r e s h   c a l l b a c k   f u n c t i o n   h a s   t h e   f o l l o w i n g   s i g n a t u r e : 
   *     @ c o d e 
   *     v o i d   f u n c t i o n _ n a m e ( G L F W w i n d o w *   w i n d o w ) ; 
   *     @ e n d c o d e 
   * 
   *     @ p a r a m [ i n ]   w i n d o w   T h e   w i n d o w   w h o s e   c o n t e n t   n e e d s   t o   b e   r e f r e s h e d . 
   * 
   *     @ s a   @ r e f   w i n d o w _ r e f r e s h 
   *     @ s a   @ r e f   g l f w S e t W i n d o w R e f r e s h C a l l b a c k 
   * 
   *     @ s i n c e   A d d e d   i n   v e r s i o n   2 . 5 . 
   *     @ g l f w 3   A d d e d   w i n d o w   h a n d l e   p a r a m e t e r . 
   * 
   *     @ i n g r o u p   w i n d o w 
   * / 
 t y p e d e f   v o i d   ( *   G L F W w i n d o w r e f r e s h f u n ) ( G L F W w i n d o w *   w i n d o w ) ; 
 
 / * !   @ b r i e f   T h e   f u n c t i o n   p o i n t e r   t y p e   f o r   w i n d o w   f o c u s   c a l l b a c k s . 
   * 
   *     T h i s   i s   t h e   f u n c t i o n   p o i n t e r   t y p e   f o r   w i n d o w   f o c u s   c a l l b a c k s .     A   w i n d o w 
   *     f o c u s   c a l l b a c k   f u n c t i o n   h a s   t h e   f o l l o w i n g   s i g n a t u r e : 
   *     @ c o d e 
   *     v o i d   f u n c t i o n _ n a m e ( G L F W w i n d o w *   w i n d o w ,   i n t   f o c u s e d ) 
   *     @ e n d c o d e 
   * 
   *     @ p a r a m [ i n ]   w i n d o w   T h e   w i n d o w   t h a t   g a i n e d   o r   l o s t   i n p u t   f o c u s . 
   *     @ p a r a m [ i n ]   f o c u s e d   ` G L F W _ T R U E `   i f   t h e   w i n d o w   w a s   g i v e n   i n p u t   f o c u s ,   o r 
   *     ` G L F W _ F A L S E `   i f   i t   l o s t   i t . 
   * 
   *     @ s a   @ r e f   w i n d o w _ f o c u s 
   *     @ s a   @ r e f   g l f w S e t W i n d o w F o c u s C a l l b a c k 
   * 
   *     @ s i n c e   A d d e d   i n   v e r s i o n   3 . 0 . 
   * 
   *     @ i n g r o u p   w i n d o w 
   * / 
 t y p e d e f   v o i d   ( *   G L F W w i n d o w f o c u s f u n ) ( G L F W w i n d o w *   w i n d o w ,   i n t   f o c u s e d ) ; 
 
 / * !   @ b r i e f   T h e   f u n c t i o n   p o i n t e r   t y p e   f o r   w i n d o w   i c o n i f y   c a l l b a c k s . 
   * 
   *     T h i s   i s   t h e   f u n c t i o n   p o i n t e r   t y p e   f o r   w i n d o w   i c o n i f y   c a l l b a c k s .     A   w i n d o w 
   *     i c o n i f y   c a l l b a c k   f u n c t i o n   h a s   t h e   f o l l o w i n g   s i g n a t u r e : 
   *     @ c o d e 
   *     v o i d   f u n c t i o n _ n a m e ( G L F W w i n d o w *   w i n d o w ,   i n t   i c o n i f i e d ) 
   *     @ e n d c o d e 
   * 
   *     @ p a r a m [ i n ]   w i n d o w   T h e   w i n d o w   t h a t   w a s   i c o n i f i e d   o r   r e s t o r e d . 
   *     @ p a r a m [ i n ]   i c o n i f i e d   ` G L F W _ T R U E `   i f   t h e   w i n d o w   w a s   i c o n i f i e d ,   o r 
   *     ` G L F W _ F A L S E `   i f   i t   w a s   r e s t o r e d . 
   * 
   *     @ s a   @ r e f   w i n d o w _ i c o n i f y 
   *     @ s a   @ r e f   g l f w S e t W i n d o w I c o n i f y C a l l b a c k 
   * 
   *     @ s i n c e   A d d e d   i n   v e r s i o n   3 . 0 . 
   * 
   *     @ i n g r o u p   w i n d o w 
   * / 
 t y p e d e f   v o i d   ( *   G L F W w i n d o w i c o n i f y f u n ) ( G L F W w i n d o w *   w i n d o w ,   i n t   i c o n i f i e d ) ; 
 
 / * !   @ b r i e f   T h e   f u n c t i o n   p o i n t e r   t y p e   f o r   w i n d o w   m a x i m i z e   c a l l b a c k s . 
   * 
   *     T h i s   i s   t h e   f u n c t i o n   p o i n t e r   t y p e   f o r   w i n d o w   m a x i m i z e   c a l l b a c k s .     A   w i n d o w 
   *     m a x i m i z e   c a l l b a c k   f u n c t i o n   h a s   t h e   f o l l o w i n g   s i g n a t u r e : 
   *     @ c o d e 
   *     v o i d   f u n c t i o n _ n a m e ( G L F W w i n d o w *   w i n d o w ,   i n t   m a x i m i z e d ) 
   *     @ e n d c o d e 
   * 
   *     @ p a r a m [ i n ]   w i n d o w   T h e   w i n d o w   t h a t   w a s   m a x i m i z e d   o r   r e s t o r e d . 
   *     @ p a r a m [ i n ]   m a x i m i z e d   ` G L F W _ T R U E `   i f   t h e   w i n d o w   w a s   m a x i m i z e d ,   o r 
   *     ` G L F W _ F A L S E `   i f   i t   w a s   r e s t o r e d . 
   * 
   *     @ s a   @ r e f   w i n d o w _ m a x i m i z e 
   *     @ s a   g l f w S e t W i n d o w M a x i m i z e C a l l b a c k 
   * 
   *     @ s i n c e   A d d e d   i n   v e r s i o n   3 . 3 . 
   * 
   *     @ i n g r o u p   w i n d o w 
   * / 
 t y p e d e f   v o i d   ( *   G L F W w i n d o w m a x i m i z e f u n ) ( G L F W w i n d o w *   w i n d o w ,   i n t   m a x i m i z e d ) ; 
 
 / * !   @ b r i e f   T h e   f u n c t i o n   p o i n t e r   t y p e   f o r   f r a m e b u f f e r   s i z e   c a l l b a c k s . 
   * 
   *     T h i s   i s   t h e   f u n c t i o n   p o i n t e r   t y p e   f o r   f r a m e b u f f e r   s i z e   c a l l b a c k s . 
   *     A   f r a m e b u f f e r   s i z e   c a l l b a c k   f u n c t i o n   h a s   t h e   f o l l o w i n g   s i g n a t u r e : 
   *     @ c o d e 
   *     v o i d   f u n c t i o n _ n a m e ( G L F W w i n d o w *   w i n d o w ,   i n t   w i d t h ,   i n t   h e i g h t ) 
   *     @ e n d c o d e 
   * 
   *     @ p a r a m [ i n ]   w i n d o w   T h e   w i n d o w   w h o s e   f r a m e b u f f e r   w a s   r e s i z e d . 
   *     @ p a r a m [ i n ]   w i d t h   T h e   n e w   w i d t h ,   i n   p i x e l s ,   o f   t h e   f r a m e b u f f e r . 
   *     @ p a r a m [ i n ]   h e i g h t   T h e   n e w   h e i g h t ,   i n   p i x e l s ,   o f   t h e   f r a m e b u f f e r . 
   * 
   *     @ s a   @ r e f   w i n d o w _ f b s i z e 
   *     @ s a   @ r e f   g l f w S e t F r a m e b u f f e r S i z e C a l l b a c k 
   * 
   *     @ s i n c e   A d d e d   i n   v e r s i o n   3 . 0 . 
   * 
   *     @ i n g r o u p   w i n d o w 
   * / 
 t y p e d e f   v o i d   ( *   G L F W f r a m e b u f f e r s i z e f u n ) ( G L F W w i n d o w *   w i n d o w ,   i n t   w i d t h ,   i n t   h e i g h t ) ; 
 
 / * !   @ b r i e f   T h e   f u n c t i o n   p o i n t e r   t y p e   f o r   w i n d o w   c o n t e n t   s c a l e   c a l l b a c k s . 
   * 
   *     T h i s   i s   t h e   f u n c t i o n   p o i n t e r   t y p e   f o r   w i n d o w   c o n t e n t   s c a l e   c a l l b a c k s . 
   *     A   w i n d o w   c o n t e n t   s c a l e   c a l l b a c k   f u n c t i o n   h a s   t h e   f o l l o w i n g   s i g n a t u r e : 
   *     @ c o d e 
   *     v o i d   f u n c t i o n _ n a m e ( G L F W w i n d o w *   w i n d o w ,   f l o a t   x s c a l e ,   f l o a t   y s c a l e ) 
   *     @ e n d c o d e 
   * 
   *     @ p a r a m [ i n ]   w i n d o w   T h e   w i n d o w   w h o s e   c o n t e n t   s c a l e   c h a n g e d . 
   *     @ p a r a m [ i n ]   x s c a l e   T h e   n e w   x - a x i s   c o n t e n t   s c a l e   o f   t h e   w i n d o w . 
   *     @ p a r a m [ i n ]   y s c a l e   T h e   n e w   y - a x i s   c o n t e n t   s c a l e   o f   t h e   w i n d o w . 
   * 
   *     @ s a   @ r e f   w i n d o w _ s c a l e 
   *     @ s a   @ r e f   g l f w S e t W i n d o w C o n t e n t S c a l e C a l l b a c k 
   * 
   *     @ s i n c e   A d d e d   i n   v e r s i o n   3 . 3 . 
   * 
   *     @ i n g r o u p   w i n d o w 
   * / 
 t y p e d e f   v o i d   ( *   G L F W w i n d o w c o n t e n t s c a l e f u n ) ( G L F W w i n d o w *   w i n d o w ,   f l o a t   x s c a l e ,   f l o a t   y s c a l e ) ; 
 
 / * !   @ b r i e f   T h e   f u n c t i o n   p o i n t e r   t y p e   f o r   m o u s e   b u t t o n   c a l l b a c k s . 
   * 
   *     T h i s   i s   t h e   f u n c t i o n   p o i n t e r   t y p e   f o r   m o u s e   b u t t o n   c a l l b a c k   f u n c t i o n s . 
   *     A   m o u s e   b u t t o n   c a l l b a c k   f u n c t i o n   h a s   t h e   f o l l o w i n g   s i g n a t u r e : 
   *     @ c o d e 
   *     v o i d   f u n c t i o n _ n a m e ( G L F W w i n d o w *   w i n d o w ,   i n t   b u t t o n ,   i n t   a c t i o n ,   i n t   m o d s ) 
   *     @ e n d c o d e 
   * 
   *     @ p a r a m [ i n ]   w i n d o w   T h e   w i n d o w   t h a t   r e c e i v e d   t h e   e v e n t . 
   *     @ p a r a m [ i n ]   b u t t o n   T h e   [ m o u s e   b u t t o n ] ( @ r e f   b u t t o n s )   t h a t   w a s   p r e s s e d   o r 
   *     r e l e a s e d . 
   *     @ p a r a m [ i n ]   a c t i o n   O n e   o f   ` G L F W _ P R E S S `   o r   ` G L F W _ R E L E A S E ` .     F u t u r e   r e l e a s e s 
   *     m a y   a d d   m o r e   a c t i o n s . 
   *     @ p a r a m [ i n ]   m o d s   B i t   f i e l d   d e s c r i b i n g   w h i c h   [ m o d i f i e r   k e y s ] ( @ r e f   m o d s )   w e r e 
   *     h e l d   d o w n . 
   * 
   *     @ s a   @ r e f   i n p u t _ m o u s e _ b u t t o n 
   *     @ s a   @ r e f   g l f w S e t M o u s e B u t t o n C a l l b a c k 
   * 
   *     @ s i n c e   A d d e d   i n   v e r s i o n   1 . 0 . 
   *     @ g l f w 3   A d d e d   w i n d o w   h a n d l e   a n d   m o d i f i e r   m a s k   p a r a m e t e r s . 
   * 
   *     @ i n g r o u p   i n p u t 
   * / 
 t y p e d e f   v o i d   ( *   G L F W m o u s e b u t t o n f u n ) ( G L F W w i n d o w *   w i n d o w ,   i n t   b u t t o n ,   i n t   a c t i o n ,   i n t   m o d s ) ; 
 
 / * !   @ b r i e f   T h e   f u n c t i o n   p o i n t e r   t y p e   f o r   c u r s o r   p o s i t i o n   c a l l b a c k s . 
   * 
   *     T h i s   i s   t h e   f u n c t i o n   p o i n t e r   t y p e   f o r   c u r s o r   p o s i t i o n   c a l l b a c k s .     A   c u r s o r 
   *     p o s i t i o n   c a l l b a c k   f u n c t i o n   h a s   t h e   f o l l o w i n g   s i g n a t u r e : 
   *     @ c o d e 
   *     v o i d   f u n c t i o n _ n a m e ( G L F W w i n d o w *   w i n d o w ,   d o u b l e   x p o s ,   d o u b l e   y p o s ) ; 
   *     @ e n d c o d e 
   * 
   *     @ p a r a m [ i n ]   w i n d o w   T h e   w i n d o w   t h a t   r e c e i v e d   t h e   e v e n t . 
   *     @ p a r a m [ i n ]   x p o s   T h e   n e w   c u r s o r   x - c o o r d i n a t e ,   r e l a t i v e   t o   t h e   l e f t   e d g e   o f 
   *     t h e   c o n t e n t   a r e a . 
   *     @ p a r a m [ i n ]   y p o s   T h e   n e w   c u r s o r   y - c o o r d i n a t e ,   r e l a t i v e   t o   t h e   t o p   e d g e   o f   t h e 
   *     c o n t e n t   a r e a . 
   * 
   *     @ s a   @ r e f   c u r s o r _ p o s 
   *     @ s a   @ r e f   g l f w S e t C u r s o r P o s C a l l b a c k 
   * 
   *     @ s i n c e   A d d e d   i n   v e r s i o n   3 . 0 .     R e p l a c e s   ` G L F W m o u s e p o s f u n ` . 
   * 
   *     @ i n g r o u p   i n p u t 
   * / 
 t y p e d e f   v o i d   ( *   G L F W c u r s o r p o s f u n ) ( G L F W w i n d o w *   w i n d o w ,   d o u b l e   x p o s ,   d o u b l e   y p o s ) ; 
 
 / * !   @ b r i e f   T h e   f u n c t i o n   p o i n t e r   t y p e   f o r   c u r s o r   e n t e r / l e a v e   c a l l b a c k s . 
   * 
   *     T h i s   i s   t h e   f u n c t i o n   p o i n t e r   t y p e   f o r   c u r s o r   e n t e r / l e a v e   c a l l b a c k s . 
   *     A   c u r s o r   e n t e r / l e a v e   c a l l b a c k   f u n c t i o n   h a s   t h e   f o l l o w i n g   s i g n a t u r e : 
   *     @ c o d e 
   *     v o i d   f u n c t i o n _ n a m e ( G L F W w i n d o w *   w i n d o w ,   i n t   e n t e r e d ) 
   *     @ e n d c o d e 
   * 
   *     @ p a r a m [ i n ]   w i n d o w   T h e   w i n d o w   t h a t   r e c e i v e d   t h e   e v e n t . 
   *     @ p a r a m [ i n ]   e n t e r e d   ` G L F W _ T R U E `   i f   t h e   c u r s o r   e n t e r e d   t h e   w i n d o w ' s   c o n t e n t 
   *     a r e a ,   o r   ` G L F W _ F A L S E `   i f   i t   l e f t   i t . 
   * 
   *     @ s a   @ r e f   c u r s o r _ e n t e r 
   *     @ s a   @ r e f   g l f w S e t C u r s o r E n t e r C a l l b a c k 
   * 
   *     @ s i n c e   A d d e d   i n   v e r s i o n   3 . 0 . 
   * 
   *     @ i n g r o u p   i n p u t 
   * / 
 t y p e d e f   v o i d   ( *   G L F W c u r s o r e n t e r f u n ) ( G L F W w i n d o w *   w i n d o w ,   i n t   e n t e r e d ) ; 
 
 / * !   @ b r i e f   T h e   f u n c t i o n   p o i n t e r   t y p e   f o r   s c r o l l   c a l l b a c k s . 
   * 
   *     T h i s   i s   t h e   f u n c t i o n   p o i n t e r   t y p e   f o r   s c r o l l   c a l l b a c k s .     A   s c r o l l   c a l l b a c k 
   *     f u n c t i o n   h a s   t h e   f o l l o w i n g   s i g n a t u r e : 
   *     @ c o d e 
   *     v o i d   f u n c t i o n _ n a m e ( G L F W w i n d o w *   w i n d o w ,   d o u b l e   x o f f s e t ,   d o u b l e   y o f f s e t ) 
   *     @ e n d c o d e 
   * 
   *     @ p a r a m [ i n ]   w i n d o w   T h e   w i n d o w   t h a t   r e c e i v e d   t h e   e v e n t . 
   *     @ p a r a m [ i n ]   x o f f s e t   T h e   s c r o l l   o f f s e t   a l o n g   t h e   x - a x i s . 
   *     @ p a r a m [ i n ]   y o f f s e t   T h e   s c r o l l   o f f s e t   a l o n g   t h e   y - a x i s . 
   * 
   *     @ s a   @ r e f   s c r o l l i n g 
   *     @ s a   @ r e f   g l f w S e t S c r o l l C a l l b a c k 
   * 
   *     @ s i n c e   A d d e d   i n   v e r s i o n   3 . 0 .     R e p l a c e s   ` G L F W m o u s e w h e e l f u n ` . 
   * 
   *     @ i n g r o u p   i n p u t 
   * / 
 t y p e d e f   v o i d   ( *   G L F W s c r o l l f u n ) ( G L F W w i n d o w *   w i n d o w ,   d o u b l e   x o f f s e t ,   d o u b l e   y o f f s e t ) ; 
 
 / * !   @ b r i e f   T h e   f u n c t i o n   p o i n t e r   t y p e   f o r   k e y b o a r d   k e y   c a l l b a c k s . 
   * 
   *     T h i s   i s   t h e   f u n c t i o n   p o i n t e r   t y p e   f o r   k e y b o a r d   k e y   c a l l b a c k s .     A   k e y b o a r d 
   *     k e y   c a l l b a c k   f u n c t i o n   h a s   t h e   f o l l o w i n g   s i g n a t u r e : 
   *     @ c o d e 
   *     v o i d   f u n c t i o n _ n a m e ( G L F W w i n d o w *   w i n d o w ,   i n t   k e y ,   i n t   s c a n c o d e ,   i n t   a c t i o n ,   i n t   m o d s ) 
   *     @ e n d c o d e 
   * 
   *     @ p a r a m [ i n ]   w i n d o w   T h e   w i n d o w   t h a t   r e c e i v e d   t h e   e v e n t . 
   *     @ p a r a m [ i n ]   k e y   T h e   [ k e y b o a r d   k e y ] ( @ r e f   k e y s )   t h a t   w a s   p r e s s e d   o r   r e l e a s e d . 
   *     @ p a r a m [ i n ]   s c a n c o d e   T h e   p l a t f o r m - s p e c i f i c   s c a n c o d e   o f   t h e   k e y . 
   *     @ p a r a m [ i n ]   a c t i o n   ` G L F W _ P R E S S ` ,   ` G L F W _ R E L E A S E `   o r   ` G L F W _ R E P E A T ` .     F u t u r e 
   *     r e l e a s e s   m a y   a d d   m o r e   a c t i o n s . 
   *     @ p a r a m [ i n ]   m o d s   B i t   f i e l d   d e s c r i b i n g   w h i c h   [ m o d i f i e r   k e y s ] ( @ r e f   m o d s )   w e r e 
   *     h e l d   d o w n . 
   * 
   *     @ s a   @ r e f   i n p u t _ k e y 
   *     @ s a   @ r e f   g l f w S e t K e y C a l l b a c k 
   * 
   *     @ s i n c e   A d d e d   i n   v e r s i o n   1 . 0 . 
   *     @ g l f w 3   A d d e d   w i n d o w   h a n d l e ,   s c a n c o d e   a n d   m o d i f i e r   m a s k   p a r a m e t e r s . 
   * 
   *     @ i n g r o u p   i n p u t 
   * / 
 t y p e d e f   v o i d   ( *   G L F W k e y f u n ) ( G L F W w i n d o w *   w i n d o w ,   i n t   k e y ,   i n t   s c a n c o d e ,   i n t   a c t i o n ,   i n t   m o d s ) ; 
 
 / * !   @ b r i e f   T h e   f u n c t i o n   p o i n t e r   t y p e   f o r   U n i c o d e   c h a r a c t e r   c a l l b a c k s . 
   * 
   *     T h i s   i s   t h e   f u n c t i o n   p o i n t e r   t y p e   f o r   U n i c o d e   c h a r a c t e r   c a l l b a c k s . 
   *     A   U n i c o d e   c h a r a c t e r   c a l l b a c k   f u n c t i o n   h a s   t h e   f o l l o w i n g   s i g n a t u r e : 
   *     @ c o d e 
   *     v o i d   f u n c t i o n _ n a m e ( G L F W w i n d o w *   w i n d o w ,   u n s i g n e d   i n t   c o d e p o i n t ) 
   *     @ e n d c o d e 
   * 
   *     @ p a r a m [ i n ]   w i n d o w   T h e   w i n d o w   t h a t   r e c e i v e d   t h e   e v e n t . 
   *     @ p a r a m [ i n ]   c o d e p o i n t   T h e   U n i c o d e   c o d e   p o i n t   o f   t h e   c h a r a c t e r . 
   * 
   *     @ s a   @ r e f   i n p u t _ c h a r 
   *     @ s a   @ r e f   g l f w S e t C h a r C a l l b a c k 
   * 
   *     @ s i n c e   A d d e d   i n   v e r s i o n   2 . 4 . 
   *     @ g l f w 3   A d d e d   w i n d o w   h a n d l e   p a r a m e t e r . 
   * 
   *     @ i n g r o u p   i n p u t 
   * / 
 t y p e d e f   v o i d   ( *   G L F W c h a r f u n ) ( G L F W w i n d o w *   w i n d o w ,   u n s i g n e d   i n t   c o d e p o i n t ) ; 
 
 / * !   @ b r i e f   T h e   f u n c t i o n   p o i n t e r   t y p e   f o r   U n i c o d e   c h a r a c t e r   w i t h   m o d i f i e r s 
   *     c a l l b a c k s . 
   * 
   *     T h i s   i s   t h e   f u n c t i o n   p o i n t e r   t y p e   f o r   U n i c o d e   c h a r a c t e r   w i t h   m o d i f i e r s 
   *     c a l l b a c k s .     I t   i s   c a l l e d   f o r   e a c h   i n p u t   c h a r a c t e r ,   r e g a r d l e s s   o f   w h a t 
   *     m o d i f i e r   k e y s   a r e   h e l d   d o w n .     A   U n i c o d e   c h a r a c t e r   w i t h   m o d i f i e r s   c a l l b a c k 
   *     f u n c t i o n   h a s   t h e   f o l l o w i n g   s i g n a t u r e : 
   *     @ c o d e 
   *     v o i d   f u n c t i o n _ n a m e ( G L F W w i n d o w *   w i n d o w ,   u n s i g n e d   i n t   c o d e p o i n t ,   i n t   m o d s ) 
   *     @ e n d c o d e 
   * 
   *     @ p a r a m [ i n ]   w i n d o w   T h e   w i n d o w   t h a t   r e c e i v e d   t h e   e v e n t . 
   *     @ p a r a m [ i n ]   c o d e p o i n t   T h e   U n i c o d e   c o d e   p o i n t   o f   t h e   c h a r a c t e r . 
   *     @ p a r a m [ i n ]   m o d s   B i t   f i e l d   d e s c r i b i n g   w h i c h   [ m o d i f i e r   k e y s ] ( @ r e f   m o d s )   w e r e 
   *     h e l d   d o w n . 
   * 
   *     @ s a   @ r e f   i n p u t _ c h a r 
   *     @ s a   @ r e f   g l f w S e t C h a r M o d s C a l l b a c k 
   * 
   *     @ d e p r e c a t e d   S c h e d u l e d   f o r   r e m o v a l   i n   v e r s i o n   4 . 0 . 
   * 
   *     @ s i n c e   A d d e d   i n   v e r s i o n   3 . 1 . 
   * 
   *     @ i n g r o u p   i n p u t 
   * / 
 t y p e d e f   v o i d   ( *   G L F W c h a r m o d s f u n ) ( G L F W w i n d o w *   w i n d o w ,   u n s i g n e d   i n t   c o d e p o i n t ,   i n t   m o d s ) ; 
 
 / * !   @ b r i e f   T h e   f u n c t i o n   p o i n t e r   t y p e   f o r   p a t h   d r o p   c a l l b a c k s . 
   * 
   *     T h i s   i s   t h e   f u n c t i o n   p o i n t e r   t y p e   f o r   p a t h   d r o p   c a l l b a c k s .     A   p a t h   d r o p 
   *     c a l l b a c k   f u n c t i o n   h a s   t h e   f o l l o w i n g   s i g n a t u r e : 
   *     @ c o d e 
   *     v o i d   f u n c t i o n _ n a m e ( G L F W w i n d o w *   w i n d o w ,   i n t   p a t h _ c o u n t ,   c o n s t   c h a r *   p a t h s [ ] ) 
   *     @ e n d c o d e 
   * 
   *     @ p a r a m [ i n ]   w i n d o w   T h e   w i n d o w   t h a t   r e c e i v e d   t h e   e v e n t . 
   *     @ p a r a m [ i n ]   p a t h _ c o u n t   T h e   n u m b e r   o f   d r o p p e d   p a t h s . 
   *     @ p a r a m [ i n ]   p a t h s   T h e   U T F - 8   e n c o d e d   f i l e   a n d / o r   d i r e c t o r y   p a t h   n a m e s . 
   * 
   *     @ p o i n t e r _ l i f e t i m e   T h e   p a t h   a r r a y   a n d   i t s   s t r i n g s   a r e   v a l i d   u n t i l   t h e 
   *     c a l l b a c k   f u n c t i o n   r e t u r n s . 
   * 
   *     @ s a   @ r e f   p a t h _ d r o p 
   *     @ s a   @ r e f   g l f w S e t D r o p C a l l b a c k 
   * 
   *     @ s i n c e   A d d e d   i n   v e r s i o n   3 . 1 . 
   * 
   *     @ i n g r o u p   i n p u t 
   * / 
 t y p e d e f   v o i d   ( *   G L F W d r o p f u n ) ( G L F W w i n d o w *   w i n d o w ,   i n t   p a t h _ c o u n t ,   c o n s t   c h a r *   p a t h s [ ] ) ; 
 
 / * !   @ b r i e f   T h e   f u n c t i o n   p o i n t e r   t y p e   f o r   m o n i t o r   c o n f i g u r a t i o n   c a l l b a c k s . 
   * 
   *     T h i s   i s   t h e   f u n c t i o n   p o i n t e r   t y p e   f o r   m o n i t o r   c o n f i g u r a t i o n   c a l l b a c k s . 
   *     A   m o n i t o r   c a l l b a c k   f u n c t i o n   h a s   t h e   f o l l o w i n g   s i g n a t u r e : 
   *     @ c o d e 
   *     v o i d   f u n c t i o n _ n a m e ( G L F W m o n i t o r *   m o n i t o r ,   i n t   e v e n t ) 
   *     @ e n d c o d e 
   * 
   *     @ p a r a m [ i n ]   m o n i t o r   T h e   m o n i t o r   t h a t   w a s   c o n n e c t e d   o r   d i s c o n n e c t e d . 
   *     @ p a r a m [ i n ]   e v e n t   O n e   o f   ` G L F W _ C O N N E C T E D `   o r   ` G L F W _ D I S C O N N E C T E D ` .     F u t u r e 
   *     r e l e a s e s   m a y   a d d   m o r e   e v e n t s . 
   * 
   *     @ s a   @ r e f   m o n i t o r _ e v e n t 
   *     @ s a   @ r e f   g l f w S e t M o n i t o r C a l l b a c k 
   * 
   *     @ s i n c e   A d d e d   i n   v e r s i o n   3 . 0 . 
   * 
   *     @ i n g r o u p   m o n i t o r 
   * / 
 t y p e d e f   v o i d   ( *   G L F W m o n i t o r f u n ) ( G L F W m o n i t o r *   m o n i t o r ,   i n t   e v e n t ) ; 
 
 / * !   @ b r i e f   T h e   f u n c t i o n   p o i n t e r   t y p e   f o r   j o y s t i c k   c o n f i g u r a t i o n   c a l l b a c k s . 
   * 
   *     T h i s   i s   t h e   f u n c t i o n   p o i n t e r   t y p e   f o r   j o y s t i c k   c o n f i g u r a t i o n   c a l l b a c k s . 
   *     A   j o y s t i c k   c o n f i g u r a t i o n   c a l l b a c k   f u n c t i o n   h a s   t h e   f o l l o w i n g   s i g n a t u r e : 
   *     @ c o d e 
   *     v o i d   f u n c t i o n _ n a m e ( i n t   j i d ,   i n t   e v e n t ) 
   *     @ e n d c o d e 
   * 
   *     @ p a r a m [ i n ]   j i d   T h e   j o y s t i c k   t h a t   w a s   c o n n e c t e d   o r   d i s c o n n e c t e d . 
   *     @ p a r a m [ i n ]   e v e n t   O n e   o f   ` G L F W _ C O N N E C T E D `   o r   ` G L F W _ D I S C O N N E C T E D ` .     F u t u r e 
   *     r e l e a s e s   m a y   a d d   m o r e   e v e n t s . 
   * 
   *     @ s a   @ r e f   j o y s t i c k _ e v e n t 
   *     @ s a   @ r e f   g l f w S e t J o y s t i c k C a l l b a c k 
   * 
   *     @ s i n c e   A d d e d   i n   v e r s i o n   3 . 2 . 
   * 
   *     @ i n g r o u p   i n p u t 
   * / 
 t y p e d e f   v o i d   ( *   G L F W j o y s t i c k f u n ) ( i n t   j i d ,   i n t   e v e n t ) ; 
 
 / * !   @ b r i e f   V i d e o   m o d e   t y p e . 
   * 
   *     T h i s   d e s c r i b e s   a   s i n g l e   v i d e o   m o d e . 
   * 
   *     @ s a   @ r e f   m o n i t o r _ m o d e s 
   *     @ s a   @ r e f   g l f w G e t V i d e o M o d e 
   *     @ s a   @ r e f   g l f w G e t V i d e o M o d e s 
   * 
   *     @ s i n c e   A d d e d   i n   v e r s i o n   1 . 0 . 
   *     @ g l f w 3   A d d e d   r e f r e s h   r a t e   m e m b e r . 
   * 
   *     @ i n g r o u p   m o n i t o r 
   * / 
 t y p e d e f   s t r u c t   G L F W v i d m o d e 
 { 
         / * !   T h e   w i d t h ,   i n   s c r e e n   c o o r d i n a t e s ,   o f   t h e   v i d e o   m o d e . 
           * / 
         i n t   w i d t h ; 
         / * !   T h e   h e i g h t ,   i n   s c r e e n   c o o r d i n a t e s ,   o f   t h e   v i d e o   m o d e . 
           * / 
         i n t   h e i g h t ; 
         / * !   T h e   b i t   d e p t h   o f   t h e   r e d   c h a n n e l   o f   t h e   v i d e o   m o d e . 
           * / 
         i n t   r e d B i t s ; 
         / * !   T h e   b i t   d e p t h   o f   t h e   g r e e n   c h a n n e l   o f   t h e   v i d e o   m o d e . 
           * / 
         i n t   g r e e n B i t s ; 
         / * !   T h e   b i t   d e p t h   o f   t h e   b l u e   c h a n n e l   o f   t h e   v i d e o   m o d e . 
           * / 
         i n t   b l u e B i t s ; 
         / * !   T h e   r e f r e s h   r a t e ,   i n   H z ,   o f   t h e   v i d e o   m o d e . 
           * / 
         i n t   r e f r e s h R a t e ; 
 }   G L F W v i d m o d e ; 
 
 / * !   @ b r i e f   G a m m a   r a m p . 
   * 
   *     T h i s   d e s c r i b e s   t h e   g a m m a   r a m p   f o r   a   m o n i t o r . 
   * 
   *     @ s a   @ r e f   m o n i t o r _ g a m m a 
   *     @ s a   @ r e f   g l f w G e t G a m m a R a m p 
   *     @ s a   @ r e f   g l f w S e t G a m m a R a m p 
   * 
   *     @ s i n c e   A d d e d   i n   v e r s i o n   3 . 0 . 
   * 
   *     @ i n g r o u p   m o n i t o r 
   * / 
 t y p e d e f   s t r u c t   G L F W g a m m a r a m p 
 { 
         / * !   A n   a r r a y   o f   v a l u e   d e s c r i b i n g   t h e   r e s p o n s e   o f   t h e   r e d   c h a n n e l . 
           * / 
         u n s i g n e d   s h o r t *   r e d ; 
         / * !   A n   a r r a y   o f   v a l u e   d e s c r i b i n g   t h e   r e s p o n s e   o f   t h e   g r e e n   c h a n n e l . 
           * / 
         u n s i g n e d   s h o r t *   g r e e n ; 
         / * !   A n   a r r a y   o f   v a l u e   d e s c r i b i n g   t h e   r e s p o n s e   o f   t h e   b l u e   c h a n n e l . 
           * / 
         u n s i g n e d   s h o r t *   b l u e ; 
         / * !   T h e   n u m b e r   o f   e l e m e n t s   i n   e a c h   a r r a y . 
           * / 
         u n s i g n e d   i n t   s i z e ; 
 }   G L F W g a m m a r a m p ; 
 
 / * !   @ b r i e f   I m a g e   d a t a . 
   * 
   *     T h i s   d e s c r i b e s   a   s i n g l e   2 D   i m a g e .     S e e   t h e   d o c u m e n t a t i o n   f o r   e a c h   r e l a t e d 
   *     f u n c t i o n   w h a t   t h e   e x p e c t e d   p i x e l   f o r m a t   i s . 
   * 
   *     @ s a   @ r e f   c u r s o r _ c u s t o m 
   *     @ s a   @ r e f   w i n d o w _ i c o n 
   * 
   *     @ s i n c e   A d d e d   i n   v e r s i o n   2 . 1 . 
   *     @ g l f w 3   R e m o v e d   f o r m a t   a n d   b y t e s - p e r - p i x e l   m e m b e r s . 
   * 
   *     @ i n g r o u p   w i n d o w 
   * / 
 t y p e d e f   s t r u c t   G L F W i m a g e 
 { 
         / * !   T h e   w i d t h ,   i n   p i x e l s ,   o f   t h i s   i m a g e . 
           * / 
         i n t   w i d t h ; 
         / * !   T h e   h e i g h t ,   i n   p i x e l s ,   o f   t h i s   i m a g e . 
           * / 
         i n t   h e i g h t ; 
         / * !   T h e   p i x e l   d a t a   o f   t h i s   i m a g e ,   a r r a n g e d   l e f t - t o - r i g h t ,   t o p - t o - b o t t o m . 
           * / 
         u n s i g n e d   c h a r *   p i x e l s ; 
 }   G L F W i m a g e ; 
 
 / * !   @ b r i e f   G a m e p a d   i n p u t   s t a t e 
   * 
   *     T h i s   d e s c r i b e s   t h e   i n p u t   s t a t e   o f   a   g a m e p a d . 
   * 
   *     @ s a   @ r e f   g a m e p a d 
   *     @ s a   @ r e f   g l f w G e t G a m e p a d S t a t e 
   * 
   *     @ s i n c e   A d d e d   i n   v e r s i o n   3 . 3 . 
   * 
   *     @ i n g r o u p   i n p u t 
   * / 
 t y p e d e f   s t r u c t   G L F W g a m e p a d s t a t e 
 { 
         / * !   T h e   s t a t e s   o f   e a c h   [ g a m e p a d   b u t t o n ] ( @ r e f   g a m e p a d _ b u t t o n s ) ,   ` G L F W _ P R E S S ` 
           *     o r   ` G L F W _ R E L E A S E ` . 
           * / 
         u n s i g n e d   c h a r   b u t t o n s [ 1 5 ] ; 
         / * !   T h e   s t a t e s   o f   e a c h   [ g a m e p a d   a x i s ] ( @ r e f   g a m e p a d _ a x e s ) ,   i n   t h e   r a n g e   - 1 . 0 
           *     t o   1 . 0   i n c l u s i v e . 
           * / 
         f l o a t   a x e s [ 6 ] ; 
 }   G L F W g a m e p a d s t a t e ; 
 
 / * !   @ b r i e f 
   * 
   *     @ s a   @ r e f   i n i t _ a l l o c a t o r 
   *     @ s a   @ r e f   g l f w I n i t A l l o c a t o r 
   * 
   *     @ s i n c e   A d d e d   i n   v e r s i o n   3 . 4 . 
   * 
   *     @ i n g r o u p   i n i t 
   * / 
 t y p e d e f   s t r u c t   G L F W a l l o c a t o r 
 { 
         G L F W a l l o c a t e f u n   a l l o c a t e ; 
         G L F W r e a l l o c a t e f u n   r e a l l o c a t e ; 
         G L F W d e a l l o c a t e f u n   d e a l l o c a t e ; 
         v o i d *   u s e r ; 
 }   G L F W a l l o c a t o r ; 
 
 
 / * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * 
   *   G L F W   A P I   f u n c t i o n s 
   * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * / 
 
 / * !   @ b r i e f   I n i t i a l i z e s   t h e   G L F W   l i b r a r y . 
   * 
   *     T h i s   f u n c t i o n   i n i t i a l i z e s   t h e   G L F W   l i b r a r y .     B e f o r e   m o s t   G L F W   f u n c t i o n s   c a n 
   *     b e   u s e d ,   G L F W   m u s t   b e   i n i t i a l i z e d ,   a n d   b e f o r e   a n   a p p l i c a t i o n   t e r m i n a t e s   G L F W 
   *     s h o u l d   b e   t e r m i n a t e d   i n   o r d e r   t o   f r e e   a n y   r e s o u r c e s   a l l o c a t e d   d u r i n g   o r 
   *     a f t e r   i n i t i a l i z a t i o n . 
   * 
   *     I f   t h i s   f u n c t i o n   f a i l s ,   i t   c a l l s   @ r e f   g l f w T e r m i n a t e   b e f o r e   r e t u r n i n g .     I f   i t 
   *     s u c c e e d s ,   y o u   s h o u l d   c a l l   @ r e f   g l f w T e r m i n a t e   b e f o r e   t h e   a p p l i c a t i o n   e x i t s . 
   * 
   *     A d d i t i o n a l   c a l l s   t o   t h i s   f u n c t i o n   a f t e r   s u c c e s s f u l   i n i t i a l i z a t i o n   b u t   b e f o r e 
   *     t e r m i n a t i o n   w i l l   r e t u r n   ` G L F W _ T R U E `   i m m e d i a t e l y . 
   * 
   *     T h e   @ r e f   G L F W _ P L A T F O R M   i n i t   h i n t   c o n t r o l s   w h i c h   p l a t f o r m s   a r e   c o n s i d e r e d   d u r i n g 
   *     i n i t i a l i z a t i o n .     T h i s   a l s o   d e p e n d s   o n   w h i c h   p l a t f o r m s   t h e   l i b r a r y   w a s   c o m p i l e d   t o 
   *     s u p p o r t . 
   * 
   *     @ r e t u r n   ` G L F W _ T R U E `   i f   s u c c e s s f u l ,   o r   ` G L F W _ F A L S E `   i f   a n 
   *     [ e r r o r ] ( @ r e f   e r r o r _ h a n d l i n g )   o c c u r r e d . 
   * 
   *     @ e r r o r s   P o s s i b l e   e r r o r s   i n c l u d e   @ r e f   G L F W _ P L A T F O R M _ U N A V A I L A B L E   a n d   @ r e f 
   *     G L F W _ P L A T F O R M _ E R R O R . 
   * 
   *     @ r e m a r k   @ m a c o s   T h i s   f u n c t i o n   w i l l   c h a n g e   t h e   c u r r e n t   d i r e c t o r y   o f   t h e 
   *     a p p l i c a t i o n   t o   t h e   ` C o n t e n t s / R e s o u r c e s `   s u b d i r e c t o r y   o f   t h e   a p p l i c a t i o n ' s 
   *     b u n d l e ,   i f   p r e s e n t .     T h i s   c a n   b e   d i s a b l e d   w i t h   t h e   @ r e f 
   *     G L F W _ C O C O A _ C H D I R _ R E S O U R C E S   i n i t   h i n t . 
   * 
   *     @ r e m a r k   @ m a c o s   T h i s   f u n c t i o n   w i l l   c r e a t e   t h e   m a i n   m e n u   a n d   d o c k   i c o n   f o r   t h e 
   *     a p p l i c a t i o n .     I f   G L F W   f i n d s   a   ` M a i n M e n u . n i b `   i t   i s   l o a d e d   a n d   a s s u m e d   t o 
   *     c o n t a i n   a   m e n u   b a r .     O t h e r w i s e   a   m i n i m a l   m e n u   b a r   i s   c r e a t e d   m a n u a l l y   w i t h 
   *     c o m m o n   c o m m a n d s   l i k e   H i d e ,   Q u i t   a n d   A b o u t .     T h e   A b o u t   e n t r y   o p e n s   a   m i n i m a l 
   *     a b o u t   d i a l o g   w i t h   i n f o r m a t i o n   f r o m   t h e   a p p l i c a t i o n ' s   b u n d l e .     T h e   m e n u   b a r 
   *     a n d   d o c k   i c o n   c a n   b e   d i s a b l e d   e n t i r e l y   w i t h   t h e   @ r e f   G L F W _ C O C O A _ M E N U B A R   i n i t 
   *     h i n t . 
   * 
   *     @ r e m a r k   @ x 1 1   T h i s   f u n c t i o n   w i l l   s e t   t h e   ` L C _ C T Y P E `   c a t e g o r y   o f   t h e 
   *     a p p l i c a t i o n   l o c a l e   a c c o r d i n g   t o   t h e   c u r r e n t   e n v i r o n m e n t   i f   t h a t   c a t e g o r y   i s 
   *     s t i l l   " C " .     T h i s   i s   b e c a u s e   t h e   " C "   l o c a l e   b r e a k s   U n i c o d e   t e x t   i n p u t . 
   * 
   *     @ t h r e a d _ s a f e t y   T h i s   f u n c t i o n   m u s t   o n l y   b e   c a l l e d   f r o m   t h e   m a i n   t h r e a d . 
   * 
   *     @ s a   @ r e f   i n t r o _ i n i t 
   *     @ s a   @ r e f   g l f w I n i t H i n t 
   *     @ s a   @ r e f   g l f w I n i t A l l o c a t o r 
   *     @ s a   @ r e f   g l f w T e r m i n a t e 
   * 
   *     @ s i n c e   A d d e d   i n   v e r s i o n   1 . 0 . 
   * 
   *     @ i n g r o u p   i n i t 
   * / 
 G L F W A P I   i n t   g l f w I n i t ( v o i d ) ; 
 
 / * !   @ b r i e f   T e r m i n a t e s   t h e   G L F W   l i b r a r y . 
   * 
   *     T h i s   f u n c t i o n   d e s t r o y s   a l l   r e m a i n i n g   w i n d o w s   a n d   c u r s o r s ,   r e s t o r e s   a n y 
   *     m o d i f i e d   g a m m a   r a m p s   a n d   f r e e s   a n y   o t h e r   a l l o c a t e d   r e s o u r c e s .     O n c e   t h i s 
   *     f u n c t i o n   i s   c a l l e d ,   y o u   m u s t   a g a i n   c a l l   @ r e f   g l f w I n i t   s u c c e s s f u l l y   b e f o r e 
   *     y o u   w i l l   b e   a b l e   t o   u s e   m o s t   G L F W   f u n c t i o n s . 
   * 
   *     I f   G L F W   h a s   b e e n   s u c c e s s f u l l y   i n i t i a l i z e d ,   t h i s   f u n c t i o n   s h o u l d   b e   c a l l e d 
   *     b e f o r e   t h e   a p p l i c a t i o n   e x i t s .     I f   i n i t i a l i z a t i o n   f a i l s ,   t h e r e   i s   n o   n e e d   t o 
   *     c a l l   t h i s   f u n c t i o n ,   a s   i t   i s   c a l l e d   b y   @ r e f   g l f w I n i t   b e f o r e   i t   r e t u r n s 
   *     f a i l u r e . 
   * 
   *     T h i s   f u n c t i o n   h a s   n o   e f f e c t   i f   G L F W   i s   n o t   i n i t i a l i z e d . 
   * 
   *     @ e r r o r s   P o s s i b l e   e r r o r s   i n c l u d e   @ r e f   G L F W _ P L A T F O R M _ E R R O R . 
   * 
   *     @ r e m a r k   T h i s   f u n c t i o n   m a y   b e   c a l l e d   b e f o r e   @ r e f   g l f w I n i t . 
   * 
   *     @ w a r n i n g   T h e   c o n t e x t s   o f   a n y   r e m a i n i n g   w i n d o w s   m u s t   n o t   b e   c u r r e n t   o n   a n y 
   *     o t h e r   t h r e a d   w h e n   t h i s   f u n c t i o n   i s   c a l l e d . 
   * 
   *     @ r e e n t r a n c y   T h i s   f u n c t i o n   m u s t   n o t   b e   c a l l e d   f r o m   a   c a l l b a c k . 
   * 
   *     @ t h r e a d _ s a f e t y   T h i s   f u n c t i o n   m u s t   o n l y   b e   c a l l e d   f r o m   t h e   m a i n   t h r e a d . 
   * 
   *     @ s a   @ r e f   i n t r o _ i n i t 
   *     @ s a   @ r e f   g l f w I n i t 
   * 
   *     @ s i n c e   A d d e d   i n   v e r s i o n   1 . 0 . 
   * 
   *     @ i n g r o u p   i n i t 
   * / 
 G L F W A P I   v o i d   g l f w T e r m i n a t e ( v o i d ) ; 
 
 / * !   @ b r i e f   S e t s   t h e   s p e c i f i e d   i n i t   h i n t   t o   t h e   d e s i r e d   v a l u e . 
   * 
   *     T h i s   f u n c t i o n   s e t s   h i n t s   f o r   t h e   n e x t   i n i t i a l i z a t i o n   o f   G L F W . 
   * 
   *     T h e   v a l u e s   y o u   s e t   h i n t s   t o   a r e   n e v e r   r e s e t   b y   G L F W ,   b u t   t h e y   o n l y   t a k e 
   *     e f f e c t   d u r i n g   i n i t i a l i z a t i o n .     O n c e   G L F W   h a s   b e e n   i n i t i a l i z e d ,   a n y   v a l u e s 
   *     y o u   s e t   w i l l   b e   i g n o r e d   u n t i l   t h e   l i b r a r y   i s   t e r m i n a t e d   a n d   i n i t i a l i z e d 
   *     a g a i n . 
   * 
   *     S o m e   h i n t s   a r e   p l a t f o r m   s p e c i f i c .     T h e s e   m a y   b e   s e t   o n   a n y   p l a t f o r m   b u t   t h e y 
   *     w i l l   o n l y   a f f e c t   t h e i r   s p e c i f i c   p l a t f o r m .     O t h e r   p l a t f o r m s   w i l l   i g n o r e   t h e m . 
   *     S e t t i n g   t h e s e   h i n t s   r e q u i r e s   n o   p l a t f o r m   s p e c i f i c   h e a d e r s   o r   f u n c t i o n s . 
   * 
   *     @ p a r a m [ i n ]   h i n t   T h e   [ i n i t   h i n t ] ( @ r e f   i n i t _ h i n t s )   t o   s e t . 
   *     @ p a r a m [ i n ]   v a l u e   T h e   n e w   v a l u e   o f   t h e   i n i t   h i n t . 
   * 
   *     @ e r r o r s   P o s s i b l e   e r r o r s   i n c l u d e   @ r e f   G L F W _ I N V A L I D _ E N U M   a n d   @ r e f 
   *     G L F W _ I N V A L I D _ V A L U E . 
   * 
   *     @ r e m a r k s   T h i s   f u n c t i o n   m a y   b e   c a l l e d   b e f o r e   @ r e f   g l f w I n i t . 
   * 
   *     @ t h r e a d _ s a f e t y   T h i s   f u n c t i o n   m u s t   o n l y   b e   c a l l e d   f r o m   t h e   m a i n   t h r e a d . 
   * 
   *     @ s a   i n i t _ h i n t s 
   *     @ s a   g l f w I n i t 
   * 
   *     @ s i n c e   A d d e d   i n   v e r s i o n   3 . 3 . 
   * 
   *     @ i n g r o u p   i n i t 
   * / 
 G L F W A P I   v o i d   g l f w I n i t H i n t ( i n t   h i n t ,   i n t   v a l u e ) ; 
 
 / * !   @ b r i e f   S e t s   t h e   i n i t   a l l o c a t o r   t o   t h e   d e s i r e d   v a l u e . 
   * 
   *     T o   u s e   t h e   d e f a u l t   a l l o c a t o r ,   c a l l   t h i s   f u n c t i o n   w i t h   a   ` N U L L `   a r g u m e n t . 
   * 
   *     I f   y o u   s p e c i f y   a n   a l l o c a t o r   s t r u c t ,   e v e r y   m e m b e r   m u s t   b e   a   v a l i d   f u n c t i o n 
   *     p o i n t e r .     I f   a n y   m e m b e r   i s   ` N U L L ` ,   t h i s   f u n c t i o n   e m i t s   @ r e f 
   *     G L F W _ I N V A L I D _ V A L U E   a n d   t h e   i n i t   a l l o c a t o r   i s   u n c h a n g e d . 
   * 
   *     @ p a r a m [ i n ]   a l l o c a t o r   T h e   a l l o c a t o r   t o   u s e   a t   t h e   n e x t   i n i t i a l i z a t i o n ,   o r 
   *     ` N U L L `   t o   u s e   t h e   d e f a u l t   o n e . 
   * 
   *     @ e r r o r s   P o s s i b l e   e r r o r s   i n c l u d e   @ r e f   G L F W _ I N V A L I D _ V A L U E . 
   * 
   *     @ p o i n t e r _ l i f e t i m e   T h e   s p e c i f i e d   a l l o c a t o r   i s   c o p i e d   b e f o r e   t h i s   f u n c t i o n 
   *     r e t u r n s . 
   * 
   *     @ t h r e a d _ s a f e t y   T h i s   f u n c t i o n   m u s t   o n l y   b e   c a l l e d   f r o m   t h e   m a i n   t h r e a d . 
   * 
   *     @ s a   @ r e f   i n i t _ a l l o c a t o r 
   *     @ s a   @ r e f   g l f w I n i t 
   * 
   *     @ s i n c e   A d d e d   i n   v e r s i o n   3 . 4 . 
   * 
   *     @ i n g r o u p   i n i t 
   * / 
 G L F W A P I   v o i d   g l f w I n i t A l l o c a t o r ( c o n s t   G L F W a l l o c a t o r *   a l l o c a t o r ) ; 
 
 # i f   d e f i n e d ( V K _ V E R S I O N _ 1 _ 0 ) 
 
 / * !   @ b r i e f   S e t s   t h e   d e s i r e d   V u l k a n   ` v k G e t I n s t a n c e P r o c A d d r `   f u n c t i o n . 
   * 
   *     T h i s   f u n c t i o n   s e t s   t h e   ` v k G e t I n s t a n c e P r o c A d d r `   f u n c t i o n   t h a t   G L F W   w i l l   u s e   f o r   a l l 
   *     V u l k a n   r e l a t e d   e n t r y   p o i n t   q u e r i e s . 
   * 
   *     T h i s   f e a t u r e   i s   m o s t l y   u s e f u l   o n   m a c O S ,   i f   y o u r   c o p y   o f   t h e   V u l k a n   l o a d e r   i s   i n 
   *     a   l o c a t i o n   w h e r e   G L F W   c a n n o t   f i n d   i t   t h r o u g h   d y n a m i c   l o a d i n g ,   o r   i f   y o u   a r e   s t i l l 
   *     u s i n g   t h e   s t a t i c   l i b r a r y   v e r s i o n   o f   t h e   l o a d e r . 
   * 
   *     I f   s e t   t o   ` N U L L ` ,   G L F W   w i l l   t r y   t o   l o a d   t h e   V u l k a n   l o a d e r   d y n a m i c a l l y   b y   i t s   s t a n d a r d 
   *     n a m e   a n d   g e t   t h i s   f u n c t i o n   f r o m   t h e r e .     T h i s   i s   t h e   d e f a u l t   b e h a v i o r . 
   * 
   *     T h e   s t a n d a r d   n a m e   o f   t h e   l o a d e r   i s   ` v u l k a n - 1 . d l l `   o n   W i n d o w s ,   ` l i b v u l k a n . s o . 1 `   o n 
   *     L i n u x   a n d   o t h e r   U n i x - l i k e   s y s t e m s   a n d   ` l i b v u l k a n . 1 . d y l i b `   o n   m a c O S .     I f   y o u r   c o d e   i s 
   *     a l s o   l o a d i n g   i t   v i a   t h e s e   n a m e s   t h e n   y o u   p r o b a b l y   d o n ' t   n e e d   t o   u s e   t h i s   f u n c t i o n . 
   * 
   *     T h e   f u n c t i o n   a d d r e s s   y o u   s e t   i s   n e v e r   r e s e t   b y   G L F W ,   b u t   i t   o n l y   t a k e s   e f f e c t   d u r i n g 
   *     i n i t i a l i z a t i o n .     O n c e   G L F W   h a s   b e e n   i n i t i a l i z e d ,   a n y   u p d a t e s   w i l l   b e   i g n o r e d   u n t i l   t h e 
   *     l i b r a r y   i s   t e r m i n a t e d   a n d   i n i t i a l i z e d   a g a i n . 
   * 
   *     @ p a r a m [ i n ]   l o a d e r   T h e   a d d r e s s   o f   t h e   f u n c t i o n   t o   u s e ,   o r   ` N U L L ` . 
   * 
   *     @ p a r   L o a d e r   f u n c t i o n   s i g n a t u r e 
   *     @ c o d e 
   *     P F N _ v k V o i d F u n c t i o n   v k G e t I n s t a n c e P r o c A d d r ( V k I n s t a n c e   i n s t a n c e ,   c o n s t   c h a r *   n a m e ) 
   *     @ e n d c o d e 
   *     F o r   m o r e   i n f o r m a t i o n   a b o u t   t h i s   f u n c t i o n ,   s e e   t h e 
   *     [ V u l k a n   R e g i s t r y ] ( h t t p s : / / w w w . k h r o n o s . o r g / r e g i s t r y / v u l k a n / ) . 
   * 
   *     @ e r r o r s   N o n e . 
   * 
   *     @ r e m a r k   T h i s   f u n c t i o n   m a y   b e   c a l l e d   b e f o r e   @ r e f   g l f w I n i t . 
   * 
   *     @ t h r e a d _ s a f e t y   T h i s   f u n c t i o n   m u s t   o n l y   b e   c a l l e d   f r o m   t h e   m a i n   t h r e a d . 
   * 
   *     @ s a   @ r e f   v u l k a n _ l o a d e r 
   *     @ s a   @ r e f   g l f w I n i t 
   * 
   *     @ s i n c e   A d d e d   i n   v e r s i o n   3 . 4 . 
   * 
   *     @ i n g r o u p   i n i t 
   * / 
 G L F W A P I   v o i d   g l f w I n i t V u l k a n L o a d e r ( P F N _ v k G e t I n s t a n c e P r o c A d d r   l o a d e r ) ; 
 
 # e n d i f   / * V K _ V E R S I O N _ 1 _ 0 * / 
 
 / * !   @ b r i e f   R e t r i e v e s   t h e   v e r s i o n   o f   t h e   G L F W   l i b r a r y . 
   * 
   *     T h i s   f u n c t i o n   r e t r i e v e s   t h e   m a j o r ,   m i n o r   a n d   r e v i s i o n   n u m b e r s   o f   t h e   G L F W 
   *     l i b r a r y .     I t   i s   i n t e n d e d   f o r   w h e n   y o u   a r e   u s i n g   G L F W   a s   a   s h a r e d   l i b r a r y   a n d 
   *     w a n t   t o   e n s u r e   t h a t   y o u   a r e   u s i n g   t h e   m i n i m u m   r e q u i r e d   v e r s i o n . 
   * 
   *     A n y   o r   a l l   o f   t h e   v e r s i o n   a r g u m e n t s   m a y   b e   ` N U L L ` . 
   * 
   *     @ p a r a m [ o u t ]   m a j o r   W h e r e   t o   s t o r e   t h e   m a j o r   v e r s i o n   n u m b e r ,   o r   ` N U L L ` . 
   *     @ p a r a m [ o u t ]   m i n o r   W h e r e   t o   s t o r e   t h e   m i n o r   v e r s i o n   n u m b e r ,   o r   ` N U L L ` . 
   *     @ p a r a m [ o u t ]   r e v   W h e r e   t o   s t o r e   t h e   r e v i s i o n   n u m b e r ,   o r   ` N U L L ` . 
   * 
   *     @ e r r o r s   N o n e . 
   * 
   *     @ r e m a r k   T h i s   f u n c t i o n   m a y   b e   c a l l e d   b e f o r e   @ r e f   g l f w I n i t . 
   * 
   *     @ t h r e a d _ s a f e t y   T h i s   f u n c t i o n   m a y   b e   c a l l e d   f r o m   a n y   t h r e a d . 
   * 
   *     @ s a   @ r e f   i n t r o _ v e r s i o n 
   *     @ s a   @ r e f   g l f w G e t V e r s i o n S t r i n g 
   * 
   *     @ s i n c e   A d d e d   i n   v e r s i o n   1 . 0 . 
   * 
   *     @ i n g r o u p   i n i t 
   * / 
 G L F W A P I   v o i d   g l f w G e t V e r s i o n ( i n t *   m a j o r ,   i n t *   m i n o r ,   i n t *   r e v ) ; 
 
 / * !   @ b r i e f   R e t u r n s   a   s t r i n g   d e s c r i b i n g   t h e   c o m p i l e - t i m e   c o n f i g u r a t i o n . 
   * 
   *     T h i s   f u n c t i o n   r e t u r n s   t h e   c o m p i l e - t i m e   g e n e r a t e d 
   *     [ v e r s i o n   s t r i n g ] ( @ r e f   i n t r o _ v e r s i o n _ s t r i n g )   o f   t h e   G L F W   l i b r a r y   b i n a r y .     I t   d e s c r i b e s 
   *     t h e   v e r s i o n ,   p l a t f o r m s ,   c o m p i l e r   a n d   a n y   p l a t f o r m   o r   o p e r a t i n g   s y s t e m   s p e c i f i c 
   *     c o m p i l e - t i m e   o p t i o n s .     I t   s h o u l d   n o t   b e   c o n f u s e d   w i t h   t h e   O p e n G L   o r   O p e n G L   E S   v e r s i o n 
   *     s t r i n g ,   q u e r i e d   w i t h   ` g l G e t S t r i n g ` . 
   * 
   *     _ _ D o   n o t   u s e   t h e   v e r s i o n   s t r i n g _ _   t o   p a r s e   t h e   G L F W   l i b r a r y   v e r s i o n .     T h e 
   *     @ r e f   g l f w G e t V e r s i o n   f u n c t i o n   p r o v i d e s   t h e   v e r s i o n   o f   t h e   r u n n i n g   l i b r a r y 
   *     b i n a r y   i n   n u m e r i c a l   f o r m a t . 
   * 
   *     _ _ D o   n o t   u s e   t h e   v e r s i o n   s t r i n g _ _   t o   p a r s e   w h a t   p l a t f o r m s   a r e   s u p p o r t e d .     T h e   @ r e f 
   *     g l f w P l a t f o r m S u p p o r t e d   f u n c t i o n   l e t s   y o u   q u e r y   p l a t f o r m   s u p p o r t . 
   * 
   *     @ r e t u r n   T h e   A S C I I   e n c o d e d   G L F W   v e r s i o n   s t r i n g . 
   * 
   *     @ e r r o r s   N o n e . 
   * 
   *     @ r e m a r k   T h i s   f u n c t i o n   m a y   b e   c a l l e d   b e f o r e   @ r e f   g l f w I n i t . 
   * 
   *     @ p o i n t e r _ l i f e t i m e   T h e   r e t u r n e d   s t r i n g   i s   s t a t i c   a n d   c o m p i l e - t i m e   g e n e r a t e d . 
   * 
   *     @ t h r e a d _ s a f e t y   T h i s   f u n c t i o n   m a y   b e   c a l l e d   f r o m   a n y   t h r e a d . 
   * 
   *     @ s a   @ r e f   i n t r o _ v e r s i o n 
   *     @ s a   @ r e f   g l f w G e t V e r s i o n 
   * 
   *     @ s i n c e   A d d e d   i n   v e r s i o n   3 . 0 . 
   * 
   *     @ i n g r o u p   i n i t 
   * / 
 G L F W A P I   c o n s t   c h a r *   g l f w G e t V e r s i o n S t r i n g ( v o i d ) ; 
 
 / * !   @ b r i e f   R e t u r n s   a n d   c l e a r s   t h e   l a s t   e r r o r   f o r   t h e   c a l l i n g   t h r e a d . 
   * 
   *     T h i s   f u n c t i o n   r e t u r n s   a n d   c l e a r s   t h e   [ e r r o r   c o d e ] ( @ r e f   e r r o r s )   o f   t h e   l a s t 
   *     e r r o r   t h a t   o c c u r r e d   o n   t h e   c a l l i n g   t h r e a d ,   a n d   o p t i o n a l l y   a   U T F - 8   e n c o d e d 
   *     h u m a n - r e a d a b l e   d e s c r i p t i o n   o f   i t .     I f   n o   e r r o r   h a s   o c c u r r e d   s i n c e   t h e   l a s t 
   *     c a l l ,   i t   r e t u r n s   @ r e f   G L F W _ N O _ E R R O R   ( z e r o )   a n d   t h e   d e s c r i p t i o n   p o i n t e r   i s 
   *     s e t   t o   ` N U L L ` . 
   * 
   *     @ p a r a m [ i n ]   d e s c r i p t i o n   W h e r e   t o   s t o r e   t h e   e r r o r   d e s c r i p t i o n   p o i n t e r ,   o r   ` N U L L ` . 
   *     @ r e t u r n   T h e   l a s t   e r r o r   c o d e   f o r   t h e   c a l l i n g   t h r e a d ,   o r   @ r e f   G L F W _ N O _ E R R O R 
   *     ( z e r o ) . 
   * 
   *     @ e r r o r s   N o n e . 
   * 
   *     @ p o i n t e r _ l i f e t i m e   T h e   r e t u r n e d   s t r i n g   i s   a l l o c a t e d   a n d   f r e e d   b y   G L F W .     Y o u 
   *     s h o u l d   n o t   f r e e   i t   y o u r s e l f .     I t   i s   g u a r a n t e e d   t o   b e   v a l i d   o n l y   u n t i l   t h e 
   *     n e x t   e r r o r   o c c u r s   o r   t h e   l i b r a r y   i s   t e r m i n a t e d . 
   * 
   *     @ r e m a r k   T h i s   f u n c t i o n   m a y   b e   c a l l e d   b e f o r e   @ r e f   g l f w I n i t . 
   * 
   *     @ t h r e a d _ s a f e t y   T h i s   f u n c t i o n   m a y   b e   c a l l e d   f r o m   a n y   t h r e a d . 
   * 
   *     @ s a   @ r e f   e r r o r _ h a n d l i n g 
   *     @ s a   @ r e f   g l f w S e t E r r o r C a l l b a c k 
   * 
   *     @ s i n c e   A d d e d   i n   v e r s i o n   3 . 3 . 
   * 
   *     @ i n g r o u p   i n i t 
   * / 
 G L F W A P I   i n t   g l f w G e t E r r o r ( c o n s t   c h a r * *   d e s c r i p t i o n ) ; 
 
 / * !   @ b r i e f   S e t s   t h e   e r r o r   c a l l b a c k . 
   * 
   *     T h i s   f u n c t i o n   s e t s   t h e   e r r o r   c a l l b a c k ,   w h i c h   i s   c a l l e d   w i t h   a n   e r r o r   c o d e 
   *     a n d   a   h u m a n - r e a d a b l e   d e s c r i p t i o n   e a c h   t i m e   a   G L F W   e r r o r   o c c u r s . 
   * 
   *     T h e   e r r o r   c o d e   i s   s e t   b e f o r e   t h e   c a l l b a c k   i s   c a l l e d .     C a l l i n g   @ r e f 
   *     g l f w G e t E r r o r   f r o m   t h e   e r r o r   c a l l b a c k   w i l l   r e t u r n   t h e   s a m e   v a l u e   a s   t h e   e r r o r 
   *     c o d e   a r g u m e n t . 
   * 
   *     T h e   e r r o r   c a l l b a c k   i s   c a l l e d   o n   t h e   t h r e a d   w h e r e   t h e   e r r o r   o c c u r r e d .     I f   y o u 
   *     a r e   u s i n g   G L F W   f r o m   m u l t i p l e   t h r e a d s ,   y o u r   e r r o r   c a l l b a c k   n e e d s   t o   b e 
   *     w r i t t e n   a c c o r d i n g l y . 
   * 
   *     B e c a u s e   t h e   d e s c r i p t i o n   s t r i n g   m a y   h a v e   b e e n   g e n e r a t e d   s p e c i f i c a l l y   f o r   t h a t 
   *     e r r o r ,   i t   i s   n o t   g u a r a n t e e d   t o   b e   v a l i d   a f t e r   t h e   c a l l b a c k   h a s   r e t u r n e d .     I f 
   *     y o u   w i s h   t o   u s e   i t   a f t e r   t h e   c a l l b a c k   r e t u r n s ,   y o u   n e e d   t o   m a k e   a   c o p y . 
   * 
   *     O n c e   s e t ,   t h e   e r r o r   c a l l b a c k   r e m a i n s   s e t   e v e n   a f t e r   t h e   l i b r a r y   h a s   b e e n 
   *     t e r m i n a t e d . 
   * 
   *     @ p a r a m [ i n ]   c a l l b a c k   T h e   n e w   c a l l b a c k ,   o r   ` N U L L `   t o   r e m o v e   t h e   c u r r e n t l y   s e t 
   *     c a l l b a c k . 
   *     @ r e t u r n   T h e   p r e v i o u s l y   s e t   c a l l b a c k ,   o r   ` N U L L `   i f   n o   c a l l b a c k   w a s   s e t . 
   * 
   *     @ c a l l b a c k _ s i g n a t u r e 
   *     @ c o d e 
   *     v o i d   c a l l b a c k _ n a m e ( i n t   e r r o r _ c o d e ,   c o n s t   c h a r *   d e s c r i p t i o n ) 
   *     @ e n d c o d e 
   *     F o r   m o r e   i n f o r m a t i o n   a b o u t   t h e   c a l l b a c k   p a r a m e t e r s ,   s e e   t h e 
   *     [ c a l l b a c k   p o i n t e r   t y p e ] ( @ r e f   G L F W e r r o r f u n ) . 
   * 
   *     @ e r r o r s   N o n e . 
   * 
   *     @ r e m a r k   T h i s   f u n c t i o n   m a y   b e   c a l l e d   b e f o r e   @ r e f   g l f w I n i t . 
   * 
   *     @ t h r e a d _ s a f e t y   T h i s   f u n c t i o n   m u s t   o n l y   b e   c a l l e d   f r o m   t h e   m a i n   t h r e a d . 
   * 
   *     @ s a   @ r e f   e r r o r _ h a n d l i n g 
   *     @ s a   @ r e f   g l f w G e t E r r o r 
   * 
   *     @ s i n c e   A d d e d   i n   v e r s i o n   3 . 0 . 
   * 
   *     @ i n g r o u p   i n i t 
   * / 
 G L F W A P I   G L F W e r r o r f u n   g l f w S e t E r r o r C a l l b a c k ( G L F W e r r o r f u n   c a l l b a c k ) ; 
 
 / * !   @ b r i e f   R e t u r n s   t h e   c u r r e n t l y   s e l e c t e d   p l a t f o r m . 
   * 
   *     T h i s   f u n c t i o n   r e t u r n s   t h e   p l a t f o r m   t h a t   w a s   s e l e c t e d   d u r i n g   i n i t i a l i z a t i o n .     T h e 
   *     r e t u r n e d   v a l u e   w i l l   b e   o n e   o f   ` G L F W _ P L A T F O R M _ W I N 3 2 ` ,   ` G L F W _ P L A T F O R M _ C O C O A ` , 
   *     ` G L F W _ P L A T F O R M _ W A Y L A N D ` ,   ` G L F W _ P L A T F O R M _ X 1 1 `   o r   ` G L F W _ P L A T F O R M _ N U L L ` . 
   * 
   *     @ r e t u r n   T h e   c u r r e n t l y   s e l e c t e d   p l a t f o r m ,   o r   z e r o   i f   a n   e r r o r   o c c u r r e d . 
   * 
   *     @ e r r o r s   P o s s i b l e   e r r o r s   i n c l u d e   @ r e f   G L F W _ N O T _ I N I T I A L I Z E D . 
   * 
   *     @ t h r e a d _ s a f e t y   T h i s   f u n c t i o n   m a y   b e   c a l l e d   f r o m   a n y   t h r e a d . 
   * 
   *     @ s a   @ r e f   p l a t f o r m 
   *     @ s a   @ r e f   g l f w P l a t f o r m S u p p o r t e d 
   * 
   *     @ s i n c e   A d d e d   i n   v e r s i o n   3 . 4 . 
   * 
   *     @ i n g r o u p   i n i t 
   * / 
 G L F W A P I   i n t   g l f w G e t P l a t f o r m ( v o i d ) ; 
 
 / * !   @ b r i e f   R e t u r n s   w h e t h e r   t h e   l i b r a r y   i n c l u d e s   s u p p o r t   f o r   t h e   s p e c i f i e d   p l a t f o r m . 
   * 
   *     T h i s   f u n c t i o n   r e t u r n s   w h e t h e r   t h e   l i b r a r y   w a s   c o m p i l e d   w i t h   s u p p o r t   f o r   t h e   s p e c i f i e d 
   *     p l a t f o r m .     T h e   p l a t f o r m   m u s t   b e   o n e   o f   ` G L F W _ P L A T F O R M _ W I N 3 2 ` ,   ` G L F W _ P L A T F O R M _ C O C O A ` , 
   *     ` G L F W _ P L A T F O R M _ W A Y L A N D ` ,   ` G L F W _ P L A T F O R M _ X 1 1 `   o r   ` G L F W _ P L A T F O R M _ N U L L ` . 
   * 
   *     @ p a r a m [ i n ]   p l a t f o r m   T h e   p l a t f o r m   t o   q u e r y . 
   *     @ r e t u r n   ` G L F W _ T R U E `   i f   t h e   p l a t f o r m   i s   s u p p o r t e d ,   o r   ` G L F W _ F A L S E `   o t h e r w i s e . 
   * 
   *     @ e r r o r s   P o s s i b l e   e r r o r s   i n c l u d e   @ r e f   G L F W _ I N V A L I D _ E N U M . 
   * 
   *     @ r e m a r k   T h i s   f u n c t i o n   m a y   b e   c a l l e d   b e f o r e   @ r e f   g l f w I n i t . 
   * 
   *     @ t h r e a d _ s a f e t y   T h i s   f u n c t i o n   m a y   b e   c a l l e d   f r o m   a n y   t h r e a d . 
   * 
   *     @ s a   @ r e f   p l a t f o r m 
   *     @ s a   @ r e f   g l f w G e t P l a t f o r m 
   * 
   *     @ s i n c e   A d d e d   i n   v e r s i o n   3 . 4 . 
   * 
   *     @ i n g r o u p   i n i t 
   * / 
 G L F W A P I   i n t   g l f w P l a t f o r m S u p p o r t e d ( i n t   p l a t f o r m ) ; 
 
 / * !   @ b r i e f   R e t u r n s   t h e   c u r r e n t l y   c o n n e c t e d   m o n i t o r s . 
   * 
   *     T h i s   f u n c t i o n   r e t u r n s   a n   a r r a y   o f   h a n d l e s   f o r   a l l   c u r r e n t l y   c o n n e c t e d 
   *     m o n i t o r s .     T h e   p r i m a r y   m o n i t o r   i s   a l w a y s   f i r s t   i n   t h e   r e t u r n e d   a r r a y .     I f   n o 
   *     m o n i t o r s   w e r e   f o u n d ,   t h i s   f u n c t i o n   r e t u r n s   ` N U L L ` . 
   * 
   *     @ p a r a m [ o u t ]   c o u n t   W h e r e   t o   s t o r e   t h e   n u m b e r   o f   m o n i t o r s   i n   t h e   r e t u r n e d 
   *     a r r a y .     T h i s   i s   s e t   t o   z e r o   i f   a n   e r r o r   o c c u r r e d . 
   *     @ r e t u r n   A n   a r r a y   o f   m o n i t o r   h a n d l e s ,   o r   ` N U L L `   i f   n o   m o n i t o r s   w e r e   f o u n d   o r 
   *     i f   a n   [ e r r o r ] ( @ r e f   e r r o r _ h a n d l i n g )   o c c u r r e d . 
   * 
   *     @ e r r o r s   P o s s i b l e   e r r o r s   i n c l u d e   @ r e f   G L F W _ N O T _ I N I T I A L I Z E D . 
   * 
   *     @ p o i n t e r _ l i f e t i m e   T h e   r e t u r n e d   a r r a y   i s   a l l o c a t e d   a n d   f r e e d   b y   G L F W .     Y o u 
   *     s h o u l d   n o t   f r e e   i t   y o u r s e l f .     I t   i s   g u a r a n t e e d   t o   b e   v a l i d   o n l y   u n t i l   t h e 
   *     m o n i t o r   c o n f i g u r a t i o n   c h a n g e s   o r   t h e   l i b r a r y   i s   t e r m i n a t e d . 
   * 
   *     @ t h r e a d _ s a f e t y   T h i s   f u n c t i o n   m u s t   o n l y   b e   c a l l e d   f r o m   t h e   m a i n   t h r e a d . 
   * 
   *     @ s a   @ r e f   m o n i t o r _ m o n i t o r s 
   *     @ s a   @ r e f   m o n i t o r _ e v e n t 
   *     @ s a   @ r e f   g l f w G e t P r i m a r y M o n i t o r 
   * 
   *     @ s i n c e   A d d e d   i n   v e r s i o n   3 . 0 . 
   * 
   *     @ i n g r o u p   m o n i t o r 
   * / 
 G L F W A P I   G L F W m o n i t o r * *   g l f w G e t M o n i t o r s ( i n t *   c o u n t ) ; 
 
 / * !   @ b r i e f   R e t u r n s   t h e   p r i m a r y   m o n i t o r . 
   * 
   *     T h i s   f u n c t i o n   r e t u r n s   t h e   p r i m a r y   m o n i t o r .     T h i s   i s   u s u a l l y   t h e   m o n i t o r 
   *     w h e r e   e l e m e n t s   l i k e   t h e   t a s k   b a r   o r   g l o b a l   m e n u   b a r   a r e   l o c a t e d . 
   * 
   *     @ r e t u r n   T h e   p r i m a r y   m o n i t o r ,   o r   ` N U L L `   i f   n o   m o n i t o r s   w e r e   f o u n d   o r   i f   a n 
   *     [ e r r o r ] ( @ r e f   e r r o r _ h a n d l i n g )   o c c u r r e d . 
   * 
   *     @ e r r o r s   P o s s i b l e   e r r o r s   i n c l u d e   @ r e f   G L F W _ N O T _ I N I T I A L I Z E D . 
   * 
   *     @ t h r e a d _ s a f e t y   T h i s   f u n c t i o n   m u s t   o n l y   b e   c a l l e d   f r o m   t h e   m a i n   t h r e a d . 
   * 
   *     @ r e m a r k   T h e   p r i m a r y   m o n i t o r   i s   a l w a y s   f i r s t   i n   t h e   a r r a y   r e t u r n e d   b y   @ r e f 
   *     g l f w G e t M o n i t o r s . 
   * 
   *     @ s a   @ r e f   m o n i t o r _ m o n i t o r s 
   *     @ s a   @ r e f   g l f w G e t M o n i t o r s 
   * 
   *     @ s i n c e   A d d e d   i n   v e r s i o n   3 . 0 . 
   * 
   *     @ i n g r o u p   m o n i t o r 
   * / 
 G L F W A P I   G L F W m o n i t o r *   g l f w G e t P r i m a r y M o n i t o r ( v o i d ) ; 
 
 / * !   @ b r i e f   R e t u r n s   t h e   p o s i t i o n   o f   t h e   m o n i t o r ' s   v i e w p o r t   o n   t h e   v i r t u a l   s c r e e n . 
   * 
   *     T h i s   f u n c t i o n   r e t u r n s   t h e   p o s i t i o n ,   i n   s c r e e n   c o o r d i n a t e s ,   o f   t h e   u p p e r - l e f t 
   *     c o r n e r   o f   t h e   s p e c i f i e d   m o n i t o r . 
   * 
   *     A n y   o r   a l l   o f   t h e   p o s i t i o n   a r g u m e n t s   m a y   b e   ` N U L L ` .     I f   a n   e r r o r   o c c u r s ,   a l l 
   *     n o n - ` N U L L `   p o s i t i o n   a r g u m e n t s   w i l l   b e   s e t   t o   z e r o . 
   * 
   *     @ p a r a m [ i n ]   m o n i t o r   T h e   m o n i t o r   t o   q u e r y . 
   *     @ p a r a m [ o u t ]   x p o s   W h e r e   t o   s t o r e   t h e   m o n i t o r   x - c o o r d i n a t e ,   o r   ` N U L L ` . 
   *     @ p a r a m [ o u t ]   y p o s   W h e r e   t o   s t o r e   t h e   m o n i t o r   y - c o o r d i n a t e ,   o r   ` N U L L ` . 
   * 
   *     @ e r r o r s   P o s s i b l e   e r r o r s   i n c l u d e   @ r e f   G L F W _ N O T _ I N I T I A L I Z E D   a n d   @ r e f 
   *     G L F W _ P L A T F O R M _ E R R O R . 
   * 
   *     @ t h r e a d _ s a f e t y   T h i s   f u n c t i o n   m u s t   o n l y   b e   c a l l e d   f r o m   t h e   m a i n   t h r e a d . 
   * 
   *     @ s a   @ r e f   m o n i t o r _ p r o p e r t i e s 
   * 
   *     @ s i n c e   A d d e d   i n   v e r s i o n   3 . 0 . 
   * 
   *     @ i n g r o u p   m o n i t o r 
   * / 
 G L F W A P I   v o i d   g l f w G e t M o n i t o r P o s ( G L F W m o n i t o r *   m o n i t o r ,   i n t *   x p o s ,   i n t *   y p o s ) ; 
 
 / * !   @ b r i e f   R e t r i e v e s   t h e   w o r k   a r e a   o f   t h e   m o n i t o r . 
   * 
   *     T h i s   f u n c t i o n   r e t u r n s   t h e   p o s i t i o n ,   i n   s c r e e n   c o o r d i n a t e s ,   o f   t h e   u p p e r - l e f t 
   *     c o r n e r   o f   t h e   w o r k   a r e a   o f   t h e   s p e c i f i e d   m o n i t o r   a l o n g   w i t h   t h e   w o r k   a r e a 
   *     s i z e   i n   s c r e e n   c o o r d i n a t e s .   T h e   w o r k   a r e a   i s   d e f i n e d   a s   t h e   a r e a   o f   t h e 
   *     m o n i t o r   n o t   o c c l u d e d   b y   t h e   w i n d o w   s y s t e m   t a s k   b a r   w h e r e   p r e s e n t .   I f   n o 
   *     t a s k   b a r   e x i s t s   t h e n   t h e   w o r k   a r e a   i s   t h e   m o n i t o r   r e s o l u t i o n   i n   s c r e e n 
   *     c o o r d i n a t e s . 
   * 
   *     A n y   o r   a l l   o f   t h e   p o s i t i o n   a n d   s i z e   a r g u m e n t s   m a y   b e   ` N U L L ` .     I f   a n   e r r o r 
   *     o c c u r s ,   a l l   n o n - ` N U L L `   p o s i t i o n   a n d   s i z e   a r g u m e n t s   w i l l   b e   s e t   t o   z e r o . 
   * 
   *     @ p a r a m [ i n ]   m o n i t o r   T h e   m o n i t o r   t o   q u e r y . 
   *     @ p a r a m [ o u t ]   x p o s   W h e r e   t o   s t o r e   t h e   m o n i t o r   x - c o o r d i n a t e ,   o r   ` N U L L ` . 
   *     @ p a r a m [ o u t ]   y p o s   W h e r e   t o   s t o r e   t h e   m o n i t o r   y - c o o r d i n a t e ,   o r   ` N U L L ` . 
   *     @ p a r a m [ o u t ]   w i d t h   W h e r e   t o   s t o r e   t h e   m o n i t o r   w i d t h ,   o r   ` N U L L ` . 
   *     @ p a r a m [ o u t ]   h e i g h t   W h e r e   t o   s t o r e   t h e   m o n i t o r   h e i g h t ,   o r   ` N U L L ` . 
   * 
   *     @ e r r o r s   P o s s i b l e   e r r o r s   i n c l u d e   @ r e f   G L F W _ N O T _ I N I T I A L I Z E D   a n d   @ r e f 
   *     G L F W _ P L A T F O R M _ E R R O R . 
   * 
   *     @ t h r e a d _ s a f e t y   T h i s   f u n c t i o n   m u s t   o n l y   b e   c a l l e d   f r o m   t h e   m a i n   t h r e a d . 
   * 
   *     @ s a   @ r e f   m o n i t o r _ w o r k a r e a 
   * 
   *     @ s i n c e   A d d e d   i n   v e r s i o n   3 . 3 . 
   * 
   *     @ i n g r o u p   m o n i t o r 
   * / 
 G L F W A P I   v o i d   g l f w G e t M o n i t o r W o r k a r e a ( G L F W m o n i t o r *   m o n i t o r ,   i n t *   x p o s ,   i n t *   y p o s ,   i n t *   w i d t h ,   i n t *   h e i g h t ) ; 
 
 / * !   @ b r i e f   R e t u r n s   t h e   p h y s i c a l   s i z e   o f   t h e   m o n i t o r . 
   * 
   *     T h i s   f u n c t i o n   r e t u r n s   t h e   s i z e ,   i n   m i l l i m e t r e s ,   o f   t h e   d i s p l a y   a r e a   o f   t h e 
   *     s p e c i f i e d   m o n i t o r . 
   * 
   *     S o m e   p l a t f o r m s   d o   n o t   p r o v i d e   a c c u r a t e   m o n i t o r   s i z e   i n f o r m a t i o n ,   e i t h e r 
   *     b e c a u s e   t h e   m o n i t o r 
   *     [ E D I D ] ( h t t p s : / / e n . w i k i p e d i a . o r g / w i k i / E x t e n d e d _ d i s p l a y _ i d e n t i f i c a t i o n _ d a t a ) 
   *     d a t a   i s   i n c o r r e c t   o r   b e c a u s e   t h e   d r i v e r   d o e s   n o t   r e p o r t   i t   a c c u r a t e l y . 
   * 
   *     A n y   o r   a l l   o f   t h e   s i z e   a r g u m e n t s   m a y   b e   ` N U L L ` .     I f   a n   e r r o r   o c c u r s ,   a l l 
   *     n o n - ` N U L L `   s i z e   a r g u m e n t s   w i l l   b e   s e t   t o   z e r o . 
   * 
   *     @ p a r a m [ i n ]   m o n i t o r   T h e   m o n i t o r   t o   q u e r y . 
   *     @ p a r a m [ o u t ]   w i d t h M M   W h e r e   t o   s t o r e   t h e   w i d t h ,   i n   m i l l i m e t r e s ,   o f   t h e 
   *     m o n i t o r ' s   d i s p l a y   a r e a ,   o r   ` N U L L ` . 
   *     @ p a r a m [ o u t ]   h e i g h t M M   W h e r e   t o   s t o r e   t h e   h e i g h t ,   i n   m i l l i m e t r e s ,   o f   t h e 
   *     m o n i t o r ' s   d i s p l a y   a r e a ,   o r   ` N U L L ` . 
   * 
   *     @ e r r o r s   P o s s i b l e   e r r o r s   i n c l u d e   @ r e f   G L F W _ N O T _ I N I T I A L I Z E D . 
   * 
   *     @ r e m a r k   @ w i n 3 2   O n   W i n d o w s   8   a n d   e a r l i e r   t h e   p h y s i c a l   s i z e   i s   c a l c u l a t e d   f r o m 
   *     t h e   c u r r e n t   r e s o l u t i o n   a n d   s y s t e m   D P I   i n s t e a d   o f   q u e r y i n g   t h e   m o n i t o r   E D I D   d a t a . 
   * 
   *     @ t h r e a d _ s a f e t y   T h i s   f u n c t i o n   m u s t   o n l y   b e   c a l l e d   f r o m   t h e   m a i n   t h r e a d . 
   * 
   *     @ s a   @ r e f   m o n i t o r _ p r o p e r t i e s 
   * 
   *     @ s i n c e   A d d e d   i n   v e r s i o n   3 . 0 . 
   * 
   *     @ i n g r o u p   m o n i t o r 
   * / 
 G L F W A P I   v o i d   g l f w G e t M o n i t o r P h y s i c a l S i z e ( G L F W m o n i t o r *   m o n i t o r ,   i n t *   w i d t h M M ,   i n t *   h e i g h t M M ) ; 
 
 / * !   @ b r i e f   R e t r i e v e s   t h e   c o n t e n t   s c a l e   f o r   t h e   s p e c i f i e d   m o n i t o r . 
   * 
   *     T h i s   f u n c t i o n   r e t r i e v e s   t h e   c o n t e n t   s c a l e   f o r   t h e   s p e c i f i e d   m o n i t o r .     T h e 
   *     c o n t e n t   s c a l e   i s   t h e   r a t i o   b e t w e e n   t h e   c u r r e n t   D P I   a n d   t h e   p l a t f o r m ' s 
   *     d e f a u l t   D P I .     T h i s   i s   e s p e c i a l l y   i m p o r t a n t   f o r   t e x t   a n d   a n y   U I   e l e m e n t s .     I f 
   *     t h e   p i x e l   d i m e n s i o n s   o f   y o u r   U I   s c a l e d   b y   t h i s   l o o k   a p p r o p r i a t e   o n   y o u r 
   *     m a c h i n e   t h e n   i t   s h o u l d   a p p e a r   a t   a   r e a s o n a b l e   s i z e   o n   o t h e r   m a c h i n e s 
   *     r e g a r d l e s s   o f   t h e i r   D P I   a n d   s c a l i n g   s e t t i n g s .     T h i s   r e l i e s   o n   t h e   s y s t e m   D P I 
   *     a n d   s c a l i n g   s e t t i n g s   b e i n g   s o m e w h a t   c o r r e c t . 
   * 
   *     T h e   c o n t e n t   s c a l e   m a y   d e p e n d   o n   b o t h   t h e   m o n i t o r   r e s o l u t i o n   a n d   p i x e l 
   *     d e n s i t y   a n d   o n   u s e r   s e t t i n g s .     I t   m a y   b e   v e r y   d i f f e r e n t   f r o m   t h e   r a w   D P I 
   *     c a l c u l a t e d   f r o m   t h e   p h y s i c a l   s i z e   a n d   c u r r e n t   r e s o l u t i o n . 
   * 
   *     @ p a r a m [ i n ]   m o n i t o r   T h e   m o n i t o r   t o   q u e r y . 
   *     @ p a r a m [ o u t ]   x s c a l e   W h e r e   t o   s t o r e   t h e   x - a x i s   c o n t e n t   s c a l e ,   o r   ` N U L L ` . 
   *     @ p a r a m [ o u t ]   y s c a l e   W h e r e   t o   s t o r e   t h e   y - a x i s   c o n t e n t   s c a l e ,   o r   ` N U L L ` . 
   * 
   *     @ e r r o r s   P o s s i b l e   e r r o r s   i n c l u d e   @ r e f   G L F W _ N O T _ I N I T I A L I Z E D   a n d   @ r e f 
   *     G L F W _ P L A T F O R M _ E R R O R . 
   * 
   *     @ t h r e a d _ s a f e t y   T h i s   f u n c t i o n   m u s t   o n l y   b e   c a l l e d   f r o m   t h e   m a i n   t h r e a d . 
   * 
   *     @ s a   @ r e f   m o n i t o r _ s c a l e 
   *     @ s a   @ r e f   g l f w G e t W i n d o w C o n t e n t S c a l e 
   * 
   *     @ s i n c e   A d d e d   i n   v e r s i o n   3 . 3 . 
   * 
   *     @ i n g r o u p   m o n i t o r 
   * / 
 G L F W A P I   v o i d   g l f w G e t M o n i t o r C o n t e n t S c a l e ( G L F W m o n i t o r *   m o n i t o r ,   f l o a t *   x s c a l e ,   f l o a t *   y s c a l e ) ; 
 
 / * !   @ b r i e f   R e t u r n s   t h e   n a m e   o f   t h e   s p e c i f i e d   m o n i t o r . 
   * 
   *     T h i s   f u n c t i o n   r e t u r n s   a   h u m a n - r e a d a b l e   n a m e ,   e n c o d e d   a s   U T F - 8 ,   o f   t h e 
   *     s p e c i f i e d   m o n i t o r .     T h e   n a m e   t y p i c a l l y   r e f l e c t s   t h e   m a k e   a n d   m o d e l   o f   t h e 
   *     m o n i t o r   a n d   i s   n o t   g u a r a n t e e d   t o   b e   u n i q u e   a m o n g   t h e   c o n n e c t e d   m o n i t o r s . 
   * 
   *     @ p a r a m [ i n ]   m o n i t o r   T h e   m o n i t o r   t o   q u e r y . 
   *     @ r e t u r n   T h e   U T F - 8   e n c o d e d   n a m e   o f   t h e   m o n i t o r ,   o r   ` N U L L `   i f   a n 
   *     [ e r r o r ] ( @ r e f   e r r o r _ h a n d l i n g )   o c c u r r e d . 
   * 
   *     @ e r r o r s   P o s s i b l e   e r r o r s   i n c l u d e   @ r e f   G L F W _ N O T _ I N I T I A L I Z E D . 
   * 
   *     @ p o i n t e r _ l i f e t i m e   T h e   r e t u r n e d   s t r i n g   i s   a l l o c a t e d   a n d   f r e e d   b y   G L F W .     Y o u 
   *     s h o u l d   n o t   f r e e   i t   y o u r s e l f .     I t   i s   v a l i d   u n t i l   t h e   s p e c i f i e d   m o n i t o r   i s 
   *     d i s c o n n e c t e d   o r   t h e   l i b r a r y   i s   t e r m i n a t e d . 
   * 
   *     @ t h r e a d _ s a f e t y   T h i s   f u n c t i o n   m u s t   o n l y   b e   c a l l e d   f r o m   t h e   m a i n   t h r e a d . 
   * 
   *     @ s a   @ r e f   m o n i t o r _ p r o p e r t i e s 
   * 
   *     @ s i n c e   A d d e d   i n   v e r s i o n   3 . 0 . 
   * 
   *     @ i n g r o u p   m o n i t o r 
   * / 
 G L F W A P I   c o n s t   c h a r *   g l f w G e t M o n i t o r N a m e ( G L F W m o n i t o r *   m o n i t o r ) ; 
 
 / * !   @ b r i e f   S e t s   t h e   u s e r   p o i n t e r   o f   t h e   s p e c i f i e d   m o n i t o r . 
   * 
   *     T h i s   f u n c t i o n   s e t s   t h e   u s e r - d e f i n e d   p o i n t e r   o f   t h e   s p e c i f i e d   m o n i t o r .     T h e 
   *     c u r r e n t   v a l u e   i s   r e t a i n e d   u n t i l   t h e   m o n i t o r   i s   d i s c o n n e c t e d .     T h e   i n i t i a l 
   *     v a l u e   i s   ` N U L L ` . 
   * 
   *     T h i s   f u n c t i o n   m a y   b e   c a l l e d   f r o m   t h e   m o n i t o r   c a l l b a c k ,   e v e n   f o r   a   m o n i t o r 
   *     t h a t   i s   b e i n g   d i s c o n n e c t e d . 
   * 
   *     @ p a r a m [ i n ]   m o n i t o r   T h e   m o n i t o r   w h o s e   p o i n t e r   t o   s e t . 
   *     @ p a r a m [ i n ]   p o i n t e r   T h e   n e w   v a l u e . 
   * 
   *     @ e r r o r s   P o s s i b l e   e r r o r s   i n c l u d e   @ r e f   G L F W _ N O T _ I N I T I A L I Z E D . 
   * 
   *     @ t h r e a d _ s a f e t y   T h i s   f u n c t i o n   m a y   b e   c a l l e d   f r o m   a n y   t h r e a d .     A c c e s s   i s   n o t 
   *     s y n c h r o n i z e d . 
   * 
   *     @ s a   @ r e f   m o n i t o r _ u s e r p t r 
   *     @ s a   @ r e f   g l f w G e t M o n i t o r U s e r P o i n t e r 
   * 
   *     @ s i n c e   A d d e d   i n   v e r s i o n   3 . 3 . 
   * 
   *     @ i n g r o u p   m o n i t o r 
   * / 
 G L F W A P I   v o i d   g l f w S e t M o n i t o r U s e r P o i n t e r ( G L F W m o n i t o r *   m o n i t o r ,   v o i d *   p o i n t e r ) ; 
 
 / * !   @ b r i e f   R e t u r n s   t h e   u s e r   p o i n t e r   o f   t h e   s p e c i f i e d   m o n i t o r . 
   * 
   *     T h i s   f u n c t i o n   r e t u r n s   t h e   c u r r e n t   v a l u e   o f   t h e   u s e r - d e f i n e d   p o i n t e r   o f   t h e 
   *     s p e c i f i e d   m o n i t o r .     T h e   i n i t i a l   v a l u e   i s   ` N U L L ` . 
   * 
   *     T h i s   f u n c t i o n   m a y   b e   c a l l e d   f r o m   t h e   m o n i t o r   c a l l b a c k ,   e v e n   f o r   a   m o n i t o r 
   *     t h a t   i s   b e i n g   d i s c o n n e c t e d . 
   * 
   *     @ p a r a m [ i n ]   m o n i t o r   T h e   m o n i t o r   w h o s e   p o i n t e r   t o   r e t u r n . 
   * 
   *     @ e r r o r s   P o s s i b l e   e r r o r s   i n c l u d e   @ r e f   G L F W _ N O T _ I N I T I A L I Z E D . 
   * 
   *     @ t h r e a d _ s a f e t y   T h i s   f u n c t i o n   m a y   b e   c a l l e d   f r o m   a n y   t h r e a d .     A c c e s s   i s   n o t 
   *     s y n c h r o n i z e d . 
   * 
   *     @ s a   @ r e f   m o n i t o r _ u s e r p t r 
   *     @ s a   @ r e f   g l f w S e t M o n i t o r U s e r P o i n t e r 
   * 
   *     @ s i n c e   A d d e d   i n   v e r s i o n   3 . 3 . 
   * 
   *     @ i n g r o u p   m o n i t o r 
   * / 
 G L F W A P I   v o i d *   g l f w G e t M o n i t o r U s e r P o i n t e r ( G L F W m o n i t o r *   m o n i t o r ) ; 
 
 / * !   @ b r i e f   S e t s   t h e   m o n i t o r   c o n f i g u r a t i o n   c a l l b a c k . 
   * 
   *     T h i s   f u n c t i o n   s e t s   t h e   m o n i t o r   c o n f i g u r a t i o n   c a l l b a c k ,   o r   r e m o v e s   t h e 
   *     c u r r e n t l y   s e t   c a l l b a c k .     T h i s   i s   c a l l e d   w h e n   a   m o n i t o r   i s   c o n n e c t e d   t o   o r 
   *     d i s c o n n e c t e d   f r o m   t h e   s y s t e m . 
   * 
   *     @ p a r a m [ i n ]   c a l l b a c k   T h e   n e w   c a l l b a c k ,   o r   ` N U L L `   t o   r e m o v e   t h e   c u r r e n t l y   s e t 
   *     c a l l b a c k . 
   *     @ r e t u r n   T h e   p r e v i o u s l y   s e t   c a l l b a c k ,   o r   ` N U L L `   i f   n o   c a l l b a c k   w a s   s e t   o r   t h e 
   *     l i b r a r y   h a d   n o t   b e e n   [ i n i t i a l i z e d ] ( @ r e f   i n t r o _ i n i t ) . 
   * 
   *     @ c a l l b a c k _ s i g n a t u r e 
   *     @ c o d e 
   *     v o i d   f u n c t i o n _ n a m e ( G L F W m o n i t o r *   m o n i t o r ,   i n t   e v e n t ) 
   *     @ e n d c o d e 
   *     F o r   m o r e   i n f o r m a t i o n   a b o u t   t h e   c a l l b a c k   p a r a m e t e r s ,   s e e   t h e 
   *     [ f u n c t i o n   p o i n t e r   t y p e ] ( @ r e f   G L F W m o n i t o r f u n ) . 
   * 
   *     @ e r r o r s   P o s s i b l e   e r r o r s   i n c l u d e   @ r e f   G L F W _ N O T _ I N I T I A L I Z E D . 
   * 
   *     @ t h r e a d _ s a f e t y   T h i s   f u n c t i o n   m u s t   o n l y   b e   c a l l e d   f r o m   t h e   m a i n   t h r e a d . 
   * 
   *     @ s a   @ r e f   m o n i t o r _ e v e n t 
   * 
   *     @ s i n c e   A d d e d   i n   v e r s i o n   3 . 0 . 
   * 
   *     @ i n g r o u p   m o n i t o r 
   * / 
 G L F W A P I   G L F W m o n i t o r f u n   g l f w S e t M o n i t o r C a l l b a c k ( G L F W m o n i t o r f u n   c a l l b a c k ) ; 
 
 / * !   @ b r i e f   R e t u r n s   t h e   a v a i l a b l e   v i d e o   m o d e s   f o r   t h e   s p e c i f i e d   m o n i t o r . 
   * 
   *     T h i s   f u n c t i o n   r e t u r n s   a n   a r r a y   o f   a l l   v i d e o   m o d e s   s u p p o r t e d   b y   t h e   s p e c i f i e d 
   *     m o n i t o r .     T h e   r e t u r n e d   a r r a y   i s   s o r t e d   i n   a s c e n d i n g   o r d e r ,   f i r s t   b y   c o l o r 
   *     b i t   d e p t h   ( t h e   s u m   o f   a l l   c h a n n e l   d e p t h s ) ,   t h e n   b y   r e s o l u t i o n   a r e a   ( t h e 
   *     p r o d u c t   o f   w i d t h   a n d   h e i g h t ) ,   t h e n   r e s o l u t i o n   w i d t h   a n d   f i n a l l y   b y   r e f r e s h 
   *     r a t e . 
   * 
   *     @ p a r a m [ i n ]   m o n i t o r   T h e   m o n i t o r   t o   q u e r y . 
   *     @ p a r a m [ o u t ]   c o u n t   W h e r e   t o   s t o r e   t h e   n u m b e r   o f   v i d e o   m o d e s   i n   t h e   r e t u r n e d 
   *     a r r a y .     T h i s   i s   s e t   t o   z e r o   i f   a n   e r r o r   o c c u r r e d . 
   *     @ r e t u r n   A n   a r r a y   o f   v i d e o   m o d e s ,   o r   ` N U L L `   i f   a n 
   *     [ e r r o r ] ( @ r e f   e r r o r _ h a n d l i n g )   o c c u r r e d . 
   * 
   *     @ e r r o r s   P o s s i b l e   e r r o r s   i n c l u d e   @ r e f   G L F W _ N O T _ I N I T I A L I Z E D   a n d   @ r e f 
   *     G L F W _ P L A T F O R M _ E R R O R . 
   * 
   *     @ p o i n t e r _ l i f e t i m e   T h e   r e t u r n e d   a r r a y   i s   a l l o c a t e d   a n d   f r e e d   b y   G L F W .     Y o u 
   *     s h o u l d   n o t   f r e e   i t   y o u r s e l f .     I t   i s   v a l i d   u n t i l   t h e   s p e c i f i e d   m o n i t o r   i s 
   *     d i s c o n n e c t e d ,   t h i s   f u n c t i o n   i s   c a l l e d   a g a i n   f o r   t h a t   m o n i t o r   o r   t h e   l i b r a r y 
   *     i s   t e r m i n a t e d . 
   * 
   *     @ t h r e a d _ s a f e t y   T h i s   f u n c t i o n   m u s t   o n l y   b e   c a l l e d   f r o m   t h e   m a i n   t h r e a d . 
   * 
   *     @ s a   @ r e f   m o n i t o r _ m o d e s 
   *     @ s a   @ r e f   g l f w G e t V i d e o M o d e 
   * 
   *     @ s i n c e   A d d e d   i n   v e r s i o n   1 . 0 . 
   *     @ g l f w 3   C h a n g e d   t o   r e t u r n   a n   a r r a y   o f   m o d e s   f o r   a   s p e c i f i c   m o n i t o r . 
   * 
   *     @ i n g r o u p   m o n i t o r 
   * / 
 G L F W A P I   c o n s t   G L F W v i d m o d e *   g l f w G e t V i d e o M o d e s ( G L F W m o n i t o r *   m o n i t o r ,   i n t *   c o u n t ) ; 
 
 / * !   @ b r i e f   R e t u r n s   t h e   c u r r e n t   m o d e   o f   t h e   s p e c i f i e d   m o n i t o r . 
   * 
   *     T h i s   f u n c t i o n   r e t u r n s   t h e   c u r r e n t   v i d e o   m o d e   o f   t h e   s p e c i f i e d   m o n i t o r .     I f 
   *     y o u   h a v e   c r e a t e d   a   f u l l   s c r e e n   w i n d o w   f o r   t h a t   m o n i t o r ,   t h e   r e t u r n   v a l u e 
   *     w i l l   d e p e n d   o n   w h e t h e r   t h a t   w i n d o w   i s   i c o n i f i e d . 
   * 
   *     @ p a r a m [ i n ]   m o n i t o r   T h e   m o n i t o r   t o   q u e r y . 
   *     @ r e t u r n   T h e   c u r r e n t   m o d e   o f   t h e   m o n i t o r ,   o r   ` N U L L `   i f   a n 
   *     [ e r r o r ] ( @ r e f   e r r o r _ h a n d l i n g )   o c c u r r e d . 
   * 
   *     @ e r r o r s   P o s s i b l e   e r r o r s   i n c l u d e   @ r e f   G L F W _ N O T _ I N I T I A L I Z E D   a n d   @ r e f 
   *     G L F W _ P L A T F O R M _ E R R O R . 
   * 
   *     @ p o i n t e r _ l i f e t i m e   T h e   r e t u r n e d   a r r a y   i s   a l l o c a t e d   a n d   f r e e d   b y   G L F W .     Y o u 
   *     s h o u l d   n o t   f r e e   i t   y o u r s e l f .     I t   i s   v a l i d   u n t i l   t h e   s p e c i f i e d   m o n i t o r   i s 
   *     d i s c o n n e c t e d   o r   t h e   l i b r a r y   i s   t e r m i n a t e d . 
   * 
   *     @ t h r e a d _ s a f e t y   T h i s   f u n c t i o n   m u s t   o n l y   b e   c a l l e d   f r o m   t h e   m a i n   t h r e a d . 
   * 
   *     @ s a   @ r e f   m o n i t o r _ m o d e s 
   *     @ s a   @ r e f   g l f w G e t V i d e o M o d e s 
   * 
   *     @ s i n c e   A d d e d   i n   v e r s i o n   3 . 0 .     R e p l a c e s   ` g l f w G e t D e s k t o p M o d e ` . 
   * 
   *     @ i n g r o u p   m o n i t o r 
   * / 
 G L F W A P I   c o n s t   G L F W v i d m o d e *   g l f w G e t V i d e o M o d e ( G L F W m o n i t o r *   m o n i t o r ) ; 
 
 / * !   @ b r i e f   G e n e r a t e s   a   g a m m a   r a m p   a n d   s e t s   i t   f o r   t h e   s p e c i f i e d   m o n i t o r . 
   * 
   *     T h i s   f u n c t i o n   g e n e r a t e s   a n   a p p r o p r i a t e l y   s i z e d   g a m m a   r a m p   f r o m   t h e   s p e c i f i e d 
   *     e x p o n e n t   a n d   t h e n   c a l l s   @ r e f   g l f w S e t G a m m a R a m p   w i t h   i t .     T h e   v a l u e   m u s t   b e 
   *     a   f i n i t e   n u m b e r   g r e a t e r   t h a n   z e r o . 
   * 
   *     T h e   s o f t w a r e   c o n t r o l l e d   g a m m a   r a m p   i s   a p p l i e d   _ i n   a d d i t i o n _   t o   t h e   h a r d w a r e 
   *     g a m m a   c o r r e c t i o n ,   w h i c h   t o d a y   i s   u s u a l l y   a n   a p p r o x i m a t i o n   o f   s R G B   g a m m a . 
   *     T h i s   m e a n s   t h a t   s e t t i n g   a   p e r f e c t l y   l i n e a r   r a m p ,   o r   g a m m a   1 . 0 ,   w i l l   p r o d u c e 
   *     t h e   d e f a u l t   ( u s u a l l y   s R G B - l i k e )   b e h a v i o r . 
   * 
   *     F o r   g a m m a   c o r r e c t   r e n d e r i n g   w i t h   O p e n G L   o r   O p e n G L   E S ,   s e e   t h e   @ r e f 
   *     G L F W _ S R G B _ C A P A B L E   h i n t . 
   * 
   *     @ p a r a m [ i n ]   m o n i t o r   T h e   m o n i t o r   w h o s e   g a m m a   r a m p   t o   s e t . 
   *     @ p a r a m [ i n ]   g a m m a   T h e   d e s i r e d   e x p o n e n t . 
   * 
   *     @ e r r o r s   P o s s i b l e   e r r o r s   i n c l u d e   @ r e f   G L F W _ N O T _ I N I T I A L I Z E D ,   @ r e f   G L F W _ I N V A L I D _ V A L U E , 
   *     @ r e f   G L F W _ P L A T F O R M _ E R R O R   a n d   @ r e f   G L F W _ F E A T U R E _ U N A V A I L A B L E   ( s e e   r e m a r k s ) . 
   * 
   *     @ r e m a r k   @ w a y l a n d   G a m m a   h a n d l i n g   i s   a   p r i v i l e g e d   p r o t o c o l ,   t h i s   f u n c t i o n 
   *     w i l l   t h u s   n e v e r   b e   i m p l e m e n t e d   a n d   e m i t s   @ r e f   G L F W _ F E A T U R E _ U N A V A I L A B L E . 
   * 
   *     @ t h r e a d _ s a f e t y   T h i s   f u n c t i o n   m u s t   o n l y   b e   c a l l e d   f r o m   t h e   m a i n   t h r e a d . 
   * 
   *     @ s a   @ r e f   m o n i t o r _ g a m m a 
   * 
   *     @ s i n c e   A d d e d   i n   v e r s i o n   3 . 0 . 
   * 
   *     @ i n g r o u p   m o n i t o r 
   * / 
 G L F W A P I   v o i d   g l f w S e t G a m m a ( G L F W m o n i t o r *   m o n i t o r ,   f l o a t   g a m m a ) ; 
 
 / * !   @ b r i e f   R e t u r n s   t h e   c u r r e n t   g a m m a   r a m p   f o r   t h e   s p e c i f i e d   m o n i t o r . 
   * 
   *     T h i s   f u n c t i o n   r e t u r n s   t h e   c u r r e n t   g a m m a   r a m p   o f   t h e   s p e c i f i e d   m o n i t o r . 
   * 
   *     @ p a r a m [ i n ]   m o n i t o r   T h e   m o n i t o r   t o   q u e r y . 
   *     @ r e t u r n   T h e   c u r r e n t   g a m m a   r a m p ,   o r   ` N U L L `   i f   a n 
   *     [ e r r o r ] ( @ r e f   e r r o r _ h a n d l i n g )   o c c u r r e d . 
   * 
   *     @ e r r o r s   P o s s i b l e   e r r o r s   i n c l u d e   @ r e f   G L F W _ N O T _ I N I T I A L I Z E D ,   @ r e f   G L F W _ P L A T F O R M _ E R R O R 
   *     a n d   @ r e f   G L F W _ F E A T U R E _ U N A V A I L A B L E   ( s e e   r e m a r k s ) . 
   * 
   *     @ r e m a r k   @ w a y l a n d   G a m m a   h a n d l i n g   i s   a   p r i v i l e g e d   p r o t o c o l ,   t h i s   f u n c t i o n 
   *     w i l l   t h u s   n e v e r   b e   i m p l e m e n t e d   a n d   e m i t s   @ r e f   G L F W _ F E A T U R E _ U N A V A I L A B L E   w h i l e 
   *     r e t u r n i n g   ` N U L L ` . 
   * 
   *     @ p o i n t e r _ l i f e t i m e   T h e   r e t u r n e d   s t r u c t u r e   a n d   i t s   a r r a y s   a r e   a l l o c a t e d   a n d 
   *     f r e e d   b y   G L F W .     Y o u   s h o u l d   n o t   f r e e   t h e m   y o u r s e l f .     T h e y   a r e   v a l i d   u n t i l   t h e 
   *     s p e c i f i e d   m o n i t o r   i s   d i s c o n n e c t e d ,   t h i s   f u n c t i o n   i s   c a l l e d   a g a i n   f o r   t h a t 
   *     m o n i t o r   o r   t h e   l i b r a r y   i s   t e r m i n a t e d . 
   * 
   *     @ t h r e a d _ s a f e t y   T h i s   f u n c t i o n   m u s t   o n l y   b e   c a l l e d   f r o m   t h e   m a i n   t h r e a d . 
   * 
   *     @ s a   @ r e f   m o n i t o r _ g a m m a 
   * 
   *     @ s i n c e   A d d e d   i n   v e r s i o n   3 . 0 . 
   * 
   *     @ i n g r o u p   m o n i t o r 
   * / 
 G L F W A P I   c o n s t   G L F W g a m m a r a m p *   g l f w G e t G a m m a R a m p ( G L F W m o n i t o r *   m o n i t o r ) ; 
 
 / * !   @ b r i e f   S e t s   t h e   c u r r e n t   g a m m a   r a m p   f o r   t h e   s p e c i f i e d   m o n i t o r . 
   * 
   *     T h i s   f u n c t i o n   s e t s   t h e   c u r r e n t   g a m m a   r a m p   f o r   t h e   s p e c i f i e d   m o n i t o r .     T h e 
   *     o r i g i n a l   g a m m a   r a m p   f o r   t h a t   m o n i t o r   i s   s a v e d   b y   G L F W   t h e   f i r s t   t i m e   t h i s 
   *     f u n c t i o n   i s   c a l l e d   a n d   i s   r e s t o r e d   b y   @ r e f   g l f w T e r m i n a t e . 
   * 
   *     T h e   s o f t w a r e   c o n t r o l l e d   g a m m a   r a m p   i s   a p p l i e d   _ i n   a d d i t i o n _   t o   t h e   h a r d w a r e 
   *     g a m m a   c o r r e c t i o n ,   w h i c h   t o d a y   i s   u s u a l l y   a n   a p p r o x i m a t i o n   o f   s R G B   g a m m a . 
   *     T h i s   m e a n s   t h a t   s e t t i n g   a   p e r f e c t l y   l i n e a r   r a m p ,   o r   g a m m a   1 . 0 ,   w i l l   p r o d u c e 
   *     t h e   d e f a u l t   ( u s u a l l y   s R G B - l i k e )   b e h a v i o r . 
   * 
   *     F o r   g a m m a   c o r r e c t   r e n d e r i n g   w i t h   O p e n G L   o r   O p e n G L   E S ,   s e e   t h e   @ r e f 
   *     G L F W _ S R G B _ C A P A B L E   h i n t . 
   * 
   *     @ p a r a m [ i n ]   m o n i t o r   T h e   m o n i t o r   w h o s e   g a m m a   r a m p   t o   s e t . 
   *     @ p a r a m [ i n ]   r a m p   T h e   g a m m a   r a m p   t o   u s e . 
   * 
   *     @ e r r o r s   P o s s i b l e   e r r o r s   i n c l u d e   @ r e f   G L F W _ N O T _ I N I T I A L I Z E D ,   @ r e f   G L F W _ P L A T F O R M _ E R R O R 
   *     a n d   @ r e f   G L F W _ F E A T U R E _ U N A V A I L A B L E   ( s e e   r e m a r k s ) . 
   * 
   *     @ r e m a r k   T h e   s i z e   o f   t h e   s p e c i f i e d   g a m m a   r a m p   s h o u l d   m a t c h   t h e   s i z e   o f   t h e 
   *     c u r r e n t   r a m p   f o r   t h a t   m o n i t o r . 
   * 
   *     @ r e m a r k   @ w i n 3 2   T h e   g a m m a   r a m p   s i z e   m u s t   b e   2 5 6 . 
   * 
   *     @ r e m a r k   @ w a y l a n d   G a m m a   h a n d l i n g   i s   a   p r i v i l e g e d   p r o t o c o l ,   t h i s   f u n c t i o n 
   *     w i l l   t h u s   n e v e r   b e   i m p l e m e n t e d   a n d   e m i t s   @ r e f   G L F W _ F E A T U R E _ U N A V A I L A B L E . 
   * 
   *     @ p o i n t e r _ l i f e t i m e   T h e   s p e c i f i e d   g a m m a   r a m p   i s   c o p i e d   b e f o r e   t h i s   f u n c t i o n 
   *     r e t u r n s . 
   * 
   *     @ t h r e a d _ s a f e t y   T h i s   f u n c t i o n   m u s t   o n l y   b e   c a l l e d   f r o m   t h e   m a i n   t h r e a d . 
   * 
   *     @ s a   @ r e f   m o n i t o r _ g a m m a 
   * 
   *     @ s i n c e   A d d e d   i n   v e r s i o n   3 . 0 . 
   * 
   *     @ i n g r o u p   m o n i t o r 
   * / 
 G L F W A P I   v o i d   g l f w S e t G a m m a R a m p ( G L F W m o n i t o r *   m o n i t o r ,   c o n s t   G L F W g a m m a r a m p *   r a m p ) ; 
 
 / * !   @ b r i e f   R e s e t s   a l l   w i n d o w   h i n t s   t o   t h e i r   d e f a u l t   v a l u e s . 
   * 
   *     T h i s   f u n c t i o n   r e s e t s   a l l   w i n d o w   h i n t s   t o   t h e i r 
   *     [ d e f a u l t   v a l u e s ] ( @ r e f   w i n d o w _ h i n t s _ v a l u e s ) . 
   * 
   *     @ e r r o r s   P o s s i b l e   e r r o r s   i n c l u d e   @ r e f   G L F W _ N O T _ I N I T I A L I Z E D . 
   * 
   *     @ t h r e a d _ s a f e t y   T h i s   f u n c t i o n   m u s t   o n l y   b e   c a l l e d   f r o m   t h e   m a i n   t h r e a d . 
   * 
   *     @ s a   @ r e f   w i n d o w _ h i n t s 
   *     @ s a   @ r e f   g l f w W i n d o w H i n t 
   *     @ s a   @ r e f   g l f w W i n d o w H i n t S t r i n g 
   * 
   *     @ s i n c e   A d d e d   i n   v e r s i o n   3 . 0 . 
   * 
   *     @ i n g r o u p   w i n d o w 
   * / 
 G L F W A P I   v o i d   g l f w D e f a u l t W i n d o w H i n t s ( v o i d ) ; 
 
 / * !   @ b r i e f   S e t s   t h e   s p e c i f i e d   w i n d o w   h i n t   t o   t h e   d e s i r e d   v a l u e . 
   * 
   *     T h i s   f u n c t i o n   s e t s   h i n t s   f o r   t h e   n e x t   c a l l   t o   @ r e f   g l f w C r e a t e W i n d o w .     T h e 
   *     h i n t s ,   o n c e   s e t ,   r e t a i n   t h e i r   v a l u e s   u n t i l   c h a n g e d   b y   a   c a l l   t o   t h i s 
   *     f u n c t i o n   o r   @ r e f   g l f w D e f a u l t W i n d o w H i n t s ,   o r   u n t i l   t h e   l i b r a r y   i s   t e r m i n a t e d . 
   * 
   *     O n l y   i n t e g e r   v a l u e   h i n t s   c a n   b e   s e t   w i t h   t h i s   f u n c t i o n .     S t r i n g   v a l u e   h i n t s 
   *     a r e   s e t   w i t h   @ r e f   g l f w W i n d o w H i n t S t r i n g . 
   * 
   *     T h i s   f u n c t i o n   d o e s   n o t   c h e c k   w h e t h e r   t h e   s p e c i f i e d   h i n t   v a l u e s   a r e   v a l i d . 
   *     I f   y o u   s e t   h i n t s   t o   i n v a l i d   v a l u e s   t h i s   w i l l   i n s t e a d   b e   r e p o r t e d   b y   t h e   n e x t 
   *     c a l l   t o   @ r e f   g l f w C r e a t e W i n d o w . 
   * 
   *     S o m e   h i n t s   a r e   p l a t f o r m   s p e c i f i c .     T h e s e   m a y   b e   s e t   o n   a n y   p l a t f o r m   b u t   t h e y 
   *     w i l l   o n l y   a f f e c t   t h e i r   s p e c i f i c   p l a t f o r m .     O t h e r   p l a t f o r m s   w i l l   i g n o r e   t h e m . 
   *     S e t t i n g   t h e s e   h i n t s   r e q u i r e s   n o   p l a t f o r m   s p e c i f i c   h e a d e r s   o r   f u n c t i o n s . 
   * 
   *     @ p a r a m [ i n ]   h i n t   T h e   [ w i n d o w   h i n t ] ( @ r e f   w i n d o w _ h i n t s )   t o   s e t . 
   *     @ p a r a m [ i n ]   v a l u e   T h e   n e w   v a l u e   o f   t h e   w i n d o w   h i n t . 
   * 
   *     @ e r r o r s   P o s s i b l e   e r r o r s   i n c l u d e   @ r e f   G L F W _ N O T _ I N I T I A L I Z E D   a n d   @ r e f 
   *     G L F W _ I N V A L I D _ E N U M . 
   * 
   *     @ t h r e a d _ s a f e t y   T h i s   f u n c t i o n   m u s t   o n l y   b e   c a l l e d   f r o m   t h e   m a i n   t h r e a d . 
   * 
   *     @ s a   @ r e f   w i n d o w _ h i n t s 
   *     @ s a   @ r e f   g l f w W i n d o w H i n t S t r i n g 
   *     @ s a   @ r e f   g l f w D e f a u l t W i n d o w H i n t s 
   * 
   *     @ s i n c e   A d d e d   i n   v e r s i o n   3 . 0 .     R e p l a c e s   ` g l f w O p e n W i n d o w H i n t ` . 
   * 
   *     @ i n g r o u p   w i n d o w 
   * / 
 G L F W A P I   v o i d   g l f w W i n d o w H i n t ( i n t   h i n t ,   i n t   v a l u e ) ; 
 
 / * !   @ b r i e f   S e t s   t h e   s p e c i f i e d   w i n d o w   h i n t   t o   t h e   d e s i r e d   v a l u e . 
   * 
   *     T h i s   f u n c t i o n   s e t s   h i n t s   f o r   t h e   n e x t   c a l l   t o   @ r e f   g l f w C r e a t e W i n d o w .     T h e 
   *     h i n t s ,   o n c e   s e t ,   r e t a i n   t h e i r   v a l u e s   u n t i l   c h a n g e d   b y   a   c a l l   t o   t h i s 
   *     f u n c t i o n   o r   @ r e f   g l f w D e f a u l t W i n d o w H i n t s ,   o r   u n t i l   t h e   l i b r a r y   i s   t e r m i n a t e d . 
   * 
   *     O n l y   s t r i n g   t y p e   h i n t s   c a n   b e   s e t   w i t h   t h i s   f u n c t i o n .     I n t e g e r   v a l u e   h i n t s 
   *     a r e   s e t   w i t h   @ r e f   g l f w W i n d o w H i n t . 
   * 
   *     T h i s   f u n c t i o n   d o e s   n o t   c h e c k   w h e t h e r   t h e   s p e c i f i e d   h i n t   v a l u e s   a r e   v a l i d . 
   *     I f   y o u   s e t   h i n t s   t o   i n v a l i d   v a l u e s   t h i s   w i l l   i n s t e a d   b e   r e p o r t e d   b y   t h e   n e x t 
   *     c a l l   t o   @ r e f   g l f w C r e a t e W i n d o w . 
   * 
   *     S o m e   h i n t s   a r e   p l a t f o r m   s p e c i f i c .     T h e s e   m a y   b e   s e t   o n   a n y   p l a t f o r m   b u t   t h e y 
   *     w i l l   o n l y   a f f e c t   t h e i r   s p e c i f i c   p l a t f o r m .     O t h e r   p l a t f o r m s   w i l l   i g n o r e   t h e m . 
   *     S e t t i n g   t h e s e   h i n t s   r e q u i r e s   n o   p l a t f o r m   s p e c i f i c   h e a d e r s   o r   f u n c t i o n s . 
   * 
   *     @ p a r a m [ i n ]   h i n t   T h e   [ w i n d o w   h i n t ] ( @ r e f   w i n d o w _ h i n t s )   t o   s e t . 
   *     @ p a r a m [ i n ]   v a l u e   T h e   n e w   v a l u e   o f   t h e   w i n d o w   h i n t . 
   * 
   *     @ e r r o r s   P o s s i b l e   e r r o r s   i n c l u d e   @ r e f   G L F W _ N O T _ I N I T I A L I Z E D   a n d   @ r e f 
   *     G L F W _ I N V A L I D _ E N U M . 
   * 
   *     @ p o i n t e r _ l i f e t i m e   T h e   s p e c i f i e d   s t r i n g   i s   c o p i e d   b e f o r e   t h i s   f u n c t i o n 
   *     r e t u r n s . 
   * 
   *     @ t h r e a d _ s a f e t y   T h i s   f u n c t i o n   m u s t   o n l y   b e   c a l l e d   f r o m   t h e   m a i n   t h r e a d . 
   * 
   *     @ s a   @ r e f   w i n d o w _ h i n t s 
   *     @ s a   @ r e f   g l f w W i n d o w H i n t 
   *     @ s a   @ r e f   g l f w D e f a u l t W i n d o w H i n t s 
   * 
   *     @ s i n c e   A d d e d   i n   v e r s i o n   3 . 3 . 
   * 
   *     @ i n g r o u p   w i n d o w 
   * / 
 G L F W A P I   v o i d   g l f w W i n d o w H i n t S t r i n g ( i n t   h i n t ,   c o n s t   c h a r *   v a l u e ) ; 
 
 / * !   @ b r i e f   C r e a t e s   a   w i n d o w   a n d   i t s   a s s o c i a t e d   c o n t e x t . 
   * 
   *     T h i s   f u n c t i o n   c r e a t e s   a   w i n d o w   a n d   i t s   a s s o c i a t e d   O p e n G L   o r   O p e n G L   E S 
   *     c o n t e x t .     M o s t   o f   t h e   o p t i o n s   c o n t r o l l i n g   h o w   t h e   w i n d o w   a n d   i t s   c o n t e x t 
   *     s h o u l d   b e   c r e a t e d   a r e   s p e c i f i e d   w i t h   [ w i n d o w   h i n t s ] ( @ r e f   w i n d o w _ h i n t s ) . 
   * 
   *     S u c c e s s f u l   c r e a t i o n   d o e s   n o t   c h a n g e   w h i c h   c o n t e x t   i s   c u r r e n t .     B e f o r e   y o u 
   *     c a n   u s e   t h e   n e w l y   c r e a t e d   c o n t e x t ,   y o u   n e e d   t o 
   *     [ m a k e   i t   c u r r e n t ] ( @ r e f   c o n t e x t _ c u r r e n t ) .     F o r   i n f o r m a t i o n   a b o u t   t h e   ` s h a r e ` 
   *     p a r a m e t e r ,   s e e   @ r e f   c o n t e x t _ s h a r i n g . 
   * 
   *     T h e   c r e a t e d   w i n d o w ,   f r a m e b u f f e r   a n d   c o n t e x t   m a y   d i f f e r   f r o m   w h a t   y o u 
   *     r e q u e s t e d ,   a s   n o t   a l l   p a r a m e t e r s   a n d   h i n t s   a r e 
   *     [ h a r d   c o n s t r a i n t s ] ( @ r e f   w i n d o w _ h i n t s _ h a r d ) .     T h i s   i n c l u d e s   t h e   s i z e   o f   t h e 
   *     w i n d o w ,   e s p e c i a l l y   f o r   f u l l   s c r e e n   w i n d o w s .     T o   q u e r y   t h e   a c t u a l   a t t r i b u t e s 
   *     o f   t h e   c r e a t e d   w i n d o w ,   f r a m e b u f f e r   a n d   c o n t e x t ,   s e e   @ r e f 
   *     g l f w G e t W i n d o w A t t r i b ,   @ r e f   g l f w G e t W i n d o w S i z e   a n d   @ r e f   g l f w G e t F r a m e b u f f e r S i z e . 
   * 
   *     T o   c r e a t e   a   f u l l   s c r e e n   w i n d o w ,   y o u   n e e d   t o   s p e c i f y   t h e   m o n i t o r   t h e   w i n d o w 
   *     w i l l   c o v e r .     I f   n o   m o n i t o r   i s   s p e c i f i e d ,   t h e   w i n d o w   w i l l   b e   w i n d o w e d   m o d e . 
   *     U n l e s s   y o u   h a v e   a   w a y   f o r   t h e   u s e r   t o   c h o o s e   a   s p e c i f i c   m o n i t o r ,   i t   i s 
   *     r e c o m m e n d e d   t h a t   y o u   p i c k   t h e   p r i m a r y   m o n i t o r .     F o r   m o r e   i n f o r m a t i o n   o n   h o w 
   *     t o   q u e r y   c o n n e c t e d   m o n i t o r s ,   s e e   @ r e f   m o n i t o r _ m o n i t o r s . 
   * 
   *     F o r   f u l l   s c r e e n   w i n d o w s ,   t h e   s p e c i f i e d   s i z e   b e c o m e s   t h e   r e s o l u t i o n   o f   t h e 
   *     w i n d o w ' s   _ d e s i r e d   v i d e o   m o d e _ .     A s   l o n g   a s   a   f u l l   s c r e e n   w i n d o w   i s   n o t 
   *     i c o n i f i e d ,   t h e   s u p p o r t e d   v i d e o   m o d e   m o s t   c l o s e l y   m a t c h i n g   t h e   d e s i r e d   v i d e o 
   *     m o d e   i s   s e t   f o r   t h e   s p e c i f i e d   m o n i t o r .     F o r   m o r e   i n f o r m a t i o n   a b o u t   f u l l 
   *     s c r e e n   w i n d o w s ,   i n c l u d i n g   t h e   c r e a t i o n   o f   s o   c a l l e d   _ w i n d o w e d   f u l l   s c r e e n _ 
   *     o r   _ b o r d e r l e s s   f u l l   s c r e e n _   w i n d o w s ,   s e e   @ r e f   w i n d o w _ w i n d o w e d _ f u l l _ s c r e e n . 
   * 
   *     O n c e   y o u   h a v e   c r e a t e d   t h e   w i n d o w ,   y o u   c a n   s w i t c h   i t   b e t w e e n   w i n d o w e d   a n d 
   *     f u l l   s c r e e n   m o d e   w i t h   @ r e f   g l f w S e t W i n d o w M o n i t o r .     T h i s   w i l l   n o t   a f f e c t   i t s 
   *     O p e n G L   o r   O p e n G L   E S   c o n t e x t . 
   * 
   *     B y   d e f a u l t ,   n e w l y   c r e a t e d   w i n d o w s   u s e   t h e   p l a c e m e n t   r e c o m m e n d e d   b y   t h e 
   *     w i n d o w   s y s t e m .     T o   c r e a t e   t h e   w i n d o w   a t   a   s p e c i f i c   p o s i t i o n ,   s e t   t h e   @ r e f 
   *     G L F W _ P O S I T I O N _ X   a n d   @ r e f   G L F W _ P O S I T I O N _ Y   w i n d o w   h i n t s   b e f o r e   c r e a t i o n .     T o 
   *     r e s t o r e   t h e   d e f a u l t   b e h a v i o r ,   s e t   e i t h e r   o r   b o t h   h i n t s   b a c k   t o 
   *     ` G L F W _ A N Y _ P O S I T I O N ` . 
   * 
   *     A s   l o n g   a s   a t   l e a s t   o n e   f u l l   s c r e e n   w i n d o w   i s   n o t   i c o n i f i e d ,   t h e   s c r e e n s a v e r 
   *     i s   p r o h i b i t e d   f r o m   s t a r t i n g . 
   * 
   *     W i n d o w   s y s t e m s   p u t   l i m i t s   o n   w i n d o w   s i z e s .     V e r y   l a r g e   o r   v e r y   s m a l l   w i n d o w 
   *     d i m e n s i o n s   m a y   b e   o v e r r i d d e n   b y   t h e   w i n d o w   s y s t e m   o n   c r e a t i o n .     C h e c k   t h e 
   *     a c t u a l   [ s i z e ] ( @ r e f   w i n d o w _ s i z e )   a f t e r   c r e a t i o n . 
   * 
   *     T h e   [ s w a p   i n t e r v a l ] ( @ r e f   b u f f e r _ s w a p )   i s   n o t   s e t   d u r i n g   w i n d o w   c r e a t i o n   a n d 
   *     t h e   i n i t i a l   v a l u e   m a y   v a r y   d e p e n d i n g   o n   d r i v e r   s e t t i n g s   a n d   d e f a u l t s . 
   * 
   *     @ p a r a m [ i n ]   w i d t h   T h e   d e s i r e d   w i d t h ,   i n   s c r e e n   c o o r d i n a t e s ,   o f   t h e   w i n d o w . 
   *     T h i s   m u s t   b e   g r e a t e r   t h a n   z e r o . 
   *     @ p a r a m [ i n ]   h e i g h t   T h e   d e s i r e d   h e i g h t ,   i n   s c r e e n   c o o r d i n a t e s ,   o f   t h e   w i n d o w . 
   *     T h i s   m u s t   b e   g r e a t e r   t h a n   z e r o . 
   *     @ p a r a m [ i n ]   t i t l e   T h e   i n i t i a l ,   U T F - 8   e n c o d e d   w i n d o w   t i t l e . 
   *     @ p a r a m [ i n ]   m o n i t o r   T h e   m o n i t o r   t o   u s e   f o r   f u l l   s c r e e n   m o d e ,   o r   ` N U L L `   f o r 
   *     w i n d o w e d   m o d e . 
   *     @ p a r a m [ i n ]   s h a r e   T h e   w i n d o w   w h o s e   c o n t e x t   t o   s h a r e   r e s o u r c e s   w i t h ,   o r   ` N U L L ` 
   *     t o   n o t   s h a r e   r e s o u r c e s . 
   *     @ r e t u r n   T h e   h a n d l e   o f   t h e   c r e a t e d   w i n d o w ,   o r   ` N U L L `   i f   a n 
   *     [ e r r o r ] ( @ r e f   e r r o r _ h a n d l i n g )   o c c u r r e d . 
   * 
   *     @ e r r o r s   P o s s i b l e   e r r o r s   i n c l u d e   @ r e f   G L F W _ N O T _ I N I T I A L I Z E D ,   @ r e f 
   *     G L F W _ I N V A L I D _ E N U M ,   @ r e f   G L F W _ I N V A L I D _ V A L U E ,   @ r e f   G L F W _ A P I _ U N A V A I L A B L E ,   @ r e f 
   *     G L F W _ V E R S I O N _ U N A V A I L A B L E ,   @ r e f   G L F W _ F O R M A T _ U N A V A I L A B L E   a n d   @ r e f 
   *     G L F W _ P L A T F O R M _ E R R O R . 
   * 
   *     @ r e m a r k   @ w i n 3 2   W i n d o w   c r e a t i o n   w i l l   f a i l   i f   t h e   M i c r o s o f t   G D I   s o f t w a r e 
   *     O p e n G L   i m p l e m e n t a t i o n   i s   t h e   o n l y   o n e   a v a i l a b l e . 
   * 
   *     @ r e m a r k   @ w i n 3 2   I f   t h e   e x e c u t a b l e   h a s   a n   i c o n   r e s o u r c e   n a m e d   ` G L F W _ I C O N , `   i t 
   *     w i l l   b e   s e t   a s   t h e   i n i t i a l   i c o n   f o r   t h e   w i n d o w .     I f   n o   s u c h   i c o n   i s   p r e s e n t , 
   *     t h e   ` I D I _ A P P L I C A T I O N `   i c o n   w i l l   b e   u s e d   i n s t e a d .     T o   s e t   a   d i f f e r e n t   i c o n , 
   *     s e e   @ r e f   g l f w S e t W i n d o w I c o n . 
   * 
   *     @ r e m a r k   @ w i n 3 2   T h e   c o n t e x t   t o   s h a r e   r e s o u r c e s   w i t h   m u s t   n o t   b e   c u r r e n t   o n 
   *     a n y   o t h e r   t h r e a d . 
   * 
   *     @ r e m a r k   @ m a c o s   T h e   O S   o n l y   s u p p o r t s   c o r e   p r o f i l e   c o n t e x t s   f o r   O p e n G L 
   *     v e r s i o n s   3 . 2   a n d   l a t e r .     B e f o r e   c r e a t i n g   a n   O p e n G L   c o n t e x t   o f   v e r s i o n   3 . 2   o r 
   *     l a t e r   y o u   m u s t   s e t   t h e   [ G L F W _ O P E N G L _ P R O F I L E ] ( @ r e f   G L F W _ O P E N G L _ P R O F I L E _ h i n t ) 
   *     h i n t   a c c o r d i n g l y .     O p e n G L   3 . 0   a n d   3 . 1   c o n t e x t s   a r e   n o t   s u p p o r t e d   a t   a l l 
   *     o n   m a c O S . 
   * 
   *     @ r e m a r k   @ m a c o s   T h e   G L F W   w i n d o w   h a s   n o   i c o n ,   a s   i t   i s   n o t   a   d o c u m e n t 
   *     w i n d o w ,   b u t   t h e   d o c k   i c o n   w i l l   b e   t h e   s a m e   a s   t h e   a p p l i c a t i o n   b u n d l e ' s   i c o n . 
   *     F o r   m o r e   i n f o r m a t i o n   o n   b u n d l e s ,   s e e   t h e 
   *     [ B u n d l e   P r o g r a m m i n g   G u i d e ] ( h t t p s : / / d e v e l o p e r . a p p l e . c o m / l i b r a r y / m a c / d o c u m e n t a t i o n / C o r e F o u n d a t i o n / C o n c e p t u a l / C F B u n d l e s / ) 
   *     i n   t h e   M a c   D e v e l o p e r   L i b r a r y . 
   * 
   *     @ r e m a r k   @ m a c o s   O n   O S   X   1 0 . 1 0   a n d   l a t e r   t h e   w i n d o w   f r a m e   w i l l   n o t   b e   r e n d e r e d 
   *     a t   f u l l   r e s o l u t i o n   o n   R e t i n a   d i s p l a y s   u n l e s s   t h e 
   *     [ G L F W _ C O C O A _ R E T I N A _ F R A M E B U F F E R ] ( @ r e f   G L F W _ C O C O A _ R E T I N A _ F R A M E B U F F E R _ h i n t ) 
   *     h i n t   i s   ` G L F W _ T R U E `   a n d   t h e   ` N S H i g h R e s o l u t i o n C a p a b l e `   k e y   i s   e n a b l e d   i n   t h e 
   *     a p p l i c a t i o n   b u n d l e ' s   ` I n f o . p l i s t ` .     F o r   m o r e   i n f o r m a t i o n ,   s e e 
   *     [ H i g h   R e s o l u t i o n   G u i d e l i n e s   f o r   O S   X ] ( h t t p s : / / d e v e l o p e r . a p p l e . c o m / l i b r a r y / m a c / d o c u m e n t a t i o n / G r a p h i c s A n i m a t i o n / C o n c e p t u a l / H i g h R e s o l u t i o n O S X / E x p l a i n e d / E x p l a i n e d . h t m l ) 
   *     i n   t h e   M a c   D e v e l o p e r   L i b r a r y .     T h e   G L F W   t e s t   a n d   e x a m p l e   p r o g r a m s   u s e 
   *     a   c u s t o m   ` I n f o . p l i s t `   t e m p l a t e   f o r   t h i s ,   w h i c h   c a n   b e   f o u n d   a s 
   *     ` C M a k e / I n f o . p l i s t . i n `   i n   t h e   s o u r c e   t r e e . 
   * 
   *     @ r e m a r k   @ m a c o s   W h e n   a c t i v a t i n g   f r a m e   a u t o s a v i n g   w i t h 
   *     [ G L F W _ C O C O A _ F R A M E _ N A M E ] ( @ r e f   G L F W _ C O C O A _ F R A M E _ N A M E _ h i n t ) ,   t h e   s p e c i f i e d 
   *     w i n d o w   s i z e   a n d   p o s i t i o n   m a y   b e   o v e r r i d d e n   b y   p r e v i o u s l y   s a v e d   v a l u e s . 
   * 
   *     @ r e m a r k   @ x 1 1   S o m e   w i n d o w   m a n a g e r s   w i l l   n o t   r e s p e c t   t h e   p l a c e m e n t   o f 
   *     i n i t i a l l y   h i d d e n   w i n d o w s . 
   * 
   *     @ r e m a r k   @ x 1 1   D u e   t o   t h e   a s y n c h r o n o u s   n a t u r e   o f   X 1 1 ,   i t   m a y   t a k e   a   m o m e n t   f o r 
   *     a   w i n d o w   t o   r e a c h   i t s   r e q u e s t e d   s t a t e .     T h i s   m e a n s   y o u   m a y   n o t   b e   a b l e   t o 
   *     q u e r y   t h e   f i n a l   s i z e ,   p o s i t i o n   o r   o t h e r   a t t r i b u t e s   d i r e c t l y   a f t e r   w i n d o w 
   *     c r e a t i o n . 
   * 
   *     @ r e m a r k   @ x 1 1   T h e   c l a s s   p a r t   o f   t h e   ` W M _ C L A S S `   w i n d o w   p r o p e r t y   w i l l   b y 
   *     d e f a u l t   b e   s e t   t o   t h e   w i n d o w   t i t l e   p a s s e d   t o   t h i s   f u n c t i o n .     T h e   i n s t a n c e 
   *     p a r t   w i l l   u s e   t h e   c o n t e n t s   o f   t h e   ` R E S O U R C E _ N A M E `   e n v i r o n m e n t   v a r i a b l e ,   i f 
   *     p r e s e n t   a n d   n o t   e m p t y ,   o r   f a l l   b a c k   t o   t h e   w i n d o w   t i t l e .     S e t   t h e 
   *     [ G L F W _ X 1 1 _ C L A S S _ N A M E ] ( @ r e f   G L F W _ X 1 1 _ C L A S S _ N A M E _ h i n t )   a n d 
   *     [ G L F W _ X 1 1 _ I N S T A N C E _ N A M E ] ( @ r e f   G L F W _ X 1 1 _ I N S T A N C E _ N A M E _ h i n t )   w i n d o w   h i n t s   t o 
   *     o v e r r i d e   t h i s . 
   * 
   *     @ r e m a r k   @ w a y l a n d   C o m p o s i t o r s   s h o u l d   i m p l e m e n t   t h e   x d g - d e c o r a t i o n   p r o t o c o l 
   *     f o r   G L F W   t o   d e c o r a t e   t h e   w i n d o w   p r o p e r l y .     I f   t h i s   p r o t o c o l   i s n ' t 
   *     s u p p o r t e d ,   o r   i f   t h e   c o m p o s i t o r   p r e f e r s   c l i e n t - s i d e   d e c o r a t i o n s ,   a   v e r y 
   *     s i m p l e   f a l l b a c k   f r a m e   w i l l   b e   d r a w n   u s i n g   t h e   w p _ v i e w p o r t e r   p r o t o c o l .     A 
   *     c o m p o s i t o r   c a n   s t i l l   e m i t   c l o s e ,   m a x i m i z e   o r   f u l l s c r e e n   e v e n t s ,   u s i n g   f o r 
   *     i n s t a n c e   a   k e y b i n d   m e c h a n i s m .     I f   n e i t h e r   o f   t h e s e   p r o t o c o l s   i s   s u p p o r t e d , 
   *     t h e   w i n d o w   w o n ' t   b e   d e c o r a t e d . 
   * 
   *     @ r e m a r k   @ w a y l a n d   A   f u l l   s c r e e n   w i n d o w   w i l l   n o t   a t t e m p t   t o   c h a n g e   t h e   m o d e , 
   *     n o   m a t t e r   w h a t   t h e   r e q u e s t e d   s i z e   o r   r e f r e s h   r a t e . 
   * 
   *     @ r e m a r k   @ w a y l a n d   S c r e e n s a v e r   i n h i b i t i o n   r e q u i r e s   t h e   i d l e - i n h i b i t   p r o t o c o l 
   *     t o   b e   i m p l e m e n t e d   i n   t h e   u s e r ' s   c o m p o s i t o r . 
   * 
   *     @ t h r e a d _ s a f e t y   T h i s   f u n c t i o n   m u s t   o n l y   b e   c a l l e d   f r o m   t h e   m a i n   t h r e a d . 
   * 
   *     @ s a   @ r e f   w i n d o w _ c r e a t i o n 
   *     @ s a   @ r e f   g l f w D e s t r o y W i n d o w 
   * 
   *     @ s i n c e   A d d e d   i n   v e r s i o n   3 . 0 .     R e p l a c e s   ` g l f w O p e n W i n d o w ` . 
   * 
   *     @ i n g r o u p   w i n d o w 
   * / 
 G L F W A P I   G L F W w i n d o w *   g l f w C r e a t e W i n d o w ( i n t   w i d t h ,   i n t   h e i g h t ,   c o n s t   c h a r *   t i t l e ,   G L F W m o n i t o r *   m o n i t o r ,   G L F W w i n d o w *   s h a r e ) ; 
 
 / * !   @ b r i e f   D e s t r o y s   t h e   s p e c i f i e d   w i n d o w   a n d   i t s   c o n t e x t . 
   * 
   *     T h i s   f u n c t i o n   d e s t r o y s   t h e   s p e c i f i e d   w i n d o w   a n d   i t s   c o n t e x t .     O n   c a l l i n g 
   *     t h i s   f u n c t i o n ,   n o   f u r t h e r   c a l l b a c k s   w i l l   b e   c a l l e d   f o r   t h a t   w i n d o w . 
   * 
   *     I f   t h e   c o n t e x t   o f   t h e   s p e c i f i e d   w i n d o w   i s   c u r r e n t   o n   t h e   m a i n   t h r e a d ,   i t   i s 
   *     d e t a c h e d   b e f o r e   b e i n g   d e s t r o y e d . 
   * 
   *     @ p a r a m [ i n ]   w i n d o w   T h e   w i n d o w   t o   d e s t r o y . 
   * 
   *     @ e r r o r s   P o s s i b l e   e r r o r s   i n c l u d e   @ r e f   G L F W _ N O T _ I N I T I A L I Z E D   a n d   @ r e f 
   *     G L F W _ P L A T F O R M _ E R R O R . 
   * 
   *     @ n o t e   T h e   c o n t e x t   o f   t h e   s p e c i f i e d   w i n d o w   m u s t   n o t   b e   c u r r e n t   o n   a n y   o t h e r 
   *     t h r e a d   w h e n   t h i s   f u n c t i o n   i s   c a l l e d . 
   * 
   *     @ r e e n t r a n c y   T h i s   f u n c t i o n   m u s t   n o t   b e   c a l l e d   f r o m   a   c a l l b a c k . 
   * 
   *     @ t h r e a d _ s a f e t y   T h i s   f u n c t i o n   m u s t   o n l y   b e   c a l l e d   f r o m   t h e   m a i n   t h r e a d . 
   * 
   *     @ s a   @ r e f   w i n d o w _ c r e a t i o n 
   *     @ s a   @ r e f   g l f w C r e a t e W i n d o w 
   * 
   *     @ s i n c e   A d d e d   i n   v e r s i o n   3 . 0 .     R e p l a c e s   ` g l f w C l o s e W i n d o w ` . 
   * 
   *     @ i n g r o u p   w i n d o w 
   * / 
 G L F W A P I   v o i d   g l f w D e s t r o y W i n d o w ( G L F W w i n d o w *   w i n d o w ) ; 
 
 / * !   @ b r i e f   C h e c k s   t h e   c l o s e   f l a g   o f   t h e   s p e c i f i e d   w i n d o w . 
   * 
   *     T h i s   f u n c t i o n   r e t u r n s   t h e   v a l u e   o f   t h e   c l o s e   f l a g   o f   t h e   s p e c i f i e d   w i n d o w . 
   * 
   *     @ p a r a m [ i n ]   w i n d o w   T h e   w i n d o w   t o   q u e r y . 
   *     @ r e t u r n   T h e   v a l u e   o f   t h e   c l o s e   f l a g . 
   * 
   *     @ e r r o r s   P o s s i b l e   e r r o r s   i n c l u d e   @ r e f   G L F W _ N O T _ I N I T I A L I Z E D . 
   * 
   *     @ t h r e a d _ s a f e t y   T h i s   f u n c t i o n   m a y   b e   c a l l e d   f r o m   a n y   t h r e a d .     A c c e s s   i s   n o t 
   *     s y n c h r o n i z e d . 
   * 
   *     @ s a   @ r e f   w i n d o w _ c l o s e 
   * 
   *     @ s i n c e   A d d e d   i n   v e r s i o n   3 . 0 . 
   * 
   *     @ i n g r o u p   w i n d o w 
   * / 
 G L F W A P I   i n t   g l f w W i n d o w S h o u l d C l o s e ( G L F W w i n d o w *   w i n d o w ) ; 
 
 / * !   @ b r i e f   S e t s   t h e   c l o s e   f l a g   o f   t h e   s p e c i f i e d   w i n d o w . 
   * 
   *     T h i s   f u n c t i o n   s e t s   t h e   v a l u e   o f   t h e   c l o s e   f l a g   o f   t h e   s p e c i f i e d   w i n d o w . 
   *     T h i s   c a n   b e   u s e d   t o   o v e r r i d e   t h e   u s e r ' s   a t t e m p t   t o   c l o s e   t h e   w i n d o w ,   o r 
   *     t o   s i g n a l   t h a t   i t   s h o u l d   b e   c l o s e d . 
   * 
   *     @ p a r a m [ i n ]   w i n d o w   T h e   w i n d o w   w h o s e   f l a g   t o   c h a n g e . 
   *     @ p a r a m [ i n ]   v a l u e   T h e   n e w   v a l u e . 
   * 
   *     @ e r r o r s   P o s s i b l e   e r r o r s   i n c l u d e   @ r e f   G L F W _ N O T _ I N I T I A L I Z E D . 
   * 
   *     @ t h r e a d _ s a f e t y   T h i s   f u n c t i o n   m a y   b e   c a l l e d   f r o m   a n y   t h r e a d .     A c c e s s   i s   n o t 
   *     s y n c h r o n i z e d . 
   * 
   *     @ s a   @ r e f   w i n d o w _ c l o s e 
   * 
   *     @ s i n c e   A d d e d   i n   v e r s i o n   3 . 0 . 
   * 
   *     @ i n g r o u p   w i n d o w 
   * / 
 G L F W A P I   v o i d   g l f w S e t W i n d o w S h o u l d C l o s e ( G L F W w i n d o w *   w i n d o w ,   i n t   v a l u e ) ; 
 
 / * !   @ b r i e f   S e t s   t h e   t i t l e   o f   t h e   s p e c i f i e d   w i n d o w . 
   * 
   *     T h i s   f u n c t i o n   s e t s   t h e   w i n d o w   t i t l e ,   e n c o d e d   a s   U T F - 8 ,   o f   t h e   s p e c i f i e d 
   *     w i n d o w . 
   * 
   *     @ p a r a m [ i n ]   w i n d o w   T h e   w i n d o w   w h o s e   t i t l e   t o   c h a n g e . 
   *     @ p a r a m [ i n ]   t i t l e   T h e   U T F - 8   e n c o d e d   w i n d o w   t i t l e . 
   * 
   *     @ e r r o r s   P o s s i b l e   e r r o r s   i n c l u d e   @ r e f   G L F W _ N O T _ I N I T I A L I Z E D   a n d   @ r e f 
   *     G L F W _ P L A T F O R M _ E R R O R . 
   * 
   *     @ r e m a r k   @ m a c o s   T h e   w i n d o w   t i t l e   w i l l   n o t   b e   u p d a t e d   u n t i l   t h e   n e x t   t i m e   y o u 
   *     p r o c e s s   e v e n t s . 
   * 
   *     @ t h r e a d _ s a f e t y   T h i s   f u n c t i o n   m u s t   o n l y   b e   c a l l e d   f r o m   t h e   m a i n   t h r e a d . 
   * 
   *     @ s a   @ r e f   w i n d o w _ t i t l e 
   * / 
 
 G L F W A P I   v o i d   g l f w S e t W i n d o w T i t l e ( G L F W w i n d o w *   w i n d o w ,   c o n s t   c h a r *   t i t l e ) ; 
 
 / *     T h i s   f u n c t i o n   s e t s   t h e   i c o n   o f   t h e   s p e c i f i e d   w i n d o w .     I f   p a s s e d   a n   a r r a y   o f 
   *     c a n d i d a t e   i m a g e s ,   t h o s e   o f   o r   c l o s e s t   t o   t h e   s i z e s   d e s i r e d   b y   t h e   s y s t e m   a r e 
   *     s e l e c t e d .     I f   n o   i m a g e s   a r e   s p e c i f i e d ,   t h e   w i n d o w   r e v e r t s   t o   i t s   d e f a u l t 
   *     i c o n . 
   * 
   *     T h e   p i x e l s   a r e   3 2 - b i t ,   l i t t l e - e n d i a n ,   n o n - p r e m u l t i p l i e d   R G B A ,   i . e .   e i g h t 
   *     b i t s   p e r   c h a n n e l   w i t h   t h e   r e d   c h a n n e l   f i r s t .     T h e y   a r e   a r r a n g e d   c a n o n i c a l l y 
   *     a s   p a c k e d   s e q u e n t i a l   r o w s ,   s t a r t i n g   f r o m   t h e   t o p - l e f t   c o r n e r . 
   * 
   *     T h e   d e s i r e d   i m a g e   s i z e s   v a r i e s   d e p e n d i n g   o n   p l a t f o r m   a n d   s y s t e m   s e t t i n g s . 
   *     T h e   s e l e c t e d   i m a g e s   w i l l   b e   r e s c a l e d   a s   n e e d e d .     G o o d   s i z e s   i n c l u d e   1 6 x 1 6 , 
   *     3 2 x 3 2   a n d   4 8 x 4 8 . 
   * 
   *     @ p a r a m [ i n ]   w i n d o w   T h e   w i n d o w   w h o s e   i c o n   t o   s e t . 
   *     @ p a r a m [ i n ]   c o u n t   T h e   n u m b e r   o f   i m a g e s   i n   t h e   s p e c i f i e d   a r r a y ,   o r   z e r o   t o 
   *     r e v e r t   t o   t h e   d e f a u l t   w i n d o w   i c o n . 
   *     @ p a r a m [ i n ]   i m a g e s   T h e   i m a g e s   t o   c r e a t e   t h e   i c o n   f r o m .     T h i s   i s   i g n o r e d   i f 
   *     c o u n t   i s   z e r o . 
   * 
   *     @ e r r o r s   P o s s i b l e   e r r o r s   i n c l u d e   @ r e f   G L F W _ N O T _ I N I T I A L I Z E D ,   @ r e f 
   *     G L F W _ I N V A L I D _ V A L U E ,   @ r e f   G L F W _ P L A T F O R M _ E R R O R   a n d   @ r e f 
   *     G L F W _ F E A T U R E _ U N A V A I L A B L E   ( s e e   r e m a r k s ) . 
   * 
   *     @ p o i n t e r _ l i f e t i m e   T h e   s p e c i f i e d   i m a g e   d a t a   i s   c o p i e d   b e f o r e   t h i s   f u n c t i o n 
   *     r e t u r n s . 
   * 
   *     @ r e m a r k   @ m a c o s   R e g u l a r   w i n d o w s   d o   n o t   h a v e   i c o n s   o n   m a c O S .     T h i s   f u n c t i o n 
   *     w i l l   e m i t   @ r e f   G L F W _ F E A T U R E _ U N A V A I L A B L E .     T h e   d o c k   i c o n   w i l l   b e   t h e   s a m e   a s 
   *     t h e   a p p l i c a t i o n   b u n d l e ' s   i c o n .     F o r   m o r e   i n f o r m a t i o n   o n   b u n d l e s ,   s e e   t h e 
   *     [ B u n d l e   P r o g r a m m i n g   G u i d e ] ( h t t p s : / / d e v e l o p e r . a p p l e . c o m / l i b r a r y / m a c / d o c u m e n t a t i o n / C o r e F o u n d a t i o n / C o n c e p t u a l / C F B u n d l e s / ) 
   *     i n   t h e   M a c   D e v e l o p e r   L i b r a r y . 
   * 
   *     @ r e m a r k   @ w a y l a n d   T h e r e   i s   n o   e x i s t i n g   p r o t o c o l   t o   c h a n g e   a n   i c o n ,   t h e 
   *     w i n d o w   w i l l   t h u s   i n h e r i t   t h e   o n e   d e f i n e d   i n   t h e   a p p l i c a t i o n ' s   d e s k t o p   f i l e . 
   *     T h i s   f u n c t i o n   w i l l   e m i t   @ r e f   G L F W _ F E A T U R E _ U N A V A I L A B L E . 
   * 
   *     @ t h r e a d _ s a f e t y   T h i s   f u n c t i o n   m u s t   o n l y   b e   c a l l e d   f r o m   t h e   m a i n   t h r e a d . 
   * 
   *     @ s a   @ r e f   w i n d o w _ i c o n 
   * 
   *     @ s i n c e   A d d e d   i n   v e r s i o n   3 . 2 . 
   * 
   *     @ i n g r o u p   w i n d o w 
   * / 
 G L F W A P I   v o i d   g l f w S e t W i n d o w I c o n ( G L F W w i n d o w *   w i n d o w ,   i n t   c o u n t ,   c o n s t   G L F W i m a g e *   i m a g e s ) ; 
 
 / * !   @ b r i e f   R e t r i e v e s   t h e   p o s i t i o n   o f   t h e   c o n t e n t   a r e a   o f   t h e   s p e c i f i e d   w i n d o w . 
   * 
   *     T h i s   f u n c t i o n   r e t r i e v e s   t h e   p o s i t i o n ,   i n   s c r e e n   c o o r d i n a t e s ,   o f   t h e 
   *     u p p e r - l e f t   c o r n e r   o f   t h e   c o n t e n t   a r e a   o f   t h e   s p e c i f i e d   w i n d o w . 
   * 
   *     A n y   o r   a l l   o f   t h e   p o s i t i o n   a r g u m e n t s   m a y   b e   ` N U L L ` .     I f   a n   e r r o r   o c c u r s ,   a l l 
   *     n o n - ` N U L L `   p o s i t i o n   a r g u m e n t s   w i l l   b e   s e t   t o   z e r o . 
   * 
   *     @ p a r a m [ i n ]   w i n d o w   T h e   w i n d o w   t o   q u e r y . 
   *     @ p a r a m [ o u t ]   x p o s   W h e r e   t o   s t o r e   t h e   x - c o o r d i n a t e   o f   t h e   u p p e r - l e f t   c o r n e r   o f 
   *     t h e   c o n t e n t   a r e a ,   o r   ` N U L L ` . 
   *     @ p a r a m [ o u t ]   y p o s   W h e r e   t o   s t o r e   t h e   y - c o o r d i n a t e   o f   t h e   u p p e r - l e f t   c o r n e r   o f 
   *     t h e   c o n t e n t   a r e a ,   o r   ` N U L L ` . 
   * 
   *     @ e r r o r s   P o s s i b l e   e r r o r s   i n c l u d e   @ r e f   G L F W _ N O T _ I N I T I A L I Z E D ,   @ r e f 
   *     G L F W _ P L A T F O R M _ E R R O R   a n d   @ r e f   G L F W _ F E A T U R E _ U N A V A I L A B L E   ( s e e   r e m a r k s ) . 
   * 
   *     @ r e m a r k   @ w a y l a n d   T h e r e   i s   n o   w a y   f o r   a n   a p p l i c a t i o n   t o   r e t r i e v e   t h e   g l o b a l 
   *     p o s i t i o n   o f   i t s   w i n d o w s .     T h i s   f u n c t i o n   w i l l   e m i t   @ r e f 
   *     G L F W _ F E A T U R E _ U N A V A I L A B L E . 
   * 
   *     @ t h r e a d _ s a f e t y   T h i s   f u n c t i o n   m u s t   o n l y   b e   c a l l e d   f r o m   t h e   m a i n   t h r e a d . 
   * 
   *     @ s a   @ r e f   w i n d o w _ p o s 
   *     @ s a   @ r e f   g l f w S e t W i n d o w P o s 
   * 
   *     @ s i n c e   A d d e d   i n   v e r s i o n   3 . 0 . 
   * 
   *     @ i n g r o u p   w i n d o w 
   * / 
 G L F W A P I   v o i d   g l f w G e t W i n d o w P o s ( G L F W w i n d o w *   w i n d o w ,   i n t *   x p o s ,   i n t *   y p o s ) ; 
 
 / * !   @ b r i e f   S e t s   t h e   p o s i t i o n   o f   t h e   c o n t e n t   a r e a   o f   t h e   s p e c i f i e d   w i n d o w . 
   * 
   *     T h i s   f u n c t i o n   s e t s   t h e   p o s i t i o n ,   i n   s c r e e n   c o o r d i n a t e s ,   o f   t h e   u p p e r - l e f t 
   *     c o r n e r   o f   t h e   c o n t e n t   a r e a   o f   t h e   s p e c i f i e d   w i n d o w e d   m o d e   w i n d o w .     I f   t h e 
   *     w i n d o w   i s   a   f u l l   s c r e e n   w i n d o w ,   t h i s   f u n c t i o n   d o e s   n o t h i n g . 
   * 
   *     _ _ D o   n o t   u s e   t h i s   f u n c t i o n _ _   t o   m o v e   a n   a l r e a d y   v i s i b l e   w i n d o w   u n l e s s   y o u 
   *     h a v e   v e r y   g o o d   r e a s o n s   f o r   d o i n g   s o ,   a s   i t   w i l l   c o n f u s e   a n d   a n n o y   t h e   u s e r . 
   * 
   *     T h e   w i n d o w   m a n a g e r   m a y   p u t   l i m i t s   o n   w h a t   p o s i t i o n s   a r e   a l l o w e d .     G L F W 
   *     c a n n o t   a n d   s h o u l d   n o t   o v e r r i d e   t h e s e   l i m i t s . 
   * 
   *     @ p a r a m [ i n ]   w i n d o w   T h e   w i n d o w   t o   q u e r y . 
   *     @ p a r a m [ i n ]   x p o s   T h e   x - c o o r d i n a t e   o f   t h e   u p p e r - l e f t   c o r n e r   o f   t h e   c o n t e n t   a r e a . 
   *     @ p a r a m [ i n ]   y p o s   T h e   y - c o o r d i n a t e   o f   t h e   u p p e r - l e f t   c o r n e r   o f   t h e   c o n t e n t   a r e a . 
   * 
   *     @ e r r o r s   P o s s i b l e   e r r o r s   i n c l u d e   @ r e f   G L F W _ N O T _ I N I T I A L I Z E D ,   @ r e f 
   *     G L F W _ P L A T F O R M _ E R R O R   a n d   @ r e f   G L F W _ F E A T U R E _ U N A V A I L A B L E   ( s e e   r e m a r k s ) . 
   * 
   *     @ r e m a r k   @ w a y l a n d   T h e r e   i s   n o   w a y   f o r   a n   a p p l i c a t i o n   t o   s e t   t h e   g l o b a l 
   *     p o s i t i o n   o f   i t s   w i n d o w s .     T h i s   f u n c t i o n   w i l l   e m i t   @ r e f 
   *     G L F W _ F E A T U R E _ U N A V A I L A B L E . 
   * 
   *     @ t h r e a d _ s a f e t y   T h i s   f u n c t i o n   m u s t   o n l y   b e   c a l l e d   f r o m   t h e   m a i n   t h r e a d . 
   * 
   *     @ s a   @ r e f   w i n d o w _ p o s 
   *     @ s a   @ r e f   g l f w G e t W i n d o w P o s 
   * 
   *     @ s i n c e   A d d e d   i n   v e r s i o n   1 . 0 . 
   *     @ g l f w 3   A d d e d   w i n d o w   h a n d l e   p a r a m e t e r . 
   * 
   *     @ i n g r o u p   w i n d o w 
   * / 
 G L F W A P I   v o i d   g l f w S e t W i n d o w P o s ( G L F W w i n d o w *   w i n d o w ,   i n t   x p o s ,   i n t   y p o s ) ; 
 
 / * !   @ b r i e f   R e t r i e v e s   t h e   s i z e   o f   t h e   c o n t e n t   a r e a   o f   t h e   s p e c i f i e d   w i n d o w . 
   * 
   *     T h i s   f u n c t i o n   r e t r i e v e s   t h e   s i z e ,   i n   s c r e e n   c o o r d i n a t e s ,   o f   t h e   c o n t e n t   a r e a 
   *     o f   t h e   s p e c i f i e d   w i n d o w .     I f   y o u   w i s h   t o   r e t r i e v e   t h e   s i z e   o f   t h e 
   *     f r a m e b u f f e r   o f   t h e   w i n d o w   i n   p i x e l s ,   s e e   @ r e f   g l f w G e t F r a m e b u f f e r S i z e . 
   * 
   *     A n y   o r   a l l   o f   t h e   s i z e   a r g u m e n t s   m a y   b e   ` N U L L ` .     I f   a n   e r r o r   o c c u r s ,   a l l 
   *     n o n - ` N U L L `   s i z e   a r g u m e n t s   w i l l   b e   s e t   t o   z e r o . 
   * 
   *     @ p a r a m [ i n ]   w i n d o w   T h e   w i n d o w   w h o s e   s i z e   t o   r e t r i e v e . 
   *     @ p a r a m [ o u t ]   w i d t h   W h e r e   t o   s t o r e   t h e   w i d t h ,   i n   s c r e e n   c o o r d i n a t e s ,   o f   t h e 
   *     c o n t e n t   a r e a ,   o r   ` N U L L ` . 
   *     @ p a r a m [ o u t ]   h e i g h t   W h e r e   t o   s t o r e   t h e   h e i g h t ,   i n   s c r e e n   c o o r d i n a t e s ,   o f   t h e 
   *     c o n t e n t   a r e a ,   o r   ` N U L L ` . 
   * 
   *     @ e r r o r s   P o s s i b l e   e r r o r s   i n c l u d e   @ r e f   G L F W _ N O T _ I N I T I A L I Z E D   a n d   @ r e f 
   *     G L F W _ P L A T F O R M _ E R R O R . 
   * 
   *     @ t h r e a d _ s a f e t y   T h i s   f u n c t i o n   m u s t   o n l y   b e   c a l l e d   f r o m   t h e   m a i n   t h r e a d . 
   * 
   *     @ s a   @ r e f   w i n d o w _ s i z e 
   *     @ s a   @ r e f   g l f w S e t W i n d o w S i z e 
   * 
   *     @ s i n c e   A d d e d   i n   v e r s i o n   1 . 0 . 
   *     @ g l f w 3   A d d e d   w i n d o w   h a n d l e   p a r a m e t e r . 
   * 
   *     @ i n g r o u p   w i n d o w 
   * / 
 G L F W A P I   v o i d   g l f w G e t W i n d o w S i z e ( G L F W w i n d o w *   w i n d o w ,   i n t *   w i d t h ,   i n t *   h e i g h t ) ; 
 
 / * !   @ b r i e f   S e t s   t h e   s i z e   l i m i t s   o f   t h e   s p e c i f i e d   w i n d o w . 
   * 
   *     T h i s   f u n c t i o n   s e t s   t h e   s i z e   l i m i t s   o f   t h e   c o n t e n t   a r e a   o f   t h e   s p e c i f i e d 
   *     w i n d o w .     I f   t h e   w i n d o w   i s   f u l l   s c r e e n ,   t h e   s i z e   l i m i t s   o n l y   t a k e   e f f e c t 
   *     o n c e   i t   i s   m a d e   w i n d o w e d .     I f   t h e   w i n d o w   i s   n o t   r e s i z a b l e ,   t h i s   f u n c t i o n 
   *     d o e s   n o t h i n g . 
   * 
   *     T h e   s i z e   l i m i t s   a r e   a p p l i e d   i m m e d i a t e l y   t o   a   w i n d o w e d   m o d e   w i n d o w   a n d   m a y 
   *     c a u s e   i t   t o   b e   r e s i z e d . 
   * 
   *     T h e   m a x i m u m   d i m e n s i o n s   m u s t   b e   g r e a t e r   t h a n   o r   e q u a l   t o   t h e   m i n i m u m 
   *     d i m e n s i o n s   a n d   a l l   m u s t   b e   g r e a t e r   t h a n   o r   e q u a l   t o   z e r o . 
   * 
   *     @ p a r a m [ i n ]   w i n d o w   T h e   w i n d o w   t o   s e t   l i m i t s   f o r . 
   *     @ p a r a m [ i n ]   m i n w i d t h   T h e   m i n i m u m   w i d t h ,   i n   s c r e e n   c o o r d i n a t e s ,   o f   t h e   c o n t e n t 
   *     a r e a ,   o r   ` G L F W _ D O N T _ C A R E ` . 
   *     @ p a r a m [ i n ]   m i n h e i g h t   T h e   m i n i m u m   h e i g h t ,   i n   s c r e e n   c o o r d i n a t e s ,   o f   t h e 
   *     c o n t e n t   a r e a ,   o r   ` G L F W _ D O N T _ C A R E ` . 
   *     @ p a r a m [ i n ]   m a x w i d t h   T h e   m a x i m u m   w i d t h ,   i n   s c r e e n   c o o r d i n a t e s ,   o f   t h e   c o n t e n t 
   *     a r e a ,   o r   ` G L F W _ D O N T _ C A R E ` . 
   *     @ p a r a m [ i n ]   m a x h e i g h t   T h e   m a x i m u m   h e i g h t ,   i n   s c r e e n   c o o r d i n a t e s ,   o f   t h e 
   *     c o n t e n t   a r e a ,   o r   ` G L F W _ D O N T _ C A R E ` . 
   * 
   *     @ e r r o r s   P o s s i b l e   e r r o r s   i n c l u d e   @ r e f   G L F W _ N O T _ I N I T I A L I Z E D ,   @ r e f 
   *     G L F W _ I N V A L I D _ V A L U E   a n d   @ r e f   G L F W _ P L A T F O R M _ E R R O R . 
   * 
   *     @ r e m a r k   I f   y o u   s e t   s i z e   l i m i t s   a n d   a n   a s p e c t   r a t i o   t h a t   c o n f l i c t ,   t h e 
   *     r e s u l t s   a r e   u n d e f i n e d . 
   * 
   *     @ r e m a r k   @ w a y l a n d   T h e   s i z e   l i m i t s   w i l l   n o t   b e   a p p l i e d   u n t i l   t h e   w i n d o w   i s 
   *     a c t u a l l y   r e s i z e d ,   e i t h e r   b y   t h e   u s e r   o r   b y   t h e   c o m p o s i t o r . 
   * 
   *     @ t h r e a d _ s a f e t y   T h i s   f u n c t i o n   m u s t   o n l y   b e   c a l l e d   f r o m   t h e   m a i n   t h r e a d . 
   * 
   *     @ s a   @ r e f   w i n d o w _ s i z e l i m i t s 
   *     @ s a   @ r e f   g l f w S e t W i n d o w A s p e c t R a t i o 
   * 
   *     @ s i n c e   A d d e d   i n   v e r s i o n   3 . 2 . 
   * 
   *     @ i n g r o u p   w i n d o w 
   * / 
 G L F W A P I   v o i d   g l f w S e t W i n d o w S i z e L i m i t s ( G L F W w i n d o w *   w i n d o w ,   i n t   m i n w i d t h ,   i n t   m i n h e i g h t ,   i n t   m a x w i d t h ,   i n t   m a x h e i g h t ) ; 
 
 / * !   @ b r i e f   S e t s   t h e   a s p e c t   r a t i o   o f   t h e   s p e c i f i e d   w i n d o w . 
   * 
   *     T h i s   f u n c t i o n   s e t s   t h e   r e q u i r e d   a s p e c t   r a t i o   o f   t h e   c o n t e n t   a r e a   o f   t h e 
   *     s p e c i f i e d   w i n d o w .     I f   t h e   w i n d o w   i s   f u l l   s c r e e n ,   t h e   a s p e c t   r a t i o   o n l y   t a k e s 
   *     e f f e c t   o n c e   i t   i s   m a d e   w i n d o w e d .     I f   t h e   w i n d o w   i s   n o t   r e s i z a b l e ,   t h i s 
   *     f u n c t i o n   d o e s   n o t h i n g . 
   * 
   *     T h e   a s p e c t   r a t i o   i s   s p e c i f i e d   a s   a   n u m e r a t o r   a n d   a   d e n o m i n a t o r   a n d   b o t h 
   *     v a l u e s   m u s t   b e   g r e a t e r   t h a n   z e r o .     F o r   e x a m p l e ,   t h e   c o m m o n   1 6 : 9   a s p e c t   r a t i o 
   *     i s   s p e c i f i e d   a s   1 6   a n d   9 ,   r e s p e c t i v e l y . 
   * 
   *     I f   t h e   n u m e r a t o r   a n d   d e n o m i n a t o r   i s   s e t   t o   ` G L F W _ D O N T _ C A R E `   t h e n   t h e   a s p e c t 
   *     r a t i o   l i m i t   i s   d i s a b l e d . 
   * 
   *     T h e   a s p e c t   r a t i o   i s   a p p l i e d   i m m e d i a t e l y   t o   a   w i n d o w e d   m o d e   w i n d o w   a n d   m a y 
   *     c a u s e   i t   t o   b e   r e s i z e d . 
   * 
   *     @ p a r a m [ i n ]   w i n d o w   T h e   w i n d o w   t o   s e t   l i m i t s   f o r . 
   *     @ p a r a m [ i n ]   n u m e r   T h e   n u m e r a t o r   o f   t h e   d e s i r e d   a s p e c t   r a t i o ,   o r 
   *     ` G L F W _ D O N T _ C A R E ` . 
   *     @ p a r a m [ i n ]   d e n o m   T h e   d e n o m i n a t o r   o f   t h e   d e s i r e d   a s p e c t   r a t i o ,   o r 
   *     ` G L F W _ D O N T _ C A R E ` . 
   * 
   *     @ e r r o r s   P o s s i b l e   e r r o r s   i n c l u d e   @ r e f   G L F W _ N O T _ I N I T I A L I Z E D ,   @ r e f 
   *     G L F W _ I N V A L I D _ V A L U E   a n d   @ r e f   G L F W _ P L A T F O R M _ E R R O R . 
   * 
   *     @ r e m a r k   I f   y o u   s e t   s i z e   l i m i t s   a n d   a n   a s p e c t   r a t i o   t h a t   c o n f l i c t ,   t h e 
   *     r e s u l t s   a r e   u n d e f i n e d . 
   * 
   *     @ r e m a r k   @ w a y l a n d   T h e   a s p e c t   r a t i o   w i l l   n o t   b e   a p p l i e d   u n t i l   t h e   w i n d o w   i s 
   *     a c t u a l l y   r e s i z e d ,   e i t h e r   b y   t h e   u s e r   o r   b y   t h e   c o m p o s i t o r . 
   * 
   *     @ t h r e a d _ s a f e t y   T h i s   f u n c t i o n   m u s t   o n l y   b e   c a l l e d   f r o m   t h e   m a i n   t h r e a d . 
   * 
   *     @ s a   @ r e f   w i n d o w _ s i z e l i m i t s 
   *     @ s a   @ r e f   g l f w S e t W i n d o w S i z e L i m i t s 
   * 
   *     @ s i n c e   A d d e d   i n   v e r s i o n   3 . 2 . 
   * 
   *     @ i n g r o u p   w i n d o w 
   * / 
 G L F W A P I   v o i d   g l f w S e t W i n d o w A s p e c t R a t i o ( G L F W w i n d o w *   w i n d o w ,   i n t   n u m e r ,   i n t   d e n o m ) ; 
 
 / * !   @ b r i e f   S e t s   t h e   s i z e   o f   t h e   c o n t e n t   a r e a   o f   t h e   s p e c i f i e d   w i n d o w . 
   * 
   *     T h i s   f u n c t i o n   s e t s   t h e   s i z e ,   i n   s c r e e n   c o o r d i n a t e s ,   o f   t h e   c o n t e n t   a r e a   o f 
   *     t h e   s p e c i f i e d   w i n d o w . 
   * 
   *     F o r   f u l l   s c r e e n   w i n d o w s ,   t h i s   f u n c t i o n   u p d a t e s   t h e   r e s o l u t i o n   o f   i t s   d e s i r e d 
   *     v i d e o   m o d e   a n d   s w i t c h e s   t o   t h e   v i d e o   m o d e   c l o s e s t   t o   i t ,   w i t h o u t   a f f e c t i n g 
   *     t h e   w i n d o w ' s   c o n t e x t .     A s   t h e   c o n t e x t   i s   u n a f f e c t e d ,   t h e   b i t   d e p t h s   o f   t h e 
   *     f r a m e b u f f e r   r e m a i n   u n c h a n g e d . 
   * 
   *     I f   y o u   w i s h   t o   u p d a t e   t h e   r e f r e s h   r a t e   o f   t h e   d e s i r e d   v i d e o   m o d e   i n   a d d i t i o n 
   *     t o   i t s   r e s o l u t i o n ,   s e e   @ r e f   g l f w S e t W i n d o w M o n i t o r . 
   * 
   *     T h e   w i n d o w   m a n a g e r   m a y   p u t   l i m i t s   o n   w h a t   s i z e s   a r e   a l l o w e d .     G L F W   c a n n o t 
   *     a n d   s h o u l d   n o t   o v e r r i d e   t h e s e   l i m i t s . 
   * 
   *     @ p a r a m [ i n ]   w i n d o w   T h e   w i n d o w   t o   r e s i z e . 
   *     @ p a r a m [ i n ]   w i d t h   T h e   d e s i r e d   w i d t h ,   i n   s c r e e n   c o o r d i n a t e s ,   o f   t h e   w i n d o w 
   *     c o n t e n t   a r e a . 
   *     @ p a r a m [ i n ]   h e i g h t   T h e   d e s i r e d   h e i g h t ,   i n   s c r e e n   c o o r d i n a t e s ,   o f   t h e   w i n d o w 
   *     c o n t e n t   a r e a . 
   * 
   *     @ e r r o r s   P o s s i b l e   e r r o r s   i n c l u d e   @ r e f   G L F W _ N O T _ I N I T I A L I Z E D   a n d   @ r e f 
   *     G L F W _ P L A T F O R M _ E R R O R . 
   * 
   *     @ r e m a r k   @ w a y l a n d   A   f u l l   s c r e e n   w i n d o w   w i l l   n o t   a t t e m p t   t o   c h a n g e   t h e   m o d e , 
   *     n o   m a t t e r   w h a t   t h e   r e q u e s t e d   s i z e . 
   * 
   *     @ t h r e a d _ s a f e t y   T h i s   f u n c t i o n   m u s t   o n l y   b e   c a l l e d   f r o m   t h e   m a i n   t h r e a d . 
   * 
   *     @ s a   @ r e f   w i n d o w _ s i z e 
   *     @ s a   @ r e f   g l f w G e t W i n d o w S i z e 
   *     @ s a   @ r e f   g l f w S e t W i n d o w M o n i t o r 
   * 
   *     @ s i n c e   A d d e d   i n   v e r s i o n   1 . 0 . 
   *     @ g l f w 3   A d d e d   w i n d o w   h a n d l e   p a r a m e t e r . 
   * 
   *     @ i n g r o u p   w i n d o w 
   * / 
 G L F W A P I   v o i d   g l f w S e t W i n d o w S i z e ( G L F W w i n d o w *   w i n d o w ,   i n t   w i d t h ,   i n t   h e i g h t ) ; 
 
 / * !   @ b r i e f   R e t r i e v e s   t h e   s i z e   o f   t h e   f r a m e b u f f e r   o f   t h e   s p e c i f i e d   w i n d o w . 
   * 
   *     T h i s   f u n c t i o n   r e t r i e v e s   t h e   s i z e ,   i n   p i x e l s ,   o f   t h e   f r a m e b u f f e r   o f   t h e 
   *     s p e c i f i e d   w i n d o w .     I f   y o u   w i s h   t o   r e t r i e v e   t h e   s i z e   o f   t h e   w i n d o w   i n   s c r e e n 
   *     c o o r d i n a t e s ,   s e e   @ r e f   g l f w G e t W i n d o w S i z e . 
   * 
   *     A n y   o r   a l l   o f   t h e   s i z e   a r g u m e n t s   m a y   b e   ` N U L L ` .     I f   a n   e r r o r   o c c u r s ,   a l l 
   *     n o n - ` N U L L `   s i z e   a r g u m e n t s   w i l l   b e   s e t   t o   z e r o . 
   * 
   *     @ p a r a m [ i n ]   w i n d o w   T h e   w i n d o w   w h o s e   f r a m e b u f f e r   t o   q u e r y . 
   *     @ p a r a m [ o u t ]   w i d t h   W h e r e   t o   s t o r e   t h e   w i d t h ,   i n   p i x e l s ,   o f   t h e   f r a m e b u f f e r , 
   *     o r   ` N U L L ` . 
   *     @ p a r a m [ o u t ]   h e i g h t   W h e r e   t o   s t o r e   t h e   h e i g h t ,   i n   p i x e l s ,   o f   t h e   f r a m e b u f f e r , 
   *     o r   ` N U L L ` . 
   * 
   *     @ e r r o r s   P o s s i b l e   e r r o r s   i n c l u d e   @ r e f   G L F W _ N O T _ I N I T I A L I Z E D   a n d   @ r e f 
   *     G L F W _ P L A T F O R M _ E R R O R . 
   * 
   *     @ t h r e a d _ s a f e t y   T h i s   f u n c t i o n   m u s t   o n l y   b e   c a l l e d   f r o m   t h e   m a i n   t h r e a d . 
   * 
   *     @ s a   @ r e f   w i n d o w _ f b s i z e 
   *     @ s a   @ r e f   g l f w S e t F r a m e b u f f e r S i z e C a l l b a c k 
   * 
   *     @ s i n c e   A d d e d   i n   v e r s i o n   3 . 0 . 
   * 
   *     @ i n g r o u p   w i n d o w 
   * / 
 G L F W A P I   v o i d   g l f w G e t F r a m e b u f f e r S i z e ( G L F W w i n d o w *   w i n d o w ,   i n t *   w i d t h ,   i n t *   h e i g h t ) ; 
 
 / * !   @ b r i e f   R e t r i e v e s   t h e   s i z e   o f   t h e   f r a m e   o f   t h e   w i n d o w . 
   * 
   *     T h i s   f u n c t i o n   r e t r i e v e s   t h e   s i z e ,   i n   s c r e e n   c o o r d i n a t e s ,   o f   e a c h   e d g e   o f   t h e 
   *     f r a m e   o f   t h e   s p e c i f i e d   w i n d o w .     T h i s   s i z e   i n c l u d e s   t h e   t i t l e   b a r ,   i f   t h e 
   *     w i n d o w   h a s   o n e .     T h e   s i z e   o f   t h e   f r a m e   m a y   v a r y   d e p e n d i n g   o n   t h e 
   *     [ w i n d o w - r e l a t e d   h i n t s ] ( @ r e f   w i n d o w _ h i n t s _ w n d )   u s e d   t o   c r e a t e   i t . 
   * 
   *     B e c a u s e   t h i s   f u n c t i o n   r e t r i e v e s   t h e   s i z e   o f   e a c h   w i n d o w   f r a m e   e d g e   a n d   n o t 
   *     t h e   o f f s e t   a l o n g   a   p a r t i c u l a r   c o o r d i n a t e   a x i s ,   t h e   r e t r i e v e d   v a l u e s   w i l l 
   *     a l w a y s   b e   z e r o   o r   p o s i t i v e . 
   * 
   *     A n y   o r   a l l   o f   t h e   s i z e   a r g u m e n t s   m a y   b e   ` N U L L ` .     I f   a n   e r r o r   o c c u r s ,   a l l 
   *     n o n - ` N U L L `   s i z e   a r g u m e n t s   w i l l   b e   s e t   t o   z e r o . 
   * 
   *     @ p a r a m [ i n ]   w i n d o w   T h e   w i n d o w   w h o s e   f r a m e   s i z e   t o   q u e r y . 
   *     @ p a r a m [ o u t ]   l e f t   W h e r e   t o   s t o r e   t h e   s i z e ,   i n   s c r e e n   c o o r d i n a t e s ,   o f   t h e   l e f t 
   *     e d g e   o f   t h e   w i n d o w   f r a m e ,   o r   ` N U L L ` . 
   *     @ p a r a m [ o u t ]   t o p   W h e r e   t o   s t o r e   t h e   s i z e ,   i n   s c r e e n   c o o r d i n a t e s ,   o f   t h e   t o p 
   *     e d g e   o f   t h e   w i n d o w   f r a m e ,   o r   ` N U L L ` . 
   *     @ p a r a m [ o u t ]   r i g h t   W h e r e   t o   s t o r e   t h e   s i z e ,   i n   s c r e e n   c o o r d i n a t e s ,   o f   t h e 
   *     r i g h t   e d g e   o f   t h e   w i n d o w   f r a m e ,   o r   ` N U L L ` . 
   *     @ p a r a m [ o u t ]   b o t t o m   W h e r e   t o   s t o r e   t h e   s i z e ,   i n   s c r e e n   c o o r d i n a t e s ,   o f   t h e 
   *     b o t t o m   e d g e   o f   t h e   w i n d o w   f r a m e ,   o r   ` N U L L ` . 
   * 
   *     @ e r r o r s   P o s s i b l e   e r r o r s   i n c l u d e   @ r e f   G L F W _ N O T _ I N I T I A L I Z E D   a n d   @ r e f 
   *     G L F W _ P L A T F O R M _ E R R O R . 
   * 
   *     @ t h r e a d _ s a f e t y   T h i s   f u n c t i o n   m u s t   o n l y   b e   c a l l e d   f r o m   t h e   m a i n   t h r e a d . 
   * 
   *     @ s a   @ r e f   w i n d o w _ s i z e 
   * 
   *     @ s i n c e   A d d e d   i n   v e r s i o n   3 . 1 . 
   * 
   *     @ i n g r o u p   w i n d o w 
   * / 
 G L F W A P I   v o i d   g l f w G e t W i n d o w F r a m e S i z e ( G L F W w i n d o w *   w i n d o w ,   i n t *   l e f t ,   i n t *   t o p ,   i n t *   r i g h t ,   i n t *   b o t t o m ) ; 
 
 / * !   @ b r i e f   R e t r i e v e s   t h e   c o n t e n t   s c a l e   f o r   t h e   s p e c i f i e d   w i n d o w . 
   * 
   *     T h i s   f u n c t i o n   r e t r i e v e s   t h e   c o n t e n t   s c a l e   f o r   t h e   s p e c i f i e d   w i n d o w .     T h e 
   *     c o n t e n t   s c a l e   i s   t h e   r a t i o   b e t w e e n   t h e   c u r r e n t   D P I   a n d   t h e   p l a t f o r m ' s 
   *     d e f a u l t   D P I .     T h i s   i s   e s p e c i a l l y   i m p o r t a n t   f o r   t e x t   a n d   a n y   U I   e l e m e n t s .     I f 
   *     t h e   p i x e l   d i m e n s i o n s   o f   y o u r   U I   s c a l e d   b y   t h i s   l o o k   a p p r o p r i a t e   o n   y o u r 
   *     m a c h i n e   t h e n   i t   s h o u l d   a p p e a r   a t   a   r e a s o n a b l e   s i z e   o n   o t h e r   m a c h i n e s 
   *     r e g a r d l e s s   o f   t h e i r   D P I   a n d   s c a l i n g   s e t t i n g s .     T h i s   r e l i e s   o n   t h e   s y s t e m   D P I 
   *     a n d   s c a l i n g   s e t t i n g s   b e i n g   s o m e w h a t   c o r r e c t . 
   * 
   *     O n   p l a t f o r m s   w h e r e   e a c h   m o n i t o r s   c a n   h a v e   i t s   o w n   c o n t e n t   s c a l e ,   t h e   w i n d o w 
   *     c o n t e n t   s c a l e   w i l l   d e p e n d   o n   w h i c h   m o n i t o r   t h e   s y s t e m   c o n s i d e r s   t h e   w i n d o w 
   *     t o   b e   o n . 
   * 
   *     @ p a r a m [ i n ]   w i n d o w   T h e   w i n d o w   t o   q u e r y . 
   *     @ p a r a m [ o u t ]   x s c a l e   W h e r e   t o   s t o r e   t h e   x - a x i s   c o n t e n t   s c a l e ,   o r   ` N U L L ` . 
   *     @ p a r a m [ o u t ]   y s c a l e   W h e r e   t o   s t o r e   t h e   y - a x i s   c o n t e n t   s c a l e ,   o r   ` N U L L ` . 
   * 
   *     @ e r r o r s   P o s s i b l e   e r r o r s   i n c l u d e   @ r e f   G L F W _ N O T _ I N I T I A L I Z E D   a n d   @ r e f 
   *     G L F W _ P L A T F O R M _ E R R O R . 
   * 
   *     @ t h r e a d _ s a f e t y   T h i s   f u n c t i o n   m u s t   o n l y   b e   c a l l e d   f r o m   t h e   m a i n   t h r e a d . 
   * 
   *     @ s a   @ r e f   w i n d o w _ s c a l e 
   *     @ s a   @ r e f   g l f w S e t W i n d o w C o n t e n t S c a l e C a l l b a c k 
   *     @ s a   @ r e f   g l f w G e t M o n i t o r C o n t e n t S c a l e 
   * 
   *     @ s i n c e   A d d e d   i n   v e r s i o n   3 . 3 . 
   * 
   *     @ i n g r o u p   w i n d o w 
   * / 
 G L F W A P I   v o i d   g l f w G e t W i n d o w C o n t e n t S c a l e ( G L F W w i n d o w *   w i n d o w ,   f l o a t *   x s c a l e ,   f l o a t *   y s c a l e ) ; 
 
 / * !   @ b r i e f   R e t u r n s   t h e   o p a c i t y   o f   t h e   w h o l e   w i n d o w . 
   * 
   *     T h i s   f u n c t i o n   r e t u r n s   t h e   o p a c i t y   o f   t h e   w i n d o w ,   i n c l u d i n g   a n y   d e c o r a t i o n s . 
   * 
   *     T h e   o p a c i t y   ( o r   a l p h a )   v a l u e   i s   a   p o s i t i v e   f i n i t e   n u m b e r   b e t w e e n   z e r o   a n d 
   *     o n e ,   w h e r e   z e r o   i s   f u l l y   t r a n s p a r e n t   a n d   o n e   i s   f u l l y   o p a q u e .     I f   t h e   s y s t e m 
   *     d o e s   n o t   s u p p o r t   w h o l e   w i n d o w   t r a n s p a r e n c y ,   t h i s   f u n c t i o n   a l w a y s   r e t u r n s   o n e . 
   * 
   *     T h e   i n i t i a l   o p a c i t y   v a l u e   f o r   n e w l y   c r e a t e d   w i n d o w s   i s   o n e . 
   * 
   *     @ p a r a m [ i n ]   w i n d o w   T h e   w i n d o w   t o   q u e r y . 
   *     @ r e t u r n   T h e   o p a c i t y   v a l u e   o f   t h e   s p e c i f i e d   w i n d o w . 
   * 
   *     @ e r r o r s   P o s s i b l e   e r r o r s   i n c l u d e   @ r e f   G L F W _ N O T _ I N I T I A L I Z E D   a n d   @ r e f 
   *     G L F W _ P L A T F O R M _ E R R O R . 
   * 
   *     @ t h r e a d _ s a f e t y   T h i s   f u n c t i o n   m u s t   o n l y   b e   c a l l e d   f r o m   t h e   m a i n   t h r e a d . 
   * 
   *     @ s a   @ r e f   w i n d o w _ t r a n s p a r e n c y 
   *     @ s a   @ r e f   g l f w S e t W i n d o w O p a c i t y 
   * 
   *     @ s i n c e   A d d e d   i n   v e r s i o n   3 . 3 . 
   * 
   *     @ i n g r o u p   w i n d o w 
   * / 
 G L F W A P I   f l o a t   g l f w G e t W i n d o w O p a c i t y ( G L F W w i n d o w *   w i n d o w ) ; 
 
 / * !   @ b r i e f   S e t s   t h e   o p a c i t y   o f   t h e   w h o l e   w i n d o w . 
   * 
   *     T h i s   f u n c t i o n   s e t s   t h e   o p a c i t y   o f   t h e   w i n d o w ,   i n c l u d i n g   a n y   d e c o r a t i o n s . 
   * 
   *     T h e   o p a c i t y   ( o r   a l p h a )   v a l u e   i s   a   p o s i t i v e   f i n i t e   n u m b e r   b e t w e e n   z e r o   a n d 
   *     o n e ,   w h e r e   z e r o   i s   f u l l y   t r a n s p a r e n t   a n d   o n e   i s   f u l l y   o p a q u e . 
   * 
   *     T h e   i n i t i a l   o p a c i t y   v a l u e   f o r   n e w l y   c r e a t e d   w i n d o w s   i s   o n e . 
   * 
   *     A   w i n d o w   c r e a t e d   w i t h   f r a m e b u f f e r   t r a n s p a r e n c y   m a y   n o t   u s e   w h o l e   w i n d o w 
   *     t r a n s p a r e n c y .     T h e   r e s u l t s   o f   d o i n g   t h i s   a r e   u n d e f i n e d . 
   * 
   *     @ p a r a m [ i n ]   w i n d o w   T h e   w i n d o w   t o   s e t   t h e   o p a c i t y   f o r . 
   *     @ p a r a m [ i n ]   o p a c i t y   T h e   d e s i r e d   o p a c i t y   o f   t h e   s p e c i f i e d   w i n d o w . 
   * 
   *     @ e r r o r s   P o s s i b l e   e r r o r s   i n c l u d e   @ r e f   G L F W _ N O T _ I N I T I A L I Z E D ,   @ r e f 
   *     G L F W _ P L A T F O R M _ E R R O R   a n d   @ r e f   G L F W _ F E A T U R E _ U N A V A I L A B L E   ( s e e   r e m a r k s ) . 
   * 
   *     @ r e m a r k   @ w a y l a n d   T h e r e   i s   n o   w a y   t o   s e t   a n   o p a c i t y   f a c t o r   f o r   a   w i n d o w . 
   *     T h i s   f u n c t i o n   w i l l   e m i t   @ r e f   G L F W _ F E A T U R E _ U N A V A I L A B L E . 
   * 
   *     @ t h r e a d _ s a f e t y   T h i s   f u n c t i o n   m u s t   o n l y   b e   c a l l e d   f r o m   t h e   m a i n   t h r e a d . 
   * 
   *     @ s a   @ r e f   w i n d o w _ t r a n s p a r e n c y 
   *     @ s a   @ r e f   g l f w G e t W i n d o w O p a c i t y 
   * 
   *     @ s i n c e   A d d e d   i n   v e r s i o n   3 . 3 . 
   * 
   *     @ i n g r o u p   w i n d o w 
   * / 
 G L F W A P I   v o i d   g l f w S e t W i n d o w O p a c i t y ( G L F W w i n d o w *   w i n d o w ,   f l o a t   o p a c i t y ) ; 
 
 / * !   @ b r i e f   I c o n i f i e s   t h e   s p e c i f i e d   w i n d o w . 
   * 
   *     T h i s   f u n c t i o n   i c o n i f i e s   ( m i n i m i z e s )   t h e   s p e c i f i e d   w i n d o w   i f   i t   w a s 
   *     p r e v i o u s l y   r e s t o r e d .     I f   t h e   w i n d o w   i s   a l r e a d y   i c o n i f i e d ,   t h i s   f u n c t i o n   d o e s 
   *     n o t h i n g . 
   * 
   *     I f   t h e   s p e c i f i e d   w i n d o w   i s   a   f u l l   s c r e e n   w i n d o w ,   G L F W   r e s t o r e s   t h e   o r i g i n a l 
   *     v i d e o   m o d e   o f   t h e   m o n i t o r .     T h e   w i n d o w ' s   d e s i r e d   v i d e o   m o d e   i s   s e t   a g a i n 
   *     w h e n   t h e   w i n d o w   i s   r e s t o r e d . 
   * 
   *     @ p a r a m [ i n ]   w i n d o w   T h e   w i n d o w   t o   i c o n i f y . 
   * 
   *     @ e r r o r s   P o s s i b l e   e r r o r s   i n c l u d e   @ r e f   G L F W _ N O T _ I N I T I A L I Z E D   a n d   @ r e f 
   *     G L F W _ P L A T F O R M _ E R R O R . 
   * 
   *     @ r e m a r k   @ w a y l a n d   O n c e   a   w i n d o w   i s   i c o n i f i e d ,   @ r e f   g l f w R e s t o r e W i n d o w   w o n  t 
   *     b e   a b l e   t o   r e s t o r e   i t .     T h i s   i s   a   d e s i g n   d e c i s i o n   o f   t h e   x d g - s h e l l 
   *     p r o t o c o l . 
   * 
   *     @ t h r e a d _ s a f e t y   T h i s   f u n c t i o n   m u s t   o n l y   b e   c a l l e d   f r o m   t h e   m a i n   t h r e a d . 
   * 
   *     @ s a   @ r e f   w i n d o w _ i c o n i f y 
   *     @ s a   @ r e f   g l f w R e s t o r e W i n d o w 
   *     @ s a   @ r e f   g l f w M a x i m i z e W i n d o w 
   * 
   *     @ s i n c e   A d d e d   i n   v e r s i o n   2 . 1 . 
   *     @ g l f w 3   A d d e d   w i n d o w   h a n d l e   p a r a m e t e r . 
   * 
   *     @ i n g r o u p   w i n d o w 
   * / 
 G L F W A P I   v o i d   g l f w I c o n i f y W i n d o w ( G L F W w i n d o w *   w i n d o w ) ; 
 
 / * !   @ b r i e f   R e s t o r e s   t h e   s p e c i f i e d   w i n d o w . 
   * 
   *     T h i s   f u n c t i o n   r e s t o r e s   t h e   s p e c i f i e d   w i n d o w   i f   i t   w a s   p r e v i o u s l y   i c o n i f i e d 
   *     ( m i n i m i z e d )   o r   m a x i m i z e d .     I f   t h e   w i n d o w   i s   a l r e a d y   r e s t o r e d ,   t h i s   f u n c t i o n 
   *     d o e s   n o t h i n g . 
   * 
   *     I f   t h e   s p e c i f i e d   w i n d o w   i s   a n   i c o n i f i e d   f u l l   s c r e e n   w i n d o w ,   i t s   d e s i r e d 
   *     v i d e o   m o d e   i s   s e t   a g a i n   f o r   i t s   m o n i t o r   w h e n   t h e   w i n d o w   i s   r e s t o r e d . 
   * 
   *     @ p a r a m [ i n ]   w i n d o w   T h e   w i n d o w   t o   r e s t o r e . 
   * 
   *     @ e r r o r s   P o s s i b l e   e r r o r s   i n c l u d e   @ r e f   G L F W _ N O T _ I N I T I A L I Z E D   a n d   @ r e f 
   *     G L F W _ P L A T F O R M _ E R R O R . 
   * 
   *     @ t h r e a d _ s a f e t y   T h i s   f u n c t i o n   m u s t   o n l y   b e   c a l l e d   f r o m   t h e   m a i n   t h r e a d . 
   * 
   *     @ s a   @ r e f   w i n d o w _ i c o n i f y 
   *     @ s a   @ r e f   g l f w I c o n i f y W i n d o w 
   *     @ s a   @ r e f   g l f w M a x i m i z e W i n d o w 
   * 
   *     @ s i n c e   A d d e d   i n   v e r s i o n   2 . 1 . 
   *     @ g l f w 3   A d d e d   w i n d o w   h a n d l e   p a r a m e t e r . 
   * 
   *     @ i n g r o u p   w i n d o w 
   * / 
 G L F W A P I   v o i d   g l f w R e s t o r e W i n d o w ( G L F W w i n d o w *   w i n d o w ) ; 
 
 / * !   @ b r i e f   M a x i m i z e s   t h e   s p e c i f i e d   w i n d o w . 
   * 
   *     T h i s   f u n c t i o n   m a x i m i z e s   t h e   s p e c i f i e d   w i n d o w   i f   i t   w a s   p r e v i o u s l y   n o t 
   *     m a x i m i z e d .     I f   t h e   w i n d o w   i s   a l r e a d y   m a x i m i z e d ,   t h i s   f u n c t i o n   d o e s   n o t h i n g . 
   * 
   *     I f   t h e   s p e c i f i e d   w i n d o w   i s   a   f u l l   s c r e e n   w i n d o w ,   t h i s   f u n c t i o n   d o e s   n o t h i n g . 
   * 
   *     @ p a r a m [ i n ]   w i n d o w   T h e   w i n d o w   t o   m a x i m i z e . 
   * 
   *     @ e r r o r s   P o s s i b l e   e r r o r s   i n c l u d e   @ r e f   G L F W _ N O T _ I N I T I A L I Z E D   a n d   @ r e f 
   *     G L F W _ P L A T F O R M _ E R R O R . 
   * 
   *     @ p a r   T h r e a d   S a f e t y 
   *     T h i s   f u n c t i o n   m a y   o n l y   b e   c a l l e d   f r o m   t h e   m a i n   t h r e a d . 
   * 
   *     @ s a   @ r e f   w i n d o w _ i c o n i f y 
   *     @ s a   @ r e f   g l f w I c o n i f y W i n d o w 
   *     @ s a   @ r e f   g l f w R e s t o r e W i n d o w 
   * 
   *     @ s i n c e   A d d e d   i n   G L F W   3 . 2 . 
   * 
   *     @ i n g r o u p   w i n d o w 
   * / 
 G L F W A P I   v o i d   g l f w M a x i m i z e W i n d o w ( G L F W w i n d o w *   w i n d o w ) ; 
 
 / * !   @ b r i e f   M a k e s   t h e   s p e c i f i e d   w i n d o w   v i s i b l e . 
   * 
   *     T h i s   f u n c t i o n   m a k e s   t h e   s p e c i f i e d   w i n d o w   v i s i b l e   i f   i t   w a s   p r e v i o u s l y 
   *     h i d d e n .     I f   t h e   w i n d o w   i s   a l r e a d y   v i s i b l e   o r   i s   i n   f u l l   s c r e e n   m o d e ,   t h i s 
   *     f u n c t i o n   d o e s   n o t h i n g . 
   * 
   *     B y   d e f a u l t ,   w i n d o w e d   m o d e   w i n d o w s   a r e   f o c u s e d   w h e n   s h o w n 
   *     S e t   t h e   [ G L F W _ F O C U S _ O N _ S H O W ] ( @ r e f   G L F W _ F O C U S _ O N _ S H O W _ h i n t )   w i n d o w   h i n t 
   *     t o   c h a n g e   t h i s   b e h a v i o r   f o r   a l l   n e w l y   c r e a t e d   w i n d o w s ,   o r   c h a n g e   t h e 
   *     b e h a v i o r   f o r   a n   e x i s t i n g   w i n d o w   w i t h   @ r e f   g l f w S e t W i n d o w A t t r i b . 
   * 
   *     @ p a r a m [ i n ]   w i n d o w   T h e   w i n d o w   t o   m a k e   v i s i b l e . 
   * 
   *     @ e r r o r s   P o s s i b l e   e r r o r s   i n c l u d e   @ r e f   G L F W _ N O T _ I N I T I A L I Z E D   a n d   @ r e f 
   *     G L F W _ P L A T F O R M _ E R R O R . 
   * 
   *     @ r e m a r k   @ w a y l a n d   B e c a u s e   W a y l a n d   w a n t s   e v e r y   f r a m e   o f   t h e   d e s k t o p   t o   b e 
   *     c o m p l e t e ,   t h i s   f u n c t i o n   d o e s   n o t   i m m e d i a t e l y   m a k e   t h e   w i n d o w   v i s i b l e . 
   *     I n s t e a d   i t   w i l l   b e c o m e   v i s i b l e   t h e   n e x t   t i m e   t h e   w i n d o w   f r a m e b u f f e r   i s 
   *     u p d a t e d   a f t e r   t h i s   c a l l . 
   * 
   *     @ t h r e a d _ s a f e t y   T h i s   f u n c t i o n   m u s t   o n l y   b e   c a l l e d   f r o m   t h e   m a i n   t h r e a d . 
   * 
   *     @ s a   @ r e f   w i n d o w _ h i d e 
   *     @ s a   @ r e f   g l f w H i d e W i n d o w 
   * 
   *     @ s i n c e   A d d e d   i n   v e r s i o n   3 . 0 . 
   * 
   *     @ i n g r o u p   w i n d o w 
   * / 
 G L F W A P I   v o i d   g l f w S h o w W i n d o w ( G L F W w i n d o w *   w i n d o w ) ; 
 
 / * !   @ b r i e f   H i d e s   t h e   s p e c i f i e d   w i n d o w . 
   * 
   *     T h i s   f u n c t i o n   h i d e s   t h e   s p e c i f i e d   w i n d o w   i f   i t   w a s   p r e v i o u s l y   v i s i b l e .     I f 
   *     t h e   w i n d o w   i s   a l r e a d y   h i d d e n   o r   i s   i n   f u l l   s c r e e n   m o d e ,   t h i s   f u n c t i o n   d o e s 
   *     n o t h i n g . 
   * 
   *     @ p a r a m [ i n ]   w i n d o w   T h e   w i n d o w   t o   h i d e . 
   * 
   *     @ e r r o r s   P o s s i b l e   e r r o r s   i n c l u d e   @ r e f   G L F W _ N O T _ I N I T I A L I Z E D   a n d   @ r e f 
   *     G L F W _ P L A T F O R M _ E R R O R . 
   * 
   *     @ t h r e a d _ s a f e t y   T h i s   f u n c t i o n   m u s t   o n l y   b e   c a l l e d   f r o m   t h e   m a i n   t h r e a d . 
   * 
   *     @ s a   @ r e f   w i n d o w _ h i d e 
   *     @ s a   @ r e f   g l f w S h o w W i n d o w 
   * 
   *     @ s i n c e   A d d e d   i n   v e r s i o n   3 . 0 . 
   * 
   *     @ i n g r o u p   w i n d o w 
   * / 
 G L F W A P I   v o i d   g l f w H i d e W i n d o w ( G L F W w i n d o w *   w i n d o w ) ; 
 
 / * !   @ b r i e f   B r i n g s   t h e   s p e c i f i e d   w i n d o w   t o   f r o n t   a n d   s e t s   i n p u t   f o c u s . 
   * 
   *     T h i s   f u n c t i o n   b r i n g s   t h e   s p e c i f i e d   w i n d o w   t o   f r o n t   a n d   s e t s   i n p u t   f o c u s . 
   *     T h e   w i n d o w   s h o u l d   a l r e a d y   b e   v i s i b l e   a n d   n o t   i c o n i f i e d . 
   * 
   *     B y   d e f a u l t ,   b o t h   w i n d o w e d   a n d   f u l l   s c r e e n   m o d e   w i n d o w s   a r e   f o c u s e d   w h e n 
   *     i n i t i a l l y   c r e a t e d .     S e t   t h e   [ G L F W _ F O C U S E D ] ( @ r e f   G L F W _ F O C U S E D _ h i n t )   t o 
   *     d i s a b l e   t h i s   b e h a v i o r . 
   * 
   *     A l s o   b y   d e f a u l t ,   w i n d o w e d   m o d e   w i n d o w s   a r e   f o c u s e d   w h e n   s h o w n 
   *     w i t h   @ r e f   g l f w S h o w W i n d o w .   S e t   t h e 
   *     [ G L F W _ F O C U S _ O N _ S H O W ] ( @ r e f   G L F W _ F O C U S _ O N _ S H O W _ h i n t )   t o   d i s a b l e   t h i s   b e h a v i o r . 
   * 
   *     _ _ D o   n o t   u s e   t h i s   f u n c t i o n _ _   t o   s t e a l   f o c u s   f r o m   o t h e r   a p p l i c a t i o n s   u n l e s s 
   *     y o u   a r e   c e r t a i n   t h a t   i s   w h a t   t h e   u s e r   w a n t s .     F o c u s   s t e a l i n g   c a n   b e 
   *     e x t r e m e l y   d i s r u p t i v e . 
   * 
   *     F o r   a   l e s s   d i s r u p t i v e   w a y   o f   g e t t i n g   t h e   u s e r ' s   a t t e n t i o n ,   s e e 
   *     [ a t t e n t i o n   r e q u e s t s ] ( @ r e f   w i n d o w _ a t t e n t i o n ) . 
   * 
   *     @ p a r a m [ i n ]   w i n d o w   T h e   w i n d o w   t o   g i v e   i n p u t   f o c u s . 
   * 
   *     @ e r r o r s   P o s s i b l e   e r r o r s   i n c l u d e   @ r e f   G L F W _ N O T _ I N I T I A L I Z E D ,   @ r e f 
   *     G L F W _ P L A T F O R M _ E R R O R   a n d   @ r e f   G L F W _ F E A T U R E _ U N A V A I L A B L E   ( s e e   r e m a r k s ) . 
   * 
   *     @ r e m a r k   @ w a y l a n d   I t   i s   n o t   p o s s i b l e   f o r   a n   a p p l i c a t i o n   t o   s e t   t h e   i n p u t 
   *     f o c u s .     T h i s   f u n c t i o n   w i l l   e m i t   @ r e f   G L F W _ F E A T U R E _ U N A V A I L A B L E . 
   * 
   *     @ t h r e a d _ s a f e t y   T h i s   f u n c t i o n   m u s t   o n l y   b e   c a l l e d   f r o m   t h e   m a i n   t h r e a d . 
   * 
   *     @ s a   @ r e f   w i n d o w _ f o c u s 
   *     @ s a   @ r e f   w i n d o w _ a t t e n t i o n 
   * 
   *     @ s i n c e   A d d e d   i n   v e r s i o n   3 . 2 . 
   * 
   *     @ i n g r o u p   w i n d o w 
   * / 
 G L F W A P I   v o i d   g l f w F o c u s W i n d o w ( G L F W w i n d o w *   w i n d o w ) ; 
 
 / * !   @ b r i e f   R e q u e s t s   u s e r   a t t e n t i o n   t o   t h e   s p e c i f i e d   w i n d o w . 
   * 
   *     T h i s   f u n c t i o n   r e q u e s t s   u s e r   a t t e n t i o n   t o   t h e   s p e c i f i e d   w i n d o w .     O n 
   *     p l a t f o r m s   w h e r e   t h i s   i s   n o t   s u p p o r t e d ,   a t t e n t i o n   i s   r e q u e s t e d   t o   t h e 
   *     a p p l i c a t i o n   a s   a   w h o l e . 
   * 
   *     O n c e   t h e   u s e r   h a s   g i v e n   a t t e n t i o n ,   u s u a l l y   b y   f o c u s i n g   t h e   w i n d o w   o r 
   *     a p p l i c a t i o n ,   t h e   s y s t e m   w i l l   e n d   t h e   r e q u e s t   a u t o m a t i c a l l y . 
   * 
   *     @ p a r a m [ i n ]   w i n d o w   T h e   w i n d o w   t o   r e q u e s t   a t t e n t i o n   t o . 
   * 
   *     @ e r r o r s   P o s s i b l e   e r r o r s   i n c l u d e   @ r e f   G L F W _ N O T _ I N I T I A L I Z E D   a n d   @ r e f 
   *     G L F W _ P L A T F O R M _ E R R O R . 
   * 
   *     @ r e m a r k   @ m a c o s   A t t e n t i o n   i s   r e q u e s t e d   t o   t h e   a p p l i c a t i o n   a s   a   w h o l e ,   n o t   t h e 
   *     s p e c i f i c   w i n d o w . 
   * 
   *     @ t h r e a d _ s a f e t y   T h i s   f u n c t i o n   m u s t   o n l y   b e   c a l l e d   f r o m   t h e   m a i n   t h r e a d . 
   * 
   *     @ s a   @ r e f   w i n d o w _ a t t e n t i o n 
   * 
   *     @ s i n c e   A d d e d   i n   v e r s i o n   3 . 3 . 
   * 
   *     @ i n g r o u p   w i n d o w 
   * / 
 G L F W A P I   v o i d   g l f w R e q u e s t W i n d o w A t t e n t i o n ( G L F W w i n d o w *   w i n d o w ) ; 
 
 / * !   @ b r i e f   R e t u r n s   t h e   m o n i t o r   t h a t   t h e   w i n d o w   u s e s   f o r   f u l l   s c r e e n   m o d e . 
   * 
   *     T h i s   f u n c t i o n   r e t u r n s   t h e   h a n d l e   o f   t h e   m o n i t o r   t h a t   t h e   s p e c i f i e d   w i n d o w   i s 
   *     i n   f u l l   s c r e e n   o n . 
   * 
   *     @ p a r a m [ i n ]   w i n d o w   T h e   w i n d o w   t o   q u e r y . 
   *     @ r e t u r n   T h e   m o n i t o r ,   o r   ` N U L L `   i f   t h e   w i n d o w   i s   i n   w i n d o w e d   m o d e   o r   a n 
   *     [ e r r o r ] ( @ r e f   e r r o r _ h a n d l i n g )   o c c u r r e d . 
   * 
   *     @ e r r o r s   P o s s i b l e   e r r o r s   i n c l u d e   @ r e f   G L F W _ N O T _ I N I T I A L I Z E D . 
   * 
   *     @ t h r e a d _ s a f e t y   T h i s   f u n c t i o n   m u s t   o n l y   b e   c a l l e d   f r o m   t h e   m a i n   t h r e a d . 
   * 
   *     @ s a   @ r e f   w i n d o w _ m o n i t o r 
   *     @ s a   @ r e f   g l f w S e t W i n d o w M o n i t o r 
   * 
   *     @ s i n c e   A d d e d   i n   v e r s i o n   3 . 0 . 
   * 
   *     @ i n g r o u p   w i n d o w 
   * / 
 G L F W A P I   G L F W m o n i t o r *   g l f w G e t W i n d o w M o n i t o r ( G L F W w i n d o w *   w i n d o w ) ; 
 
 / * !   @ b r i e f   S e t s   t h e   m o d e ,   m o n i t o r ,   v i d e o   m o d e   a n d   p l a c e m e n t   o f   a   w i n d o w . 
   * 
   *     T h i s   f u n c t i o n   s e t s   t h e   m o n i t o r   t h a t   t h e   w i n d o w   u s e s   f o r   f u l l   s c r e e n   m o d e   o r , 
   *     i f   t h e   m o n i t o r   i s   ` N U L L ` ,   m a k e s   i t   w i n d o w e d   m o d e . 
   * 
   *     W h e n   s e t t i n g   a   m o n i t o r ,   t h i s   f u n c t i o n   u p d a t e s   t h e   w i d t h ,   h e i g h t   a n d   r e f r e s h 
   *     r a t e   o f   t h e   d e s i r e d   v i d e o   m o d e   a n d   s w i t c h e s   t o   t h e   v i d e o   m o d e   c l o s e s t   t o   i t . 
   *     T h e   w i n d o w   p o s i t i o n   i s   i g n o r e d   w h e n   s e t t i n g   a   m o n i t o r . 
   * 
   *     W h e n   t h e   m o n i t o r   i s   ` N U L L ` ,   t h e   p o s i t i o n ,   w i d t h   a n d   h e i g h t   a r e   u s e d   t o 
   *     p l a c e   t h e   w i n d o w   c o n t e n t   a r e a .     T h e   r e f r e s h   r a t e   i s   i g n o r e d   w h e n   n o   m o n i t o r 
   *     i s   s p e c i f i e d . 
   * 
   *     I f   y o u   o n l y   w i s h   t o   u p d a t e   t h e   r e s o l u t i o n   o f   a   f u l l   s c r e e n   w i n d o w   o r   t h e 
   *     s i z e   o f   a   w i n d o w e d   m o d e   w i n d o w ,   s e e   @ r e f   g l f w S e t W i n d o w S i z e . 
   * 
   *     W h e n   a   w i n d o w   t r a n s i t i o n s   f r o m   f u l l   s c r e e n   t o   w i n d o w e d   m o d e ,   t h i s   f u n c t i o n 
   *     r e s t o r e s   a n y   p r e v i o u s   w i n d o w   s e t t i n g s   s u c h   a s   w h e t h e r   i t   i s   d e c o r a t e d , 
   *     f l o a t i n g ,   r e s i z a b l e ,   h a s   s i z e   o r   a s p e c t   r a t i o   l i m i t s ,   e t c . 
   * 
   *     @ p a r a m [ i n ]   w i n d o w   T h e   w i n d o w   w h o s e   m o n i t o r ,   s i z e   o r   v i d e o   m o d e   t o   s e t . 
   *     @ p a r a m [ i n ]   m o n i t o r   T h e   d e s i r e d   m o n i t o r ,   o r   ` N U L L `   t o   s e t   w i n d o w e d   m o d e . 
   *     @ p a r a m [ i n ]   x p o s   T h e   d e s i r e d   x - c o o r d i n a t e   o f   t h e   u p p e r - l e f t   c o r n e r   o f   t h e 
   *     c o n t e n t   a r e a . 
   *     @ p a r a m [ i n ]   y p o s   T h e   d e s i r e d   y - c o o r d i n a t e   o f   t h e   u p p e r - l e f t   c o r n e r   o f   t h e 
   *     c o n t e n t   a r e a . 
   *     @ p a r a m [ i n ]   w i d t h   T h e   d e s i r e d   w i t h ,   i n   s c r e e n   c o o r d i n a t e s ,   o f   t h e   c o n t e n t 
   *     a r e a   o r   v i d e o   m o d e . 
   *     @ p a r a m [ i n ]   h e i g h t   T h e   d e s i r e d   h e i g h t ,   i n   s c r e e n   c o o r d i n a t e s ,   o f   t h e   c o n t e n t 
   *     a r e a   o r   v i d e o   m o d e . 
   *     @ p a r a m [ i n ]   r e f r e s h R a t e   T h e   d e s i r e d   r e f r e s h   r a t e ,   i n   H z ,   o f   t h e   v i d e o   m o d e , 
   *     o r   ` G L F W _ D O N T _ C A R E ` . 
   * 
   *     @ e r r o r s   P o s s i b l e   e r r o r s   i n c l u d e   @ r e f   G L F W _ N O T _ I N I T I A L I Z E D   a n d   @ r e f 
   *     G L F W _ P L A T F O R M _ E R R O R . 
   * 
   *     @ r e m a r k   T h e   O p e n G L   o r   O p e n G L   E S   c o n t e x t   w i l l   n o t   b e   d e s t r o y e d   o r   o t h e r w i s e 
   *     a f f e c t e d   b y   a n y   r e s i z i n g   o r   m o d e   s w i t c h i n g ,   a l t h o u g h   y o u   m a y   n e e d   t o   u p d a t e 
   *     y o u r   v i e w p o r t   i f   t h e   f r a m e b u f f e r   s i z e   h a s   c h a n g e d . 
   * 
   *     @ r e m a r k   @ w a y l a n d   T h e   d e s i r e d   w i n d o w   p o s i t i o n   i s   i g n o r e d ,   a s   t h e r e   i s   n o   w a y 
   *     f o r   a n   a p p l i c a t i o n   t o   s e t   t h i s   p r o p e r t y . 
   * 
   *     @ r e m a r k   @ w a y l a n d   S e t t i n g   t h e   w i n d o w   t o   f u l l   s c r e e n   w i l l   n o t   a t t e m p t   t o 
   *     c h a n g e   t h e   m o d e ,   n o   m a t t e r   w h a t   t h e   r e q u e s t e d   s i z e   o r   r e f r e s h   r a t e . 
   * 
   *     @ t h r e a d _ s a f e t y   T h i s   f u n c t i o n   m u s t   o n l y   b e   c a l l e d   f r o m   t h e   m a i n   t h r e a d . 
   * 
   *     @ s a   @ r e f   w i n d o w _ m o n i t o r 
   *     @ s a   @ r e f   w i n d o w _ f u l l _ s c r e e n 
   *     @ s a   @ r e f   g l f w G e t W i n d o w M o n i t o r 
   *     @ s a   @ r e f   g l f w S e t W i n d o w S i z e 
   * 
   *     @ s i n c e   A d d e d   i n   v e r s i o n   3 . 2 . 
   * 
   *     @ i n g r o u p   w i n d o w 
   * / 
 G L F W A P I   v o i d   g l f w S e t W i n d o w M o n i t o r ( G L F W w i n d o w *   w i n d o w ,   G L F W m o n i t o r *   m o n i t o r ,   i n t   x p o s ,   i n t   y p o s ,   i n t   w i d t h ,   i n t   h e i g h t ,   i n t   r e f r e s h R a t e ) ; 
 
 / * !   @ b r i e f   R e t u r n s   a n   a t t r i b u t e   o f   t h e   s p e c i f i e d   w i n d o w . 
   * 
   *     T h i s   f u n c t i o n   r e t u r n s   t h e   v a l u e   o f   a n   a t t r i b u t e   o f   t h e   s p e c i f i e d   w i n d o w   o r 
   *     i t s   O p e n G L   o r   O p e n G L   E S   c o n t e x t . 
   * 
   *     @ p a r a m [ i n ]   w i n d o w   T h e   w i n d o w   t o   q u e r y . 
   *     @ p a r a m [ i n ]   a t t r i b   T h e   [ w i n d o w   a t t r i b u t e ] ( @ r e f   w i n d o w _ a t t r i b s )   w h o s e   v a l u e   t o 
   *     r e t u r n . 
   *     @ r e t u r n   T h e   v a l u e   o f   t h e   a t t r i b u t e ,   o r   z e r o   i f   a n 
   *     [ e r r o r ] ( @ r e f   e r r o r _ h a n d l i n g )   o c c u r r e d . 
   * 
   *     @ e r r o r s   P o s s i b l e   e r r o r s   i n c l u d e   @ r e f   G L F W _ N O T _ I N I T I A L I Z E D ,   @ r e f 
   *     G L F W _ I N V A L I D _ E N U M   a n d   @ r e f   G L F W _ P L A T F O R M _ E R R O R . 
   * 
   *     @ r e m a r k   F r a m e b u f f e r   r e l a t e d   h i n t s   a r e   n o t   w i n d o w   a t t r i b u t e s .     S e e   @ r e f 
   *     w i n d o w _ a t t r i b s _ f b   f o r   m o r e   i n f o r m a t i o n . 
   * 
   *     @ r e m a r k   Z e r o   i s   a   v a l i d   v a l u e   f o r   m a n y   w i n d o w   a n d   c o n t e x t   r e l a t e d 
   *     a t t r i b u t e s   s o   y o u   c a n n o t   u s e   a   r e t u r n   v a l u e   o f   z e r o   a s   a n   i n d i c a t i o n   o f 
   *     e r r o r s .     H o w e v e r ,   t h i s   f u n c t i o n   s h o u l d   n o t   f a i l   a s   l o n g   a s   i t   i s   p a s s e d 
   *     v a l i d   a r g u m e n t s   a n d   t h e   l i b r a r y   h a s   b e e n   [ i n i t i a l i z e d ] ( @ r e f   i n t r o _ i n i t ) . 
   * 
   *     @ r e m a r k   @ w a y l a n d   T h e   W a y l a n d   p r o t o c o l   p r o v i d e s   n o   w a y   t o   c h e c k   w h e t h e r   a 
   *     w i n d o w   i s   i c o n f i e d ,   s o   @ r e f   G L F W _ I C O N I F I E D   a l w a y s   r e t u r n s   ` G L F W _ F A L S E ` . 
   * 
   *     @ t h r e a d _ s a f e t y   T h i s   f u n c t i o n   m u s t   o n l y   b e   c a l l e d   f r o m   t h e   m a i n   t h r e a d . 
   * 
   *     @ s a   @ r e f   w i n d o w _ a t t r i b s 
   *     @ s a   @ r e f   g l f w S e t W i n d o w A t t r i b 
   * 
   *     @ s i n c e   A d d e d   i n   v e r s i o n   3 . 0 .     R e p l a c e s   ` g l f w G e t W i n d o w P a r a m `   a n d 
   *     ` g l f w G e t G L V e r s i o n ` . 
   * 
   *     @ i n g r o u p   w i n d o w 
   * / 
 G L F W A P I   i n t   g l f w G e t W i n d o w A t t r i b ( G L F W w i n d o w *   w i n d o w ,   i n t   a t t r i b ) ; 
 
 / * !   @ b r i e f   S e t s   a n   a t t r i b u t e   o f   t h e   s p e c i f i e d   w i n d o w . 
   * 
   *     T h i s   f u n c t i o n   s e t s   t h e   v a l u e   o f   a n   a t t r i b u t e   o f   t h e   s p e c i f i e d   w i n d o w . 
   * 
   *     T h e   s u p p o r t e d   a t t r i b u t e s   a r e   [ G L F W _ D E C O R A T E D ] ( @ r e f   G L F W _ D E C O R A T E D _ a t t r i b ) , 
   *     [ G L F W _ R E S I Z A B L E ] ( @ r e f   G L F W _ R E S I Z A B L E _ a t t r i b ) , 
   *     [ G L F W _ F L O A T I N G ] ( @ r e f   G L F W _ F L O A T I N G _ a t t r i b ) , 
   *     [ G L F W _ A U T O _ I C O N I F Y ] ( @ r e f   G L F W _ A U T O _ I C O N I F Y _ a t t r i b )   a n d 
   *     [ G L F W _ F O C U S _ O N _ S H O W ] ( @ r e f   G L F W _ F O C U S _ O N _ S H O W _ a t t r i b ) . 
   *     [ G L F W _ M O U S E _ P A S S T H R O U G H ] ( @ r e f   G L F W _ M O U S E _ P A S S T H R O U G H _ a t t r i b ) 
   * 
   *     S o m e   o f   t h e s e   a t t r i b u t e s   a r e   i g n o r e d   f o r   f u l l   s c r e e n   w i n d o w s .     T h e   n e w 
   *     v a l u e   w i l l   t a k e   e f f e c t   i f   t h e   w i n d o w   i s   l a t e r   m a d e   w i n d o w e d . 
   * 
   *     S o m e   o f   t h e s e   a t t r i b u t e s   a r e   i g n o r e d   f o r   w i n d o w e d   m o d e   w i n d o w s .     T h e   n e w 
   *     v a l u e   w i l l   t a k e   e f f e c t   i f   t h e   w i n d o w   i s   l a t e r   m a d e   f u l l   s c r e e n . 
   * 
   *     @ p a r a m [ i n ]   w i n d o w   T h e   w i n d o w   t o   s e t   t h e   a t t r i b u t e   f o r . 
   *     @ p a r a m [ i n ]   a t t r i b   A   s u p p o r t e d   w i n d o w   a t t r i b u t e . 
   *     @ p a r a m [ i n ]   v a l u e   ` G L F W _ T R U E `   o r   ` G L F W _ F A L S E ` . 
   * 
   *     @ e r r o r s   P o s s i b l e   e r r o r s   i n c l u d e   @ r e f   G L F W _ N O T _ I N I T I A L I Z E D ,   @ r e f 
   *     G L F W _ I N V A L I D _ E N U M ,   @ r e f   G L F W _ I N V A L I D _ V A L U E ,   @ r e f   G L F W _ P L A T F O R M _ E R R O R   a n d   @ r e f 
   *     G L F W _ F E A T U R E _ U N A V A I L A B L E . 
   * 
   *     @ r e m a r k   C a l l i n g   @ r e f   g l f w G e t W i n d o w A t t r i b   w i l l   a l w a y s   r e t u r n   t h e   l a t e s t 
   *     v a l u e ,   e v e n   i f   t h a t   v a l u e   i s   i g n o r e d   b y   t h e   c u r r e n t   m o d e   o f   t h e   w i n d o w . 
   * 
   *     @ t h r e a d _ s a f e t y   T h i s   f u n c t i o n   m u s t   o n l y   b e   c a l l e d   f r o m   t h e   m a i n   t h r e a d . 
   * 
   *     @ s a   @ r e f   w i n d o w _ a t t r i b s 
   *     @ s a   @ r e f   g l f w G e t W i n d o w A t t r i b 
   * 
   *     @ s i n c e   A d d e d   i n   v e r s i o n   3 . 3 . 
   * 
   *     @ i n g r o u p   w i n d o w 
   * / 
 G L F W A P I   v o i d   g l f w S e t W i n d o w A t t r i b ( G L F W w i n d o w *   w i n d o w ,   i n t   a t t r i b ,   i n t   v a l u e ) ; 
 
 / * !   @ b r i e f   S e t s   t h e   u s e r   p o i n t e r   o f   t h e   s p e c i f i e d   w i n d o w . 
   * 
   *     T h i s   f u n c t i o n   s e t s   t h e   u s e r - d e f i n e d   p o i n t e r   o f   t h e   s p e c i f i e d   w i n d o w .     T h e 
   *     c u r r e n t   v a l u e   i s   r e t a i n e d   u n t i l   t h e   w i n d o w   i s   d e s t r o y e d .     T h e   i n i t i a l   v a l u e 
   *     i s   ` N U L L ` . 
   * 
   *     @ p a r a m [ i n ]   w i n d o w   T h e   w i n d o w   w h o s e   p o i n t e r   t o   s e t . 
   *     @ p a r a m [ i n ]   p o i n t e r   T h e   n e w   v a l u e . 
   * 
   *     @ e r r o r s   P o s s i b l e   e r r o r s   i n c l u d e   @ r e f   G L F W _ N O T _ I N I T I A L I Z E D . 
   * 
   *     @ t h r e a d _ s a f e t y   T h i s   f u n c t i o n   m a y   b e   c a l l e d   f r o m   a n y   t h r e a d .     A c c e s s   i s   n o t 
   *     s y n c h r o n i z e d . 
   * 
   *     @ s a   @ r e f   w i n d o w _ u s e r p t r 
   *     @ s a   @ r e f   g l f w G e t W i n d o w U s e r P o i n t e r 
   * 
   *     @ s i n c e   A d d e d   i n   v e r s i o n   3 . 0 . 
   * 
   *     @ i n g r o u p   w i n d o w 
   * / 
 G L F W A P I   v o i d   g l f w S e t W i n d o w U s e r P o i n t e r ( G L F W w i n d o w *   w i n d o w ,   v o i d *   p o i n t e r ) ; 
 
 / * !   @ b r i e f   R e t u r n s   t h e   u s e r   p o i n t e r   o f   t h e   s p e c i f i e d   w i n d o w . 
   * 
   *     T h i s   f u n c t i o n   r e t u r n s   t h e   c u r r e n t   v a l u e   o f   t h e   u s e r - d e f i n e d   p o i n t e r   o f   t h e 
   *     s p e c i f i e d   w i n d o w .     T h e   i n i t i a l   v a l u e   i s   ` N U L L ` . 
   * 
   *     @ p a r a m [ i n ]   w i n d o w   T h e   w i n d o w   w h o s e   p o i n t e r   t o   r e t u r n . 
   * 
   *     @ e r r o r s   P o s s i b l e   e r r o r s   i n c l u d e   @ r e f   G L F W _ N O T _ I N I T I A L I Z E D . 
   * 
   *     @ t h r e a d _ s a f e t y   T h i s   f u n c t i o n   m a y   b e   c a l l e d   f r o m   a n y   t h r e a d .     A c c e s s   i s   n o t 
   *     s y n c h r o n i z e d . 
   * 
   *     @ s a   @ r e f   w i n d o w _ u s e r p t r 
   *     @ s a   @ r e f   g l f w S e t W i n d o w U s e r P o i n t e r 
   * 
   *     @ s i n c e   A d d e d   i n   v e r s i o n   3 . 0 . 
   * 
   *     @ i n g r o u p   w i n d o w 
   * / 
 G L F W A P I   v o i d *   g l f w G e t W i n d o w U s e r P o i n t e r ( G L F W w i n d o w *   w i n d o w ) ; 
 
 / * !   @ b r i e f   S e t s   t h e   p o s i t i o n   c a l l b a c k   f o r   t h e   s p e c i f i e d   w i n d o w . 
   * 
   *     T h i s   f u n c t i o n   s e t s   t h e   p o s i t i o n   c a l l b a c k   o f   t h e   s p e c i f i e d   w i n d o w ,   w h i c h   i s 
   *     c a l l e d   w h e n   t h e   w i n d o w   i s   m o v e d .     T h e   c a l l b a c k   i s   p r o v i d e d   w i t h   t h e 
   *     p o s i t i o n ,   i n   s c r e e n   c o o r d i n a t e s ,   o f   t h e   u p p e r - l e f t   c o r n e r   o f   t h e   c o n t e n t 
   *     a r e a   o f   t h e   w i n d o w . 
   * 
   *     @ p a r a m [ i n ]   w i n d o w   T h e   w i n d o w   w h o s e   c a l l b a c k   t o   s e t . 
   *     @ p a r a m [ i n ]   c a l l b a c k   T h e   n e w   c a l l b a c k ,   o r   ` N U L L `   t o   r e m o v e   t h e   c u r r e n t l y   s e t 
   *     c a l l b a c k . 
   *     @ r e t u r n   T h e   p r e v i o u s l y   s e t   c a l l b a c k ,   o r   ` N U L L `   i f   n o   c a l l b a c k   w a s   s e t   o r   t h e 
   *     l i b r a r y   h a d   n o t   b e e n   [ i n i t i a l i z e d ] ( @ r e f   i n t r o _ i n i t ) . 
   * 
   *     @ c a l l b a c k _ s i g n a t u r e 
   *     @ c o d e 
   *     v o i d   f u n c t i o n _ n a m e ( G L F W w i n d o w *   w i n d o w ,   i n t   x p o s ,   i n t   y p o s ) 
   *     @ e n d c o d e 
   *     F o r   m o r e   i n f o r m a t i o n   a b o u t   t h e   c a l l b a c k   p a r a m e t e r s ,   s e e   t h e 
   *     [ f u n c t i o n   p o i n t e r   t y p e ] ( @ r e f   G L F W w i n d o w p o s f u n ) . 
   * 
   *     @ e r r o r s   P o s s i b l e   e r r o r s   i n c l u d e   @ r e f   G L F W _ N O T _ I N I T I A L I Z E D . 
   * 
   *     @ r e m a r k   @ w a y l a n d   T h i s   c a l l b a c k   w i l l   n e v e r   b e   c a l l e d ,   a s   t h e r e   i s   n o   w a y   f o r 
   *     a n   a p p l i c a t i o n   t o   k n o w   i t s   g l o b a l   p o s i t i o n . 
   * 
   *     @ t h r e a d _ s a f e t y   T h i s   f u n c t i o n   m u s t   o n l y   b e   c a l l e d   f r o m   t h e   m a i n   t h r e a d . 
   * 
   *     @ s a   @ r e f   w i n d o w _ p o s 
   * 
   *     @ s i n c e   A d d e d   i n   v e r s i o n   3 . 0 . 
   * 
   *     @ i n g r o u p   w i n d o w 
   * / 
 G L F W A P I   G L F W w i n d o w p o s f u n   g l f w S e t W i n d o w P o s C a l l b a c k ( G L F W w i n d o w *   w i n d o w ,   G L F W w i n d o w p o s f u n   c a l l b a c k ) ; 
 
 / * !   @ b r i e f   S e t s   t h e   s i z e   c a l l b a c k   f o r   t h e   s p e c i f i e d   w i n d o w . 
   * 
   *     T h i s   f u n c t i o n   s e t s   t h e   s i z e   c a l l b a c k   o f   t h e   s p e c i f i e d   w i n d o w ,   w h i c h   i s 
   *     c a l l e d   w h e n   t h e   w i n d o w   i s   r e s i z e d .     T h e   c a l l b a c k   i s   p r o v i d e d   w i t h   t h e   s i z e , 
   *     i n   s c r e e n   c o o r d i n a t e s ,   o f   t h e   c o n t e n t   a r e a   o f   t h e   w i n d o w . 
   * 
   *     @ p a r a m [ i n ]   w i n d o w   T h e   w i n d o w   w h o s e   c a l l b a c k   t o   s e t . 
   *     @ p a r a m [ i n ]   c a l l b a c k   T h e   n e w   c a l l b a c k ,   o r   ` N U L L `   t o   r e m o v e   t h e   c u r r e n t l y   s e t 
   *     c a l l b a c k . 
   *     @ r e t u r n   T h e   p r e v i o u s l y   s e t   c a l l b a c k ,   o r   ` N U L L `   i f   n o   c a l l b a c k   w a s   s e t   o r   t h e 
   *     l i b r a r y   h a d   n o t   b e e n   [ i n i t i a l i z e d ] ( @ r e f   i n t r o _ i n i t ) . 
   * 
   *     @ c a l l b a c k _ s i g n a t u r e 
   *     @ c o d e 
   *     v o i d   f u n c t i o n _ n a m e ( G L F W w i n d o w *   w i n d o w ,   i n t   w i d t h ,   i n t   h e i g h t ) 
   *     @ e n d c o d e 
   *     F o r   m o r e   i n f o r m a t i o n   a b o u t   t h e   c a l l b a c k   p a r a m e t e r s ,   s e e   t h e 
   *     [ f u n c t i o n   p o i n t e r   t y p e ] ( @ r e f   G L F W w i n d o w s i z e f u n ) . 
   * 
   *     @ e r r o r s   P o s s i b l e   e r r o r s   i n c l u d e   @ r e f   G L F W _ N O T _ I N I T I A L I Z E D . 
   * 
   *     @ t h r e a d _ s a f e t y   T h i s   f u n c t i o n   m u s t   o n l y   b e   c a l l e d   f r o m   t h e   m a i n   t h r e a d . 
   * 
   *     @ s a   @ r e f   w i n d o w _ s i z e 
   * 
   *     @ s i n c e   A d d e d   i n   v e r s i o n   1 . 0 . 
   *     @ g l f w 3   A d d e d   w i n d o w   h a n d l e   p a r a m e t e r   a n d   r e t u r n   v a l u e . 
   * 
   *     @ i n g r o u p   w i n d o w 
   * / 
 G L F W A P I   G L F W w i n d o w s i z e f u n   g l f w S e t W i n d o w S i z e C a l l b a c k ( G L F W w i n d o w *   w i n d o w ,   G L F W w i n d o w s i z e f u n   c a l l b a c k ) ; 
 
 / * !   @ b r i e f   S e t s   t h e   c l o s e   c a l l b a c k   f o r   t h e   s p e c i f i e d   w i n d o w . 
   * 
   *     T h i s   f u n c t i o n   s e t s   t h e   c l o s e   c a l l b a c k   o f   t h e   s p e c i f i e d   w i n d o w ,   w h i c h   i s 
   *     c a l l e d   w h e n   t h e   u s e r   a t t e m p t s   t o   c l o s e   t h e   w i n d o w ,   f o r   e x a m p l e   b y   c l i c k i n g 
   *     t h e   c l o s e   w i d g e t   i n   t h e   t i t l e   b a r . 
   * 
   *     T h e   c l o s e   f l a g   i s   s e t   b e f o r e   t h i s   c a l l b a c k   i s   c a l l e d ,   b u t   y o u   c a n   m o d i f y   i t 
   *     a t   a n y   t i m e   w i t h   @ r e f   g l f w S e t W i n d o w S h o u l d C l o s e . 
   * 
   *     T h e   c l o s e   c a l l b a c k   i s   n o t   t r i g g e r e d   b y   @ r e f   g l f w D e s t r o y W i n d o w . 
   * 
   *     @ p a r a m [ i n ]   w i n d o w   T h e   w i n d o w   w h o s e   c a l l b a c k   t o   s e t . 
   *     @ p a r a m [ i n ]   c a l l b a c k   T h e   n e w   c a l l b a c k ,   o r   ` N U L L `   t o   r e m o v e   t h e   c u r r e n t l y   s e t 
   *     c a l l b a c k . 
   *     @ r e t u r n   T h e   p r e v i o u s l y   s e t   c a l l b a c k ,   o r   ` N U L L `   i f   n o   c a l l b a c k   w a s   s e t   o r   t h e 
   *     l i b r a r y   h a d   n o t   b e e n   [ i n i t i a l i z e d ] ( @ r e f   i n t r o _ i n i t ) . 
   * 
   *     @ c a l l b a c k _ s i g n a t u r e 
   *     @ c o d e 
   *     v o i d   f u n c t i o n _ n a m e ( G L F W w i n d o w *   w i n d o w ) 
   *     @ e n d c o d e 
   *     F o r   m o r e   i n f o r m a t i o n   a b o u t   t h e   c a l l b a c k   p a r a m e t e r s ,   s e e   t h e 
   *     [ f u n c t i o n   p o i n t e r   t y p e ] ( @ r e f   G L F W w i n d o w c l o s e f u n ) . 
   * 
   *     @ e r r o r s   P o s s i b l e   e r r o r s   i n c l u d e   @ r e f   G L F W _ N O T _ I N I T I A L I Z E D . 
   * 
   *     @ r e m a r k   @ m a c o s   S e l e c t i n g   Q u i t   f r o m   t h e   a p p l i c a t i o n   m e n u   w i l l   t r i g g e r   t h e 
   *     c l o s e   c a l l b a c k   f o r   a l l   w i n d o w s . 
   * 
   *     @ t h r e a d _ s a f e t y   T h i s   f u n c t i o n   m u s t   o n l y   b e   c a l l e d   f r o m   t h e   m a i n   t h r e a d . 
   * 
   *     @ s a   @ r e f   w i n d o w _ c l o s e 
   * 
   *     @ s i n c e   A d d e d   i n   v e r s i o n   2 . 5 . 
   *     @ g l f w 3   A d d e d   w i n d o w   h a n d l e   p a r a m e t e r   a n d   r e t u r n   v a l u e . 
   * 
   *     @ i n g r o u p   w i n d o w 
   * / 
 G L F W A P I   G L F W w i n d o w c l o s e f u n   g l f w S e t W i n d o w C l o s e C a l l b a c k ( G L F W w i n d o w *   w i n d o w ,   G L F W w i n d o w c l o s e f u n   c a l l b a c k ) ; 
 
 / * !   @ b r i e f   S e t s   t h e   r e f r e s h   c a l l b a c k   f o r   t h e   s p e c i f i e d   w i n d o w . 
   * 
   *     T h i s   f u n c t i o n   s e t s   t h e   r e f r e s h   c a l l b a c k   o f   t h e   s p e c i f i e d   w i n d o w ,   w h i c h   i s 
   *     c a l l e d   w h e n   t h e   c o n t e n t   a r e a   o f   t h e   w i n d o w   n e e d s   t o   b e   r e d r a w n ,   f o r   e x a m p l e 
   *     i f   t h e   w i n d o w   h a s   b e e n   e x p o s e d   a f t e r   h a v i n g   b e e n   c o v e r e d   b y   a n o t h e r   w i n d o w . 
   * 
   *     O n   c o m p o s i t i n g   w i n d o w   s y s t e m s   s u c h   a s   A e r o ,   C o m p i z ,   A q u a   o r   W a y l a n d ,   w h e r e 
   *     t h e   w i n d o w   c o n t e n t s   a r e   s a v e d   o f f - s c r e e n ,   t h i s   c a l l b a c k   m a y   b e   c a l l e d   o n l y 
   *     v e r y   i n f r e q u e n t l y   o r   n e v e r   a t   a l l . 
   * 
   *     @ p a r a m [ i n ]   w i n d o w   T h e   w i n d o w   w h o s e   c a l l b a c k   t o   s e t . 
   *     @ p a r a m [ i n ]   c a l l b a c k   T h e   n e w   c a l l b a c k ,   o r   ` N U L L `   t o   r e m o v e   t h e   c u r r e n t l y   s e t 
   *     c a l l b a c k . 
   *     @ r e t u r n   T h e   p r e v i o u s l y   s e t   c a l l b a c k ,   o r   ` N U L L `   i f   n o   c a l l b a c k   w a s   s e t   o r   t h e 
   *     l i b r a r y   h a d   n o t   b e e n   [ i n i t i a l i z e d ] ( @ r e f   i n t r o _ i n i t ) . 
   * 
   *     @ c a l l b a c k _ s i g n a t u r e 
   *     @ c o d e 
   *     v o i d   f u n c t i o n _ n a m e ( G L F W w i n d o w *   w i n d o w ) ; 
   *     @ e n d c o d e 
   *     F o r   m o r e   i n f o r m a t i o n   a b o u t   t h e   c a l l b a c k   p a r a m e t e r s ,   s e e   t h e 
   *     [ f u n c t i o n   p o i n t e r   t y p e ] ( @ r e f   G L F W w i n d o w r e f r e s h f u n ) . 
   * 
   *     @ e r r o r s   P o s s i b l e   e r r o r s   i n c l u d e   @ r e f   G L F W _ N O T _ I N I T I A L I Z E D . 
   * 
   *     @ t h r e a d _ s a f e t y   T h i s   f u n c t i o n   m u s t   o n l y   b e   c a l l e d   f r o m   t h e   m a i n   t h r e a d . 
   * 
   *     @ s a   @ r e f   w i n d o w _ r e f r e s h 
   * 
   *     @ s i n c e   A d d e d   i n   v e r s i o n   2 . 5 . 
   *     @ g l f w 3   A d d e d   w i n d o w   h a n d l e   p a r a m e t e r   a n d   r e t u r n   v a l u e . 
   * 
   *     @ i n g r o u p   w i n d o w 
   * / 
 G L F W A P I   G L F W w i n d o w r e f r e s h f u n   g l f w S e t W i n d o w R e f r e s h C a l l b a c k ( G L F W w i n d o w *   w i n d o w ,   G L F W w i n d o w r e f r e s h f u n   c a l l b a c k ) ; 
 
 / * !   @ b r i e f   S e t s   t h e   f o c u s   c a l l b a c k   f o r   t h e   s p e c i f i e d   w i n d o w . 
   * 
   *     T h i s   f u n c t i o n   s e t s   t h e   f o c u s   c a l l b a c k   o f   t h e   s p e c i f i e d   w i n d o w ,   w h i c h   i s 
   *     c a l l e d   w h e n   t h e   w i n d o w   g a i n s   o r   l o s e s   i n p u t   f o c u s . 
   * 
   *     A f t e r   t h e   f o c u s   c a l l b a c k   i s   c a l l e d   f o r   a   w i n d o w   t h a t   l o s t   i n p u t   f o c u s , 
   *     s y n t h e t i c   k e y   a n d   m o u s e   b u t t o n   r e l e a s e   e v e n t s   w i l l   b e   g e n e r a t e d   f o r   a l l   s u c h 
   *     t h a t   h a d   b e e n   p r e s s e d .     F o r   m o r e   i n f o r m a t i o n ,   s e e   @ r e f   g l f w S e t K e y C a l l b a c k 
   *     a n d   @ r e f   g l f w S e t M o u s e B u t t o n C a l l b a c k . 
   * 
   *     @ p a r a m [ i n ]   w i n d o w   T h e   w i n d o w   w h o s e   c a l l b a c k   t o   s e t . 
   *     @ p a r a m [ i n ]   c a l l b a c k   T h e   n e w   c a l l b a c k ,   o r   ` N U L L `   t o   r e m o v e   t h e   c u r r e n t l y   s e t 
   *     c a l l b a c k . 
   *     @ r e t u r n   T h e   p r e v i o u s l y   s e t   c a l l b a c k ,   o r   ` N U L L `   i f   n o   c a l l b a c k   w a s   s e t   o r   t h e 
   *     l i b r a r y   h a d   n o t   b e e n   [ i n i t i a l i z e d ] ( @ r e f   i n t r o _ i n i t ) . 
   * 
   *     @ c a l l b a c k _ s i g n a t u r e 
   *     @ c o d e 
   *     v o i d   f u n c t i o n _ n a m e ( G L F W w i n d o w *   w i n d o w ,   i n t   f o c u s e d ) 
   *     @ e n d c o d e 
   *     F o r   m o r e   i n f o r m a t i o n   a b o u t   t h e   c a l l b a c k   p a r a m e t e r s ,   s e e   t h e 
   *     [ f u n c t i o n   p o i n t e r   t y p e ] ( @ r e f   G L F W w i n d o w f o c u s f u n ) . 
   * 
   *     @ e r r o r s   P o s s i b l e   e r r o r s   i n c l u d e   @ r e f   G L F W _ N O T _ I N I T I A L I Z E D . 
   * 
   *     @ t h r e a d _ s a f e t y   T h i s   f u n c t i o n   m u s t   o n l y   b e   c a l l e d   f r o m   t h e   m a i n   t h r e a d . 
   * 
   *     @ s a   @ r e f   w i n d o w _ f o c u s 
   * 
   *     @ s i n c e   A d d e d   i n   v e r s i o n   3 . 0 . 
   * 
   *     @ i n g r o u p   w i n d o w 
   * / 
 G L F W A P I   G L F W w i n d o w f o c u s f u n   g l f w S e t W i n d o w F o c u s C a l l b a c k ( G L F W w i n d o w *   w i n d o w ,   G L F W w i n d o w f o c u s f u n   c a l l b a c k ) ; 
 
 / * !   @ b r i e f   S e t s   t h e   i c o n i f y   c a l l b a c k   f o r   t h e   s p e c i f i e d   w i n d o w . 
   * 
   *     T h i s   f u n c t i o n   s e t s   t h e   i c o n i f i c a t i o n   c a l l b a c k   o f   t h e   s p e c i f i e d   w i n d o w ,   w h i c h 
   *     i s   c a l l e d   w h e n   t h e   w i n d o w   i s   i c o n i f i e d   o r   r e s t o r e d . 
   * 
   *     @ p a r a m [ i n ]   w i n d o w   T h e   w i n d o w   w h o s e   c a l l b a c k   t o   s e t . 
   *     @ p a r a m [ i n ]   c a l l b a c k   T h e   n e w   c a l l b a c k ,   o r   ` N U L L `   t o   r e m o v e   t h e   c u r r e n t l y   s e t 
   *     c a l l b a c k . 
   *     @ r e t u r n   T h e   p r e v i o u s l y   s e t   c a l l b a c k ,   o r   ` N U L L `   i f   n o   c a l l b a c k   w a s   s e t   o r   t h e 
   *     l i b r a r y   h a d   n o t   b e e n   [ i n i t i a l i z e d ] ( @ r e f   i n t r o _ i n i t ) . 
   * 
   *     @ c a l l b a c k _ s i g n a t u r e 
   *     @ c o d e 
   *     v o i d   f u n c t i o n _ n a m e ( G L F W w i n d o w *   w i n d o w ,   i n t   i c o n i f i e d ) 
   *     @ e n d c o d e 
   *     F o r   m o r e   i n f o r m a t i o n   a b o u t   t h e   c a l l b a c k   p a r a m e t e r s ,   s e e   t h e 
   *     [ f u n c t i o n   p o i n t e r   t y p e ] ( @ r e f   G L F W w i n d o w i c o n i f y f u n ) . 
   * 
   *     @ e r r o r s   P o s s i b l e   e r r o r s   i n c l u d e   @ r e f   G L F W _ N O T _ I N I T I A L I Z E D . 
   * 
   *     @ t h r e a d _ s a f e t y   T h i s   f u n c t i o n   m u s t   o n l y   b e   c a l l e d   f r o m   t h e   m a i n   t h r e a d . 
   * 
   *     @ s a   @ r e f   w i n d o w _ i c o n i f y 
   * 
   *     @ s i n c e   A d d e d   i n   v e r s i o n   3 . 0 . 
   * 
   *     @ i n g r o u p   w i n d o w 
   * / 
 G L F W A P I   G L F W w i n d o w i c o n i f y f u n   g l f w S e t W i n d o w I c o n i f y C a l l b a c k ( G L F W w i n d o w *   w i n d o w ,   G L F W w i n d o w i c o n i f y f u n   c a l l b a c k ) ; 
 
 / * !   @ b r i e f   S e t s   t h e   m a x i m i z e   c a l l b a c k   f o r   t h e   s p e c i f i e d   w i n d o w . 
   * 
   *     T h i s   f u n c t i o n   s e t s   t h e   m a x i m i z a t i o n   c a l l b a c k   o f   t h e   s p e c i f i e d   w i n d o w ,   w h i c h 
   *     i s   c a l l e d   w h e n   t h e   w i n d o w   i s   m a x i m i z e d   o r   r e s t o r e d . 
   * 
   *     @ p a r a m [ i n ]   w i n d o w   T h e   w i n d o w   w h o s e   c a l l b a c k   t o   s e t . 
   *     @ p a r a m [ i n ]   c a l l b a c k   T h e   n e w   c a l l b a c k ,   o r   ` N U L L `   t o   r e m o v e   t h e   c u r r e n t l y   s e t 
   *     c a l l b a c k . 
   *     @ r e t u r n   T h e   p r e v i o u s l y   s e t   c a l l b a c k ,   o r   ` N U L L `   i f   n o   c a l l b a c k   w a s   s e t   o r   t h e 
   *     l i b r a r y   h a d   n o t   b e e n   [ i n i t i a l i z e d ] ( @ r e f   i n t r o _ i n i t ) . 
   * 
   *     @ c a l l b a c k _ s i g n a t u r e 
   *     @ c o d e 
   *     v o i d   f u n c t i o n _ n a m e ( G L F W w i n d o w *   w i n d o w ,   i n t   m a x i m i z e d ) 
   *     @ e n d c o d e 
   *     F o r   m o r e   i n f o r m a t i o n   a b o u t   t h e   c a l l b a c k   p a r a m e t e r s ,   s e e   t h e 
   *     [ f u n c t i o n   p o i n t e r   t y p e ] ( @ r e f   G L F W w i n d o w m a x i m i z e f u n ) . 
   * 
   *     @ e r r o r s   P o s s i b l e   e r r o r s   i n c l u d e   @ r e f   G L F W _ N O T _ I N I T I A L I Z E D . 
   * 
   *     @ t h r e a d _ s a f e t y   T h i s   f u n c t i o n   m u s t   o n l y   b e   c a l l e d   f r o m   t h e   m a i n   t h r e a d . 
   * 
   *     @ s a   @ r e f   w i n d o w _ m a x i m i z e 
   * 
   *     @ s i n c e   A d d e d   i n   v e r s i o n   3 . 3 . 
   * 
   *     @ i n g r o u p   w i n d o w 
   * / 
 G L F W A P I   G L F W w i n d o w m a x i m i z e f u n   g l f w S e t W i n d o w M a x i m i z e C a l l b a c k ( G L F W w i n d o w *   w i n d o w ,   G L F W w i n d o w m a x i m i z e f u n   c a l l b a c k ) ; 
 
 / * !   @ b r i e f   S e t s   t h e   f r a m e b u f f e r   r e s i z e   c a l l b a c k   f o r   t h e   s p e c i f i e d   w i n d o w . 
   * 
   *     T h i s   f u n c t i o n   s e t s   t h e   f r a m e b u f f e r   r e s i z e   c a l l b a c k   o f   t h e   s p e c i f i e d   w i n d o w , 
   *     w h i c h   i s   c a l l e d   w h e n   t h e   f r a m e b u f f e r   o f   t h e   s p e c i f i e d   w i n d o w   i s   r e s i z e d . 
   * 
   *     @ p a r a m [ i n ]   w i n d o w   T h e   w i n d o w   w h o s e   c a l l b a c k   t o   s e t . 
   *     @ p a r a m [ i n ]   c a l l b a c k   T h e   n e w   c a l l b a c k ,   o r   ` N U L L `   t o   r e m o v e   t h e   c u r r e n t l y   s e t 
   *     c a l l b a c k . 
   *     @ r e t u r n   T h e   p r e v i o u s l y   s e t   c a l l b a c k ,   o r   ` N U L L `   i f   n o   c a l l b a c k   w a s   s e t   o r   t h e 
   *     l i b r a r y   h a d   n o t   b e e n   [ i n i t i a l i z e d ] ( @ r e f   i n t r o _ i n i t ) . 
   * 
   *     @ c a l l b a c k _ s i g n a t u r e 
   *     @ c o d e 
   *     v o i d   f u n c t i o n _ n a m e ( G L F W w i n d o w *   w i n d o w ,   i n t   w i d t h ,   i n t   h e i g h t ) 
   *     @ e n d c o d e 
   *     F o r   m o r e   i n f o r m a t i o n   a b o u t   t h e   c a l l b a c k   p a r a m e t e r s ,   s e e   t h e 
   *     [ f u n c t i o n   p o i n t e r   t y p e ] ( @ r e f   G L F W f r a m e b u f f e r s i z e f u n ) . 
   * 
   *     @ e r r o r s   P o s s i b l e   e r r o r s   i n c l u d e   @ r e f   G L F W _ N O T _ I N I T I A L I Z E D . 
   * 
   *     @ t h r e a d _ s a f e t y   T h i s   f u n c t i o n   m u s t   o n l y   b e   c a l l e d   f r o m   t h e   m a i n   t h r e a d . 
   * 
   *     @ s a   @ r e f   w i n d o w _ f b s i z e 
   * 
   *     @ s i n c e   A d d e d   i n   v e r s i o n   3 . 0 . 
   * 
   *     @ i n g r o u p   w i n d o w 
   * / 
 G L F W A P I   G L F W f r a m e b u f f e r s i z e f u n   g l f w S e t F r a m e b u f f e r S i z e C a l l b a c k ( G L F W w i n d o w *   w i n d o w ,   G L F W f r a m e b u f f e r s i z e f u n   c a l l b a c k ) ; 
 
 / * !   @ b r i e f   S e t s   t h e   w i n d o w   c o n t e n t   s c a l e   c a l l b a c k   f o r   t h e   s p e c i f i e d   w i n d o w . 
   * 
   *     T h i s   f u n c t i o n   s e t s   t h e   w i n d o w   c o n t e n t   s c a l e   c a l l b a c k   o f   t h e   s p e c i f i e d   w i n d o w , 
   *     w h i c h   i s   c a l l e d   w h e n   t h e   c o n t e n t   s c a l e   o f   t h e   s p e c i f i e d   w i n d o w   c h a n g e s . 
   * 
   *     @ p a r a m [ i n ]   w i n d o w   T h e   w i n d o w   w h o s e   c a l l b a c k   t o   s e t . 
   *     @ p a r a m [ i n ]   c a l l b a c k   T h e   n e w   c a l l b a c k ,   o r   ` N U L L `   t o   r e m o v e   t h e   c u r r e n t l y   s e t 
   *     c a l l b a c k . 
   *     @ r e t u r n   T h e   p r e v i o u s l y   s e t   c a l l b a c k ,   o r   ` N U L L `   i f   n o   c a l l b a c k   w a s   s e t   o r   t h e 
   *     l i b r a r y   h a d   n o t   b e e n   [ i n i t i a l i z e d ] ( @ r e f   i n t r o _ i n i t ) . 
   * 
   *     @ c a l l b a c k _ s i g n a t u r e 
   *     @ c o d e 
   *     v o i d   f u n c t i o n _ n a m e ( G L F W w i n d o w *   w i n d o w ,   f l o a t   x s c a l e ,   f l o a t   y s c a l e ) 
   *     @ e n d c o d e 
   *     F o r   m o r e   i n f o r m a t i o n   a b o u t   t h e   c a l l b a c k   p a r a m e t e r s ,   s e e   t h e 
   *     [ f u n c t i o n   p o i n t e r   t y p e ] ( @ r e f   G L F W w i n d o w c o n t e n t s c a l e f u n ) . 
   * 
   *     @ e r r o r s   P o s s i b l e   e r r o r s   i n c l u d e   @ r e f   G L F W _ N O T _ I N I T I A L I Z E D . 
   * 
   *     @ t h r e a d _ s a f e t y   T h i s   f u n c t i o n   m u s t   o n l y   b e   c a l l e d   f r o m   t h e   m a i n   t h r e a d . 
   * 
   *     @ s a   @ r e f   w i n d o w _ s c a l e 
   *     @ s a   @ r e f   g l f w G e t W i n d o w C o n t e n t S c a l e 
   * 
   *     @ s i n c e   A d d e d   i n   v e r s i o n   3 . 3 . 
   * 
   *     @ i n g r o u p   w i n d o w 
   * / 
 G L F W A P I   G L F W w i n d o w c o n t e n t s c a l e f u n   g l f w S e t W i n d o w C o n t e n t S c a l e C a l l b a c k ( G L F W w i n d o w *   w i n d o w ,   G L F W w i n d o w c o n t e n t s c a l e f u n   c a l l b a c k ) ; 
 
 / * !   @ b r i e f   P r o c e s s e s   a l l   p e n d i n g   e v e n t s . 
   * 
   *     T h i s   f u n c t i o n   p r o c e s s e s   o n l y   t h o s e   e v e n t s   t h a t   a r e   a l r e a d y   i n   t h e   e v e n t 
   *     q u e u e   a n d   t h e n   r e t u r n s   i m m e d i a t e l y .     P r o c e s s i n g   e v e n t s   w i l l   c a u s e   t h e   w i n d o w 
   *     a n d   i n p u t   c a l l b a c k s   a s s o c i a t e d   w i t h   t h o s e   e v e n t s   t o   b e   c a l l e d . 
   * 
   *     O n   s o m e   p l a t f o r m s ,   a   w i n d o w   m o v e ,   r e s i z e   o r   m e n u   o p e r a t i o n   w i l l   c a u s e   e v e n t 
   *     p r o c e s s i n g   t o   b l o c k .     T h i s   i s   d u e   t o   h o w   e v e n t   p r o c e s s i n g   i s   d e s i g n e d   o n 
   *     t h o s e   p l a t f o r m s .     Y o u   c a n   u s e   t h e 
   *     [ w i n d o w   r e f r e s h   c a l l b a c k ] ( @ r e f   w i n d o w _ r e f r e s h )   t o   r e d r a w   t h e   c o n t e n t s   o f 
   *     y o u r   w i n d o w   w h e n   n e c e s s a r y   d u r i n g   s u c h   o p e r a t i o n s . 
   * 
   *     D o   n o t   a s s u m e   t h a t   c a l l b a c k s   y o u   s e t   w i l l   _ o n l y _   b e   c a l l e d   i n   r e s p o n s e   t o 
   *     e v e n t   p r o c e s s i n g   f u n c t i o n s   l i k e   t h i s   o n e .     W h i l e   i t   i s   n e c e s s a r y   t o   p o l l   f o r 
   *     e v e n t s ,   w i n d o w   s y s t e m s   t h a t   r e q u i r e   G L F W   t o   r e g i s t e r   c a l l b a c k s   o f   i t s   o w n 
   *     c a n   p a s s   e v e n t s   t o   G L F W   i n   r e s p o n s e   t o   m a n y   w i n d o w   s y s t e m   f u n c t i o n   c a l l s . 
   *     G L F W   w i l l   p a s s   t h o s e   e v e n t s   o n   t o   t h e   a p p l i c a t i o n   c a l l b a c k s   b e f o r e 
   *     r e t u r n i n g . 
   * 
   *     E v e n t   p r o c e s s i n g   i s   n o t   r e q u i r e d   f o r   j o y s t i c k   i n p u t   t o   w o r k . 
   * 
   *     @ e r r o r s   P o s s i b l e   e r r o r s   i n c l u d e   @ r e f   G L F W _ N O T _ I N I T I A L I Z E D   a n d   @ r e f 
   *     G L F W _ P L A T F O R M _ E R R O R . 
   * 
   *     @ r e e n t r a n c y   T h i s   f u n c t i o n   m u s t   n o t   b e   c a l l e d   f r o m   a   c a l l b a c k . 
   * 
   *     @ t h r e a d _ s a f e t y   T h i s   f u n c t i o n   m u s t   o n l y   b e   c a l l e d   f r o m   t h e   m a i n   t h r e a d . 
   * 
   *     @ s a   @ r e f   e v e n t s 
   *     @ s a   @ r e f   g l f w W a i t E v e n t s 
   *     @ s a   @ r e f   g l f w W a i t E v e n t s T i m e o u t 
   * 
   *     @ s i n c e   A d d e d   i n   v e r s i o n   1 . 0 . 
   * 
   *     @ i n g r o u p   w i n d o w 
   * / 
 G L F W A P I   v o i d   g l f w P o l l E v e n t s ( v o i d ) ; 
 
 / * !   @ b r i e f   W a i t s   u n t i l   e v e n t s   a r e   q u e u e d   a n d   p r o c e s s e s   t h e m . 
   * 
   *     T h i s   f u n c t i o n   p u t s   t h e   c a l l i n g   t h r e a d   t o   s l e e p   u n t i l   a t   l e a s t   o n e   e v e n t   i s 
   *     a v a i l a b l e   i n   t h e   e v e n t   q u e u e .     O n c e   o n e   o r   m o r e   e v e n t s   a r e   a v a i l a b l e , 
   *     i t   b e h a v e s   e x a c t l y   l i k e   @ r e f   g l f w P o l l E v e n t s ,   i . e .   t h e   e v e n t s   i n   t h e   q u e u e 
   *     a r e   p r o c e s s e d   a n d   t h e   f u n c t i o n   t h e n   r e t u r n s   i m m e d i a t e l y .     P r o c e s s i n g   e v e n t s 
   *     w i l l   c a u s e   t h e   w i n d o w   a n d   i n p u t   c a l l b a c k s   a s s o c i a t e d   w i t h   t h o s e   e v e n t s   t o   b e 
   *     c a l l e d . 
   * 
   *     S i n c e   n o t   a l l   e v e n t s   a r e   a s s o c i a t e d   w i t h   c a l l b a c k s ,   t h i s   f u n c t i o n   m a y   r e t u r n 
   *     w i t h o u t   a   c a l l b a c k   h a v i n g   b e e n   c a l l e d   e v e n   i f   y o u   a r e   m o n i t o r i n g   a l l 
   *     c a l l b a c k s . 
   * 
   *     O n   s o m e   p l a t f o r m s ,   a   w i n d o w   m o v e ,   r e s i z e   o r   m e n u   o p e r a t i o n   w i l l   c a u s e   e v e n t 
   *     p r o c e s s i n g   t o   b l o c k .     T h i s   i s   d u e   t o   h o w   e v e n t   p r o c e s s i n g   i s   d e s i g n e d   o n 
   *     t h o s e   p l a t f o r m s .     Y o u   c a n   u s e   t h e 
   *     [ w i n d o w   r e f r e s h   c a l l b a c k ] ( @ r e f   w i n d o w _ r e f r e s h )   t o   r e d r a w   t h e   c o n t e n t s   o f 
   *     y o u r   w i n d o w   w h e n   n e c e s s a r y   d u r i n g   s u c h   o p e r a t i o n s . 
   * 
   *     D o   n o t   a s s u m e   t h a t   c a l l b a c k s   y o u   s e t   w i l l   _ o n l y _   b e   c a l l e d   i n   r e s p o n s e   t o 
   *     e v e n t   p r o c e s s i n g   f u n c t i o n s   l i k e   t h i s   o n e .     W h i l e   i t   i s   n e c e s s a r y   t o   p o l l   f o r 
   *     e v e n t s ,   w i n d o w   s y s t e m s   t h a t   r e q u i r e   G L F W   t o   r e g i s t e r   c a l l b a c k s   o f   i t s   o w n 
   *     c a n   p a s s   e v e n t s   t o   G L F W   i n   r e s p o n s e   t o   m a n y   w i n d o w   s y s t e m   f u n c t i o n   c a l l s . 
   *     G L F W   w i l l   p a s s   t h o s e   e v e n t s   o n   t o   t h e   a p p l i c a t i o n   c a l l b a c k s   b e f o r e 
   *     r e t u r n i n g . 
   * 
   *     E v e n t   p r o c e s s i n g   i s   n o t   r e q u i r e d   f o r   j o y s t i c k   i n p u t   t o   w o r k . 
   * 
   *     @ e r r o r s   P o s s i b l e   e r r o r s   i n c l u d e   @ r e f   G L F W _ N O T _ I N I T I A L I Z E D   a n d   @ r e f 
   *     G L F W _ P L A T F O R M _ E R R O R . 
   * 
   *     @ r e e n t r a n c y   T h i s   f u n c t i o n   m u s t   n o t   b e   c a l l e d   f r o m   a   c a l l b a c k . 
   * 
   *     @ t h r e a d _ s a f e t y   T h i s   f u n c t i o n   m u s t   o n l y   b e   c a l l e d   f r o m   t h e   m a i n   t h r e a d . 
   * 
   *     @ s a   @ r e f   e v e n t s 
   *     @ s a   @ r e f   g l f w P o l l E v e n t s 
   *     @ s a   @ r e f   g l f w W a i t E v e n t s T i m e o u t 
   * 
   *     @ s i n c e   A d d e d   i n   v e r s i o n   2 . 5 . 
   * 
   *     @ i n g r o u p   w i n d o w 
   * / 
 G L F W A P I   v o i d   g l f w W a i t E v e n t s ( v o i d ) ; 
 
 / * !   @ b r i e f   W a i t s   w i t h   t i m e o u t   u n t i l   e v e n t s   a r e   q u e u e d   a n d   p r o c e s s e s   t h e m . 
   * 
   *     T h i s   f u n c t i o n   p u t s   t h e   c a l l i n g   t h r e a d   t o   s l e e p   u n t i l   a t   l e a s t   o n e   e v e n t   i s 
   *     a v a i l a b l e   i n   t h e   e v e n t   q u e u e ,   o r   u n t i l   t h e   s p e c i f i e d   t i m e o u t   i s   r e a c h e d .     I f 
   *     o n e   o r   m o r e   e v e n t s   a r e   a v a i l a b l e ,   i t   b e h a v e s   e x a c t l y   l i k e   @ r e f 
   *     g l f w P o l l E v e n t s ,   i . e .   t h e   e v e n t s   i n   t h e   q u e u e   a r e   p r o c e s s e d   a n d   t h e   f u n c t i o n 
   *     t h e n   r e t u r n s   i m m e d i a t e l y .     P r o c e s s i n g   e v e n t s   w i l l   c a u s e   t h e   w i n d o w   a n d   i n p u t 
   *     c a l l b a c k s   a s s o c i a t e d   w i t h   t h o s e   e v e n t s   t o   b e   c a l l e d . 
   * 
   *     T h e   t i m e o u t   v a l u e   m u s t   b e   a   p o s i t i v e   f i n i t e   n u m b e r . 
   * 
   *     S i n c e   n o t   a l l   e v e n t s   a r e   a s s o c i a t e d   w i t h   c a l l b a c k s ,   t h i s   f u n c t i o n   m a y   r e t u r n 
   *     w i t h o u t   a   c a l l b a c k   h a v i n g   b e e n   c a l l e d   e v e n   i f   y o u   a r e   m o n i t o r i n g   a l l 
   *     c a l l b a c k s . 
   * 
   *     O n   s o m e   p l a t f o r m s ,   a   w i n d o w   m o v e ,   r e s i z e   o r   m e n u   o p e r a t i o n   w i l l   c a u s e   e v e n t 
   *     p r o c e s s i n g   t o   b l o c k .     T h i s   i s   d u e   t o   h o w   e v e n t   p r o c e s s i n g   i s   d e s i g n e d   o n 
   *     t h o s e   p l a t f o r m s .     Y o u   c a n   u s e   t h e 
   *     [ w i n d o w   r e f r e s h   c a l l b a c k ] ( @ r e f   w i n d o w _ r e f r e s h )   t o   r e d r a w   t h e   c o n t e n t s   o f 
   *     y o u r   w i n d o w   w h e n   n e c e s s a r y   d u r i n g   s u c h   o p e r a t i o n s . 
   * 
   *     D o   n o t   a s s u m e   t h a t   c a l l b a c k s   y o u   s e t   w i l l   _ o n l y _   b e   c a l l e d   i n   r e s p o n s e   t o 
   *     e v e n t   p r o c e s s i n g   f u n c t i o n s   l i k e   t h i s   o n e .     W h i l e   i t   i s   n e c e s s a r y   t o   p o l l   f o r 
   *     e v e n t s ,   w i n d o w   s y s t e m s   t h a t   r e q u i r e   G L F W   t o   r e g i s t e r   c a l l b a c k s   o f   i t s   o w n 
   *     c a n   p a s s   e v e n t s   t o   G L F W   i n   r e s p o n s e   t o   m a n y   w i n d o w   s y s t e m   f u n c t i o n   c a l l s . 
   *     G L F W   w i l l   p a s s   t h o s e   e v e n t s   o n   t o   t h e   a p p l i c a t i o n   c a l l b a c k s   b e f o r e 
   *     r e t u r n i n g . 
   * 
   *     E v e n t   p r o c e s s i n g   i s   n o t   r e q u i r e d   f o r   j o y s t i c k   i n p u t   t o   w o r k . 
   * 
   *     @ p a r a m [ i n ]   t i m e o u t   T h e   m a x i m u m   a m o u n t   o f   t i m e ,   i n   s e c o n d s ,   t o   w a i t . 
   * 
   *     @ e r r o r s   P o s s i b l e   e r r o r s   i n c l u d e   @ r e f   G L F W _ N O T _ I N I T I A L I Z E D ,   @ r e f 
   *     G L F W _ I N V A L I D _ V A L U E   a n d   @ r e f   G L F W _ P L A T F O R M _ E R R O R . 
   * 
   *     @ r e e n t r a n c y   T h i s   f u n c t i o n   m u s t   n o t   b e   c a l l e d   f r o m   a   c a l l b a c k . 
   * 
   *     @ t h r e a d _ s a f e t y   T h i s   f u n c t i o n   m u s t   o n l y   b e   c a l l e d   f r o m   t h e   m a i n   t h r e a d . 
   * 
   *     @ s a   @ r e f   e v e n t s 
   *     @ s a   @ r e f   g l f w P o l l E v e n t s 
   *     @ s a   @ r e f   g l f w W a i t E v e n t s 
   * 
   *     @ s i n c e   A d d e d   i n   v e r s i o n   3 . 2 . 
   * 
   *     @ i n g r o u p   w i n d o w 
   * / 
 G L F W A P I   v o i d   g l f w W a i t E v e n t s T i m e o u t ( d o u b l e   t i m e o u t ) ; 
 
 / * !   @ b r i e f   P o s t s   a n   e m p t y   e v e n t   t o   t h e   e v e n t   q u e u e . 
   * 
   *     T h i s   f u n c t i o n   p o s t s   a n   e m p t y   e v e n t   f r o m   t h e   c u r r e n t   t h r e a d   t o   t h e   e v e n t 
   *     q u e u e ,   c a u s i n g   @ r e f   g l f w W a i t E v e n t s   o r   @ r e f   g l f w W a i t E v e n t s T i m e o u t   t o   r e t u r n . 
   * 
   *     @ e r r o r s   P o s s i b l e   e r r o r s   i n c l u d e   @ r e f   G L F W _ N O T _ I N I T I A L I Z E D   a n d   @ r e f 
   *     G L F W _ P L A T F O R M _ E R R O R . 
   * 
   *     @ t h r e a d _ s a f e t y   T h i s   f u n c t i o n   m a y   b e   c a l l e d   f r o m   a n y   t h r e a d . 
   * 
   *     @ s a   @ r e f   e v e n t s 
   *     @ s a   @ r e f   g l f w W a i t E v e n t s 
   *     @ s a   @ r e f   g l f w W a i t E v e n t s T i m e o u t 
   * 
   *     @ s i n c e   A d d e d   i n   v e r s i o n   3 . 1 . 
   * 
   *     @ i n g r o u p   w i n d o w 
   * / 
 G L F W A P I   v o i d   g l f w P o s t E m p t y E v e n t ( v o i d ) ; 
 
 / * !   @ b r i e f   R e t u r n s   t h e   v a l u e   o f   a n   i n p u t   o p t i o n   f o r   t h e   s p e c i f i e d   w i n d o w . 
   * 
   *     T h i s   f u n c t i o n   r e t u r n s   t h e   v a l u e   o f   a n   i n p u t   o p t i o n   f o r   t h e   s p e c i f i e d   w i n d o w . 
   *     T h e   m o d e   m u s t   b e   o n e   o f   @ r e f   G L F W _ C U R S O R ,   @ r e f   G L F W _ S T I C K Y _ K E Y S , 
   *     @ r e f   G L F W _ S T I C K Y _ M O U S E _ B U T T O N S ,   @ r e f   G L F W _ L O C K _ K E Y _ M O D S   o r 
   *     @ r e f   G L F W _ R A W _ M O U S E _ M O T I O N . 
   * 
   *     @ p a r a m [ i n ]   w i n d o w   T h e   w i n d o w   t o   q u e r y . 
   *     @ p a r a m [ i n ]   m o d e   O n e   o f   ` G L F W _ C U R S O R ` ,   ` G L F W _ S T I C K Y _ K E Y S ` , 
   *     ` G L F W _ S T I C K Y _ M O U S E _ B U T T O N S ` ,   ` G L F W _ L O C K _ K E Y _ M O D S `   o r 
   *     ` G L F W _ R A W _ M O U S E _ M O T I O N ` . 
   * 
   *     @ e r r o r s   P o s s i b l e   e r r o r s   i n c l u d e   @ r e f   G L F W _ N O T _ I N I T I A L I Z E D   a n d   @ r e f 
   *     G L F W _ I N V A L I D _ E N U M . 
   * 
   *     @ t h r e a d _ s a f e t y   T h i s   f u n c t i o n   m u s t   o n l y   b e   c a l l e d   f r o m   t h e   m a i n   t h r e a d . 
   * 
   *     @ s a   @ r e f   g l f w S e t I n p u t M o d e 
   * 
   *     @ s i n c e   A d d e d   i n   v e r s i o n   3 . 0 . 
   * 
   *     @ i n g r o u p   i n p u t 
   * / 
 G L F W A P I   i n t   g l f w G e t I n p u t M o d e ( G L F W w i n d o w *   w i n d o w ,   i n t   m o d e ) ; 
 
 / * !   @ b r i e f   S e t s   a n   i n p u t   o p t i o n   f o r   t h e   s p e c i f i e d   w i n d o w . 
   * 
   *     T h i s   f u n c t i o n   s e t s   a n   i n p u t   m o d e   o p t i o n   f o r   t h e   s p e c i f i e d   w i n d o w .     T h e   m o d e 
   *     m u s t   b e   o n e   o f   @ r e f   G L F W _ C U R S O R ,   @ r e f   G L F W _ S T I C K Y _ K E Y S , 
   *     @ r e f   G L F W _ S T I C K Y _ M O U S E _ B U T T O N S ,   @ r e f   G L F W _ L O C K _ K E Y _ M O D S   o r 
   *     @ r e f   G L F W _ R A W _ M O U S E _ M O T I O N . 
   * 
   *     I f   t h e   m o d e   i s   ` G L F W _ C U R S O R ` ,   t h e   v a l u e   m u s t   b e   o n e   o f   t h e   f o l l o w i n g   c u r s o r 
   *     m o d e s : 
   *     -   ` G L F W _ C U R S O R _ N O R M A L `   m a k e s   t h e   c u r s o r   v i s i b l e   a n d   b e h a v i n g   n o r m a l l y . 
   *     -   ` G L F W _ C U R S O R _ H I D D E N `   m a k e s   t h e   c u r s o r   i n v i s i b l e   w h e n   i t   i s   o v e r   t h e 
   *         c o n t e n t   a r e a   o f   t h e   w i n d o w   b u t   d o e s   n o t   r e s t r i c t   t h e   c u r s o r   f r o m   l e a v i n g . 
   *     -   ` G L F W _ C U R S O R _ D I S A B L E D `   h i d e s   a n d   g r a b s   t h e   c u r s o r ,   p r o v i d i n g   v i r t u a l 
   *         a n d   u n l i m i t e d   c u r s o r   m o v e m e n t .     T h i s   i s   u s e f u l   f o r   i m p l e m e n t i n g   f o r 
   *         e x a m p l e   3 D   c a m e r a   c o n t r o l s . 
   *     -   ` G L F W _ C U R S O R _ C A P T U R E D `   m a k e s   t h e   c u r s o r   v i s i b l e   a n d   c o n f i n e s   i t   t o   t h e 
   *         c o n t e n t   a r e a   o f   t h e   w i n d o w . 
   * 
   *     I f   t h e   m o d e   i s   ` G L F W _ S T I C K Y _ K E Y S ` ,   t h e   v a l u e   m u s t   b e   e i t h e r   ` G L F W _ T R U E `   t o 
   *     e n a b l e   s t i c k y   k e y s ,   o r   ` G L F W _ F A L S E `   t o   d i s a b l e   i t .     I f   s t i c k y   k e y s   a r e 
   *     e n a b l e d ,   a   k e y   p r e s s   w i l l   e n s u r e   t h a t   @ r e f   g l f w G e t K e y   r e t u r n s   ` G L F W _ P R E S S ` 
   *     t h e   n e x t   t i m e   i t   i s   c a l l e d   e v e n   i f   t h e   k e y   h a d   b e e n   r e l e a s e d   b e f o r e   t h e 
   *     c a l l .     T h i s   i s   u s e f u l   w h e n   y o u   a r e   o n l y   i n t e r e s t e d   i n   w h e t h e r   k e y s   h a v e   b e e n 
   *     p r e s s e d   b u t   n o t   w h e n   o r   i n   w h i c h   o r d e r . 
   * 
   *     I f   t h e   m o d e   i s   ` G L F W _ S T I C K Y _ M O U S E _ B U T T O N S ` ,   t h e   v a l u e   m u s t   b e   e i t h e r 
   *     ` G L F W _ T R U E `   t o   e n a b l e   s t i c k y   m o u s e   b u t t o n s ,   o r   ` G L F W _ F A L S E `   t o   d i s a b l e   i t . 
   *     I f   s t i c k y   m o u s e   b u t t o n s   a r e   e n a b l e d ,   a   m o u s e   b u t t o n   p r e s s   w i l l   e n s u r e   t h a t 
   *     @ r e f   g l f w G e t M o u s e B u t t o n   r e t u r n s   ` G L F W _ P R E S S `   t h e   n e x t   t i m e   i t   i s   c a l l e d   e v e n 
   *     i f   t h e   m o u s e   b u t t o n   h a d   b e e n   r e l e a s e d   b e f o r e   t h e   c a l l .     T h i s   i s   u s e f u l   w h e n 
   *     y o u   a r e   o n l y   i n t e r e s t e d   i n   w h e t h e r   m o u s e   b u t t o n s   h a v e   b e e n   p r e s s e d   b u t   n o t 
   *     w h e n   o r   i n   w h i c h   o r d e r . 
   * 
   *     I f   t h e   m o d e   i s   ` G L F W _ L O C K _ K E Y _ M O D S ` ,   t h e   v a l u e   m u s t   b e   e i t h e r   ` G L F W _ T R U E `   t o 
   *     e n a b l e   l o c k   k e y   m o d i f i e r   b i t s ,   o r   ` G L F W _ F A L S E `   t o   d i s a b l e   t h e m .     I f   e n a b l e d , 
   *     c a l l b a c k s   t h a t   r e c e i v e   m o d i f i e r   b i t s   w i l l   a l s o   h a v e   t h e   @ r e f 
   *     G L F W _ M O D _ C A P S _ L O C K   b i t   s e t   w h e n   t h e   e v e n t   w a s   g e n e r a t e d   w i t h   C a p s   L o c k   o n , 
   *     a n d   t h e   @ r e f   G L F W _ M O D _ N U M _ L O C K   b i t   w h e n   N u m   L o c k   w a s   o n . 
   * 
   *     I f   t h e   m o d e   i s   ` G L F W _ R A W _ M O U S E _ M O T I O N ` ,   t h e   v a l u e   m u s t   b e   e i t h e r   ` G L F W _ T R U E ` 
   *     t o   e n a b l e   r a w   ( u n s c a l e d   a n d   u n a c c e l e r a t e d )   m o u s e   m o t i o n   w h e n   t h e   c u r s o r   i s 
   *     d i s a b l e d ,   o r   ` G L F W _ F A L S E `   t o   d i s a b l e   i t .     I f   r a w   m o t i o n   i s   n o t   s u p p o r t e d , 
   *     a t t e m p t i n g   t o   s e t   t h i s   w i l l   e m i t   @ r e f   G L F W _ F E A T U R E _ U N A V A I L A B L E .     C a l l   @ r e f 
   *     g l f w R a w M o u s e M o t i o n S u p p o r t e d   t o   c h e c k   f o r   s u p p o r t . 
   * 
   *     @ p a r a m [ i n ]   w i n d o w   T h e   w i n d o w   w h o s e   i n p u t   m o d e   t o   s e t . 
   *     @ p a r a m [ i n ]   m o d e   O n e   o f   ` G L F W _ C U R S O R ` ,   ` G L F W _ S T I C K Y _ K E Y S ` , 
   *     ` G L F W _ S T I C K Y _ M O U S E _ B U T T O N S ` ,   ` G L F W _ L O C K _ K E Y _ M O D S `   o r 
   *     ` G L F W _ R A W _ M O U S E _ M O T I O N ` . 
   *     @ p a r a m [ i n ]   v a l u e   T h e   n e w   v a l u e   o f   t h e   s p e c i f i e d   i n p u t   m o d e . 
   * 
   *     @ e r r o r s   P o s s i b l e   e r r o r s   i n c l u d e   @ r e f   G L F W _ N O T _ I N I T I A L I Z E D ,   @ r e f 
   *     G L F W _ I N V A L I D _ E N U M ,   @ r e f   G L F W _ P L A T F O R M _ E R R O R   a n d   @ r e f 
   *     G L F W _ F E A T U R E _ U N A V A I L A B L E   ( s e e   a b o v e ) . 
   * 
   *     @ t h r e a d _ s a f e t y   T h i s   f u n c t i o n   m u s t   o n l y   b e   c a l l e d   f r o m   t h e   m a i n   t h r e a d . 
   * 
   *     @ s a   @ r e f   g l f w G e t I n p u t M o d e 
   * 
   *     @ s i n c e   A d d e d   i n   v e r s i o n   3 . 0 .     R e p l a c e s   ` g l f w E n a b l e `   a n d   ` g l f w D i s a b l e ` . 
   * 
   *     @ i n g r o u p   i n p u t 
   * / 
 G L F W A P I   v o i d   g l f w S e t I n p u t M o d e ( G L F W w i n d o w *   w i n d o w ,   i n t   m o d e ,   i n t   v a l u e ) ; 
 
 / * !   @ b r i e f   R e t u r n s   w h e t h e r   r a w   m o u s e   m o t i o n   i s   s u p p o r t e d . 
   * 
   *     T h i s   f u n c t i o n   r e t u r n s   w h e t h e r   r a w   m o u s e   m o t i o n   i s   s u p p o r t e d   o n   t h e   c u r r e n t 
   *     s y s t e m .     T h i s   s t a t u s   d o e s   n o t   c h a n g e   a f t e r   G L F W   h a s   b e e n   i n i t i a l i z e d   s o   y o u 
   *     o n l y   n e e d   t o   c h e c k   t h i s   o n c e .     I f   y o u   a t t e m p t   t o   e n a b l e   r a w   m o t i o n   o n 
   *     a   s y s t e m   t h a t   d o e s   n o t   s u p p o r t   i t ,   @ r e f   G L F W _ P L A T F O R M _ E R R O R   w i l l   b e   e m i t t e d . 
   * 
   *     R a w   m o u s e   m o t i o n   i s   c l o s e r   t o   t h e   a c t u a l   m o t i o n   o f   t h e   m o u s e   a c r o s s 
   *     a   s u r f a c e .     I t   i s   n o t   a f f e c t e d   b y   t h e   s c a l i n g   a n d   a c c e l e r a t i o n   a p p l i e d   t o 
   *     t h e   m o t i o n   o f   t h e   d e s k t o p   c u r s o r .     T h a t   p r o c e s s i n g   i s   s u i t a b l e   f o r   a   c u r s o r 
   *     w h i l e   r a w   m o t i o n   i s   b e t t e r   f o r   c o n t r o l l i n g   f o r   e x a m p l e   a   3 D   c a m e r a .     B e c a u s e 
   *     o f   t h i s ,   r a w   m o u s e   m o t i o n   i s   o n l y   p r o v i d e d   w h e n   t h e   c u r s o r   i s   d i s a b l e d . 
   * 
   *     @ r e t u r n   ` G L F W _ T R U E `   i f   r a w   m o u s e   m o t i o n   i s   s u p p o r t e d   o n   t h e   c u r r e n t   m a c h i n e , 
   *     o r   ` G L F W _ F A L S E `   o t h e r w i s e . 
   * 
   *     @ e r r o r s   P o s s i b l e   e r r o r s   i n c l u d e   @ r e f   G L F W _ N O T _ I N I T I A L I Z E D . 
   * 
   *     @ t h r e a d _ s a f e t y   T h i s   f u n c t i o n   m u s t   o n l y   b e   c a l l e d   f r o m   t h e   m a i n   t h r e a d . 
   * 
   *     @ s a   @ r e f   r a w _ m o u s e _ m o t i o n 
   *     @ s a   @ r e f   g l f w S e t I n p u t M o d e 
   * 
   *     @ s i n c e   A d d e d   i n   v e r s i o n   3 . 3 . 
   * 
   *     @ i n g r o u p   i n p u t 
   * / 
 G L F W A P I   i n t   g l f w R a w M o u s e M o t i o n S u p p o r t e d ( v o i d ) ; 
 
 / * !   @ b r i e f   R e t u r n s   t h e   l a y o u t - s p e c i f i c   n a m e   o f   t h e   s p e c i f i e d   p r i n t a b l e   k e y . 
   * 
   *     T h i s   f u n c t i o n   r e t u r n s   t h e   n a m e   o f   t h e   s p e c i f i e d   p r i n t a b l e   k e y ,   e n c o d e d   a s 
   *     U T F - 8 .     T h i s   i s   t y p i c a l l y   t h e   c h a r a c t e r   t h a t   k e y   w o u l d   p r o d u c e   w i t h o u t   a n y 
   *     m o d i f i e r   k e y s ,   i n t e n d e d   f o r   d i s p l a y i n g   k e y   b i n d i n g s   t o   t h e   u s e r .     F o r   d e a d 
   *     k e y s ,   i t   i s   t y p i c a l l y   t h e   d i a c r i t i c   i t   w o u l d   a d d   t o   a   c h a r a c t e r . 
   * 
   *     _ _ D o   n o t   u s e   t h i s   f u n c t i o n _ _   f o r   [ t e x t   i n p u t ] ( @ r e f   i n p u t _ c h a r ) .     Y o u   w i l l 
   *     b r e a k   t e x t   i n p u t   f o r   m a n y   l a n g u a g e s   e v e n   i f   i t   h a p p e n s   t o   w o r k   f o r   y o u r s . 
   * 
   *     I f   t h e   k e y   i s   ` G L F W _ K E Y _ U N K N O W N ` ,   t h e   s c a n c o d e   i s   u s e d   t o   i d e n t i f y   t h e   k e y , 
   *     o t h e r w i s e   t h e   s c a n c o d e   i s   i g n o r e d .     I f   y o u   s p e c i f y   a   n o n - p r i n t a b l e   k e y ,   o r 
   *     ` G L F W _ K E Y _ U N K N O W N `   a n d   a   s c a n c o d e   t h a t   m a p s   t o   a   n o n - p r i n t a b l e   k e y ,   t h i s 
   *     f u n c t i o n   r e t u r n s   ` N U L L `   b u t   d o e s   n o t   e m i t   a n   e r r o r . 
   * 
   *     T h i s   b e h a v i o r   a l l o w s   y o u   t o   a l w a y s   p a s s   i n   t h e   a r g u m e n t s   i n   t h e 
   *     [ k e y   c a l l b a c k ] ( @ r e f   i n p u t _ k e y )   w i t h o u t   m o d i f i c a t i o n . 
   * 
   *     T h e   p r i n t a b l e   k e y s   a r e : 
   *     -   ` G L F W _ K E Y _ A P O S T R O P H E ` 
   *     -   ` G L F W _ K E Y _ C O M M A ` 
   *     -   ` G L F W _ K E Y _ M I N U S ` 
   *     -   ` G L F W _ K E Y _ P E R I O D ` 
   *     -   ` G L F W _ K E Y _ S L A S H ` 
   *     -   ` G L F W _ K E Y _ S E M I C O L O N ` 
   *     -   ` G L F W _ K E Y _ E Q U A L ` 
   *     -   ` G L F W _ K E Y _ L E F T _ B R A C K E T ` 
   *     -   ` G L F W _ K E Y _ R I G H T _ B R A C K E T ` 
   *     -   ` G L F W _ K E Y _ B A C K S L A S H ` 
   *     -   ` G L F W _ K E Y _ W O R L D _ 1 ` 
   *     -   ` G L F W _ K E Y _ W O R L D _ 2 ` 
   *     -   ` G L F W _ K E Y _ 0 `   t o   ` G L F W _ K E Y _ 9 ` 
   *     -   ` G L F W _ K E Y _ A `   t o   ` G L F W _ K E Y _ Z ` 
   *     -   ` G L F W _ K E Y _ K P _ 0 `   t o   ` G L F W _ K E Y _ K P _ 9 ` 
   *     -   ` G L F W _ K E Y _ K P _ D E C I M A L ` 
   *     -   ` G L F W _ K E Y _ K P _ D I V I D E ` 
   *     -   ` G L F W _ K E Y _ K P _ M U L T I P L Y ` 
   *     -   ` G L F W _ K E Y _ K P _ S U B T R A C T ` 
   *     -   ` G L F W _ K E Y _ K P _ A D D ` 
   *     -   ` G L F W _ K E Y _ K P _ E Q U A L ` 
   * 
   *     N a m e s   f o r   p r i n t a b l e   k e y s   d e p e n d   o n   k e y b o a r d   l a y o u t ,   w h i l e   n a m e s   f o r 
   *     n o n - p r i n t a b l e   k e y s   a r e   t h e   s a m e   a c r o s s   l a y o u t s   b u t   d e p e n d   o n   t h e   a p p l i c a t i o n 
   *     l a n g u a g e   a n d   s h o u l d   b e   l o c a l i z e d   a l o n g   w i t h   o t h e r   u s e r   i n t e r f a c e   t e x t . 
   * 
   *     @ p a r a m [ i n ]   k e y   T h e   k e y   t o   q u e r y ,   o r   ` G L F W _ K E Y _ U N K N O W N ` . 
   *     @ p a r a m [ i n ]   s c a n c o d e   T h e   s c a n c o d e   o f   t h e   k e y   t o   q u e r y . 
   *     @ r e t u r n   T h e   U T F - 8   e n c o d e d ,   l a y o u t - s p e c i f i c   n a m e   o f   t h e   k e y ,   o r   ` N U L L ` . 
   * 
   *     @ e r r o r s   P o s s i b l e   e r r o r s   i n c l u d e   @ r e f   G L F W _ N O T _ I N I T I A L I Z E D   a n d   @ r e f 
   *     G L F W _ P L A T F O R M _ E R R O R . 
   * 
   *     @ r e m a r k   T h e   c o n t e n t s   o f   t h e   r e t u r n e d   s t r i n g   m a y   c h a n g e   w h e n   a   k e y b o a r d 
   *     l a y o u t   c h a n g e   e v e n t   i s   r e c e i v e d . 
   * 
   *     @ p o i n t e r _ l i f e t i m e   T h e   r e t u r n e d   s t r i n g   i s   a l l o c a t e d   a n d   f r e e d   b y   G L F W .     Y o u 
   *     s h o u l d   n o t   f r e e   i t   y o u r s e l f .     I t   i s   v a l i d   u n t i l   t h e   l i b r a r y   i s   t e r m i n a t e d . 
   * 
   *     @ t h r e a d _ s a f e t y   T h i s   f u n c t i o n   m u s t   o n l y   b e   c a l l e d   f r o m   t h e   m a i n   t h r e a d . 
   * 
   *     @ s a   @ r e f   i n p u t _ k e y _ n a m e 
   * 
   *     @ s i n c e   A d d e d   i n   v e r s i o n   3 . 2 . 
   * 
   *     @ i n g r o u p   i n p u t 
   * / 
 G L F W A P I   c o n s t   c h a r *   g l f w G e t K e y N a m e ( i n t   k e y ,   i n t   s c a n c o d e ) ; 
 
 / * !   @ b r i e f   R e t u r n s   t h e   p l a t f o r m - s p e c i f i c   s c a n c o d e   o f   t h e   s p e c i f i e d   k e y . 
   * 
   *     T h i s   f u n c t i o n   r e t u r n s   t h e   p l a t f o r m - s p e c i f i c   s c a n c o d e   o f   t h e   s p e c i f i e d   k e y . 
   * 
   *     I f   t h e   k e y   i s   ` G L F W _ K E Y _ U N K N O W N `   o r   d o e s   n o t   e x i s t   o n   t h e   k e y b o a r d   t h i s 
   *     m e t h o d   w i l l   r e t u r n   ` - 1 ` . 
   * 
   *     @ p a r a m [ i n ]   k e y   A n y   [ n a m e d   k e y ] ( @ r e f   k e y s ) . 
   *     @ r e t u r n   T h e   p l a t f o r m - s p e c i f i c   s c a n c o d e   f o r   t h e   k e y ,   o r   ` - 1 `   i f   a n 
   *     [ e r r o r ] ( @ r e f   e r r o r _ h a n d l i n g )   o c c u r r e d . 
   * 
   *     @ e r r o r s   P o s s i b l e   e r r o r s   i n c l u d e   @ r e f   G L F W _ N O T _ I N I T I A L I Z E D ,   @ r e f 
   *     G L F W _ I N V A L I D _ E N U M   a n d   @ r e f   G L F W _ P L A T F O R M _ E R R O R . 
   * 
   *     @ t h r e a d _ s a f e t y   T h i s   f u n c t i o n   m a y   b e   c a l l e d   f r o m   a n y   t h r e a d . 
   * 
   *     @ s a   @ r e f   i n p u t _ k e y 
   * 
   *     @ s i n c e   A d d e d   i n   v e r s i o n   3 . 3 . 
   * 
   *     @ i n g r o u p   i n p u t 
   * / 
 G L F W A P I   i n t   g l f w G e t K e y S c a n c o d e ( i n t   k e y ) ; 
 
 / * !   @ b r i e f   R e t u r n s   t h e   l a s t   r e p o r t e d   s t a t e   o f   a   k e y b o a r d   k e y   f o r   t h e   s p e c i f i e d 
   *     w i n d o w . 
   * 
   *     T h i s   f u n c t i o n   r e t u r n s   t h e   l a s t   s t a t e   r e p o r t e d   f o r   t h e   s p e c i f i e d   k e y   t o   t h e 
   *     s p e c i f i e d   w i n d o w .     T h e   r e t u r n e d   s t a t e   i s   o n e   o f   ` G L F W _ P R E S S `   o r 
   *     ` G L F W _ R E L E A S E ` .     T h e   a c t i o n   ` G L F W _ R E P E A T `   i s   o n l y   r e p o r t e d   t o   t h e   k e y   c a l l b a c k . 
   * 
   *     I f   t h e   @ r e f   G L F W _ S T I C K Y _ K E Y S   i n p u t   m o d e   i s   e n a b l e d ,   t h i s   f u n c t i o n   r e t u r n s 
   *     ` G L F W _ P R E S S `   t h e   f i r s t   t i m e   y o u   c a l l   i t   f o r   a   k e y   t h a t   w a s   p r e s s e d ,   e v e n   i f 
   *     t h a t   k e y   h a s   a l r e a d y   b e e n   r e l e a s e d . 
   * 
   *     T h e   k e y   f u n c t i o n s   d e a l   w i t h   p h y s i c a l   k e y s ,   w i t h   [ k e y   t o k e n s ] ( @ r e f   k e y s ) 
   *     n a m e d   a f t e r   t h e i r   u s e   o n   t h e   s t a n d a r d   U S   k e y b o a r d   l a y o u t .     I f   y o u   w a n t   t o 
   *     i n p u t   t e x t ,   u s e   t h e   U n i c o d e   c h a r a c t e r   c a l l b a c k   i n s t e a d . 
   * 
   *     T h e   [ m o d i f i e r   k e y   b i t   m a s k s ] ( @ r e f   m o d s )   a r e   n o t   k e y   t o k e n s   a n d   c a n n o t   b e 
   *     u s e d   w i t h   t h i s   f u n c t i o n . 
   * 
   *     _ _ D o   n o t   u s e   t h i s   f u n c t i o n _ _   t o   i m p l e m e n t   [ t e x t   i n p u t ] ( @ r e f   i n p u t _ c h a r ) . 
   * 
   *     @ p a r a m [ i n ]   w i n d o w   T h e   d e s i r e d   w i n d o w . 
   *     @ p a r a m [ i n ]   k e y   T h e   d e s i r e d   [ k e y b o a r d   k e y ] ( @ r e f   k e y s ) .     ` G L F W _ K E Y _ U N K N O W N `   i s 
   *     n o t   a   v a l i d   k e y   f o r   t h i s   f u n c t i o n . 
   *     @ r e t u r n   O n e   o f   ` G L F W _ P R E S S `   o r   ` G L F W _ R E L E A S E ` . 
   * 
   *     @ e r r o r s   P o s s i b l e   e r r o r s   i n c l u d e   @ r e f   G L F W _ N O T _ I N I T I A L I Z E D   a n d   @ r e f 
   *     G L F W _ I N V A L I D _ E N U M . 
   * 
   *     @ t h r e a d _ s a f e t y   T h i s   f u n c t i o n   m u s t   o n l y   b e   c a l l e d   f r o m   t h e   m a i n   t h r e a d . 
   * 
   *     @ s a   @ r e f   i n p u t _ k e y 
   * 
   *     @ s i n c e   A d d e d   i n   v e r s i o n   1 . 0 . 
   *     @ g l f w 3   A d d e d   w i n d o w   h a n d l e   p a r a m e t e r . 
   * 
   *     @ i n g r o u p   i n p u t 
   * / 
 G L F W A P I   i n t   g l f w G e t K e y ( G L F W w i n d o w *   w i n d o w ,   i n t   k e y ) ; 
 
 / * !   @ b r i e f   R e t u r n s   t h e   l a s t   r e p o r t e d   s t a t e   o f   a   m o u s e   b u t t o n   f o r   t h e   s p e c i f i e d 
   *     w i n d o w . 
   * 
   *     T h i s   f u n c t i o n   r e t u r n s   t h e   l a s t   s t a t e   r e p o r t e d   f o r   t h e   s p e c i f i e d   m o u s e   b u t t o n 
   *     t o   t h e   s p e c i f i e d   w i n d o w .     T h e   r e t u r n e d   s t a t e   i s   o n e   o f   ` G L F W _ P R E S S `   o r 
   *     ` G L F W _ R E L E A S E ` . 
   * 
   *     I f   t h e   @ r e f   G L F W _ S T I C K Y _ M O U S E _ B U T T O N S   i n p u t   m o d e   i s   e n a b l e d ,   t h i s   f u n c t i o n 
   *     r e t u r n s   ` G L F W _ P R E S S `   t h e   f i r s t   t i m e   y o u   c a l l   i t   f o r   a   m o u s e   b u t t o n   t h a t   w a s 
   *     p r e s s e d ,   e v e n   i f   t h a t   m o u s e   b u t t o n   h a s   a l r e a d y   b e e n   r e l e a s e d . 
   * 
   *     @ p a r a m [ i n ]   w i n d o w   T h e   d e s i r e d   w i n d o w . 
   *     @ p a r a m [ i n ]   b u t t o n   T h e   d e s i r e d   [ m o u s e   b u t t o n ] ( @ r e f   b u t t o n s ) . 
   *     @ r e t u r n   O n e   o f   ` G L F W _ P R E S S `   o r   ` G L F W _ R E L E A S E ` . 
   * 
   *     @ e r r o r s   P o s s i b l e   e r r o r s   i n c l u d e   @ r e f   G L F W _ N O T _ I N I T I A L I Z E D   a n d   @ r e f 
   *     G L F W _ I N V A L I D _ E N U M . 
   * 
   *     @ t h r e a d _ s a f e t y   T h i s   f u n c t i o n   m u s t   o n l y   b e   c a l l e d   f r o m   t h e   m a i n   t h r e a d . 
   * 
   *     @ s a   @ r e f   i n p u t _ m o u s e _ b u t t o n 
   * 
   *     @ s i n c e   A d d e d   i n   v e r s i o n   1 . 0 . 
   *     @ g l f w 3   A d d e d   w i n d o w   h a n d l e   p a r a m e t e r . 
   * 
   *     @ i n g r o u p   i n p u t 
   * / 
 G L F W A P I   i n t   g l f w G e t M o u s e B u t t o n ( G L F W w i n d o w *   w i n d o w ,   i n t   b u t t o n ) ; 
 
 / * !   @ b r i e f   R e t r i e v e s   t h e   p o s i t i o n   o f   t h e   c u r s o r   r e l a t i v e   t o   t h e   c o n t e n t   a r e a   o f 
   *     t h e   w i n d o w . 
   * 
   *     T h i s   f u n c t i o n   r e t u r n s   t h e   p o s i t i o n   o f   t h e   c u r s o r ,   i n   s c r e e n   c o o r d i n a t e s , 
   *     r e l a t i v e   t o   t h e   u p p e r - l e f t   c o r n e r   o f   t h e   c o n t e n t   a r e a   o f   t h e   s p e c i f i e d 
   *     w i n d o w . 
   * 
   *     I f   t h e   c u r s o r   i s   d i s a b l e d   ( w i t h   ` G L F W _ C U R S O R _ D I S A B L E D ` )   t h e n   t h e   c u r s o r 
   *     p o s i t i o n   i s   u n b o u n d e d   a n d   l i m i t e d   o n l y   b y   t h e   m i n i m u m   a n d   m a x i m u m   v a l u e s   o f 
   *     a   ` d o u b l e ` . 
   * 
   *     T h e   c o o r d i n a t e   c a n   b e   c o n v e r t e d   t o   t h e i r   i n t e g e r   e q u i v a l e n t s   w i t h   t h e 
   *     ` f l o o r `   f u n c t i o n .     C a s t i n g   d i r e c t l y   t o   a n   i n t e g e r   t y p e   w o r k s   f o r   p o s i t i v e 
   *     c o o r d i n a t e s ,   b u t   f a i l s   f o r   n e g a t i v e   o n e s . 
   * 
   *     A n y   o r   a l l   o f   t h e   p o s i t i o n   a r g u m e n t s   m a y   b e   ` N U L L ` .     I f   a n   e r r o r   o c c u r s ,   a l l 
   *     n o n - ` N U L L `   p o s i t i o n   a r g u m e n t s   w i l l   b e   s e t   t o   z e r o . 
   * 
   *     @ p a r a m [ i n ]   w i n d o w   T h e   d e s i r e d   w i n d o w . 
   *     @ p a r a m [ o u t ]   x p o s   W h e r e   t o   s t o r e   t h e   c u r s o r   x - c o o r d i n a t e ,   r e l a t i v e   t o   t h e 
   *     l e f t   e d g e   o f   t h e   c o n t e n t   a r e a ,   o r   ` N U L L ` . 
   *     @ p a r a m [ o u t ]   y p o s   W h e r e   t o   s t o r e   t h e   c u r s o r   y - c o o r d i n a t e ,   r e l a t i v e   t o   t h e   t o 
   *     t o p   e d g e   o f   t h e   c o n t e n t   a r e a ,   o r   ` N U L L ` . 
   * 
   *     @ e r r o r s   P o s s i b l e   e r r o r s   i n c l u d e   @ r e f   G L F W _ N O T _ I N I T I A L I Z E D   a n d   @ r e f 
   *     G L F W _ P L A T F O R M _ E R R O R . 
   * 
   *     @ t h r e a d _ s a f e t y   T h i s   f u n c t i o n   m u s t   o n l y   b e   c a l l e d   f r o m   t h e   m a i n   t h r e a d . 
   * 
   *     @ s a   @ r e f   c u r s o r _ p o s 
   *     @ s a   @ r e f   g l f w S e t C u r s o r P o s 
   * 
   *     @ s i n c e   A d d e d   i n   v e r s i o n   3 . 0 .     R e p l a c e s   ` g l f w G e t M o u s e P o s ` . 
   * 
   *     @ i n g r o u p   i n p u t 
   * / 
 G L F W A P I   v o i d   g l f w G e t C u r s o r P o s ( G L F W w i n d o w *   w i n d o w ,   d o u b l e *   x p o s ,   d o u b l e *   y p o s ) ; 
 
 / * !   @ b r i e f   S e t s   t h e   p o s i t i o n   o f   t h e   c u r s o r ,   r e l a t i v e   t o   t h e   c o n t e n t   a r e a   o f   t h e 
   *     w i n d o w . 
   * 
   *     T h i s   f u n c t i o n   s e t s   t h e   p o s i t i o n ,   i n   s c r e e n   c o o r d i n a t e s ,   o f   t h e   c u r s o r 
   *     r e l a t i v e   t o   t h e   u p p e r - l e f t   c o r n e r   o f   t h e   c o n t e n t   a r e a   o f   t h e   s p e c i f i e d 
   *     w i n d o w .     T h e   w i n d o w   m u s t   h a v e   i n p u t   f o c u s .     I f   t h e   w i n d o w   d o e s   n o t   h a v e 
   *     i n p u t   f o c u s   w h e n   t h i s   f u n c t i o n   i s   c a l l e d ,   i t   f a i l s   s i l e n t l y . 
   * 
   *     _ _ D o   n o t   u s e   t h i s   f u n c t i o n _ _   t o   i m p l e m e n t   t h i n g s   l i k e   c a m e r a   c o n t r o l s .     G L F W 
   *     a l r e a d y   p r o v i d e s   t h e   ` G L F W _ C U R S O R _ D I S A B L E D `   c u r s o r   m o d e   t h a t   h i d e s   t h e 
   *     c u r s o r ,   t r a n s p a r e n t l y   r e - c e n t e r s   i t   a n d   p r o v i d e s   u n c o n s t r a i n e d   c u r s o r 
   *     m o t i o n .     S e e   @ r e f   g l f w S e t I n p u t M o d e   f o r   m o r e   i n f o r m a t i o n . 
   * 
   *     I f   t h e   c u r s o r   m o d e   i s   ` G L F W _ C U R S O R _ D I S A B L E D `   t h e n   t h e   c u r s o r   p o s i t i o n   i s 
   *     u n c o n s t r a i n e d   a n d   l i m i t e d   o n l y   b y   t h e   m i n i m u m   a n d   m a x i m u m   v a l u e s   o f 
   *     a   ` d o u b l e ` . 
   * 
   *     @ p a r a m [ i n ]   w i n d o w   T h e   d e s i r e d   w i n d o w . 
   *     @ p a r a m [ i n ]   x p o s   T h e   d e s i r e d   x - c o o r d i n a t e ,   r e l a t i v e   t o   t h e   l e f t   e d g e   o f   t h e 
   *     c o n t e n t   a r e a . 
   *     @ p a r a m [ i n ]   y p o s   T h e   d e s i r e d   y - c o o r d i n a t e ,   r e l a t i v e   t o   t h e   t o p   e d g e   o f   t h e 
   *     c o n t e n t   a r e a . 
   * 
   *     @ e r r o r s   P o s s i b l e   e r r o r s   i n c l u d e   @ r e f   G L F W _ N O T _ I N I T I A L I Z E D ,   @ r e f 
   *     G L F W _ P L A T F O R M _ E R R O R   a n d   @ r e f   G L F W _ F E A T U R E _ U N A V A I L A B L E   ( s e e   r e m a r k s ) . 
   * 
   *     @ r e m a r k   @ w a y l a n d   T h i s   f u n c t i o n   w i l l   o n l y   w o r k   w h e n   t h e   c u r s o r   m o d e   i s 
   *     ` G L F W _ C U R S O R _ D I S A B L E D ` ,   o t h e r w i s e   i t   w i l l   e m i t   @ r e f   G L F W _ F E A T U R E _ U N A V A I L A B L E . 
   * 
   *     @ t h r e a d _ s a f e t y   T h i s   f u n c t i o n   m u s t   o n l y   b e   c a l l e d   f r o m   t h e   m a i n   t h r e a d . 
   * 
   *     @ s a   @ r e f   c u r s o r _ p o s 
   *     @ s a   @ r e f   g l f w G e t C u r s o r P o s 
   * 
   *     @ s i n c e   A d d e d   i n   v e r s i o n   3 . 0 .     R e p l a c e s   ` g l f w S e t M o u s e P o s ` . 
   * 
   *     @ i n g r o u p   i n p u t 
   * / 
 G L F W A P I   v o i d   g l f w S e t C u r s o r P o s ( G L F W w i n d o w *   w i n d o w ,   d o u b l e   x p o s ,   d o u b l e   y p o s ) ; 
 
 / * !   @ b r i e f   C r e a t e s   a   c u s t o m   c u r s o r . 
   * 
   *     C r e a t e s   a   n e w   c u s t o m   c u r s o r   i m a g e   t h a t   c a n   b e   s e t   f o r   a   w i n d o w   w i t h   @ r e f 
   *     g l f w S e t C u r s o r .     T h e   c u r s o r   c a n   b e   d e s t r o y e d   w i t h   @ r e f   g l f w D e s t r o y C u r s o r . 
   *     A n y   r e m a i n i n g   c u r s o r s   a r e   d e s t r o y e d   b y   @ r e f   g l f w T e r m i n a t e . 
   * 
   *     T h e   p i x e l s   a r e   3 2 - b i t ,   l i t t l e - e n d i a n ,   n o n - p r e m u l t i p l i e d   R G B A ,   i . e .   e i g h t 
   *     b i t s   p e r   c h a n n e l   w i t h   t h e   r e d   c h a n n e l   f i r s t .     T h e y   a r e   a r r a n g e d   c a n o n i c a l l y 
   *     a s   p a c k e d   s e q u e n t i a l   r o w s ,   s t a r t i n g   f r o m   t h e   t o p - l e f t   c o r n e r . 
   * 
   *     T h e   c u r s o r   h o t s p o t   i s   s p e c i f i e d   i n   p i x e l s ,   r e l a t i v e   t o   t h e   u p p e r - l e f t   c o r n e r 
   *     o f   t h e   c u r s o r   i m a g e .     L i k e   a l l   o t h e r   c o o r d i n a t e   s y s t e m s   i n   G L F W ,   t h e   X - a x i s 
   *     p o i n t s   t o   t h e   r i g h t   a n d   t h e   Y - a x i s   p o i n t s   d o w n . 
   * 
   *     @ p a r a m [ i n ]   i m a g e   T h e   d e s i r e d   c u r s o r   i m a g e . 
   *     @ p a r a m [ i n ]   x h o t   T h e   d e s i r e d   x - c o o r d i n a t e ,   i n   p i x e l s ,   o f   t h e   c u r s o r   h o t s p o t . 
   *     @ p a r a m [ i n ]   y h o t   T h e   d e s i r e d   y - c o o r d i n a t e ,   i n   p i x e l s ,   o f   t h e   c u r s o r   h o t s p o t . 
   *     @ r e t u r n   T h e   h a n d l e   o f   t h e   c r e a t e d   c u r s o r ,   o r   ` N U L L `   i f   a n 
   *     [ e r r o r ] ( @ r e f   e r r o r _ h a n d l i n g )   o c c u r r e d . 
   * 
   *     @ e r r o r s   P o s s i b l e   e r r o r s   i n c l u d e   @ r e f   G L F W _ N O T _ I N I T I A L I Z E D ,   @ r e f 
   *     G L F W _ I N V A L I D _ V A L U E   a n d   @ r e f   G L F W _ P L A T F O R M _ E R R O R . 
   * 
   *     @ p o i n t e r _ l i f e t i m e   T h e   s p e c i f i e d   i m a g e   d a t a   i s   c o p i e d   b e f o r e   t h i s   f u n c t i o n 
   *     r e t u r n s . 
   * 
   *     @ t h r e a d _ s a f e t y   T h i s   f u n c t i o n   m u s t   o n l y   b e   c a l l e d   f r o m   t h e   m a i n   t h r e a d . 
   * 
   *     @ s a   @ r e f   c u r s o r _ o b j e c t 
   *     @ s a   @ r e f   g l f w D e s t r o y C u r s o r 
   *     @ s a   @ r e f   g l f w C r e a t e S t a n d a r d C u r s o r 
   * 
   *     @ s i n c e   A d d e d   i n   v e r s i o n   3 . 1 . 
   * 
   *     @ i n g r o u p   i n p u t 
   * / 
 G L F W A P I   G L F W c u r s o r *   g l f w C r e a t e C u r s o r ( c o n s t   G L F W i m a g e *   i m a g e ,   i n t   x h o t ,   i n t   y h o t ) ; 
 
 / * !   @ b r i e f   C r e a t e s   a   c u r s o r   w i t h   a   s t a n d a r d   s h a p e . 
   * 
   *     R e t u r n s   a   c u r s o r   w i t h   a   s t a n d a r d   s h a p e ,   t h a t   c a n   b e   s e t   f o r   a   w i n d o w   w i t h 
   *     @ r e f   g l f w S e t C u r s o r .     T h e   i m a g e s   f o r   t h e s e   c u r s o r s   c o m e   f r o m   t h e   s y s t e m 
   *     c u r s o r   t h e m e   a n d   t h e i r   e x a c t   a p p e a r a n c e   w i l l   v a r y   b e t w e e n   p l a t f o r m s . 
   * 
   *     M o s t   o f   t h e s e   s h a p e s   a r e   g u a r a n t e e d   t o   e x i s t   o n   e v e r y   s u p p o r t e d   p l a t f o r m   b u t 
   *     a   f e w   m a y   n o t   b e   p r e s e n t .     S e e   t h e   t a b l e   b e l o w   f o r   d e t a i l s . 
   * 
   *     C u r s o r   s h a p e                                       |   W i n d o w s   |   m a c O S   |   X 1 1         |   W a y l a n d 
   *     - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -   |   - - - - - - -   |   - - - - -   |   - - - - - -   |   - - - - - - - 
   *     @ r e f   G L F W _ A R R O W _ C U R S O R                   |   Y e s           |   Y e s       |   Y e s         |   Y e s 
   *     @ r e f   G L F W _ I B E A M _ C U R S O R                   |   Y e s           |   Y e s       |   Y e s         |   Y e s 
   *     @ r e f   G L F W _ C R O S S H A I R _ C U R S O R           |   Y e s           |   Y e s       |   Y e s         |   Y e s 
   *     @ r e f   G L F W _ P O I N T I N G _ H A N D _ C U R S O R   |   Y e s           |   Y e s       |   Y e s         |   Y e s 
   *     @ r e f   G L F W _ R E S I Z E _ E W _ C U R S O R           |   Y e s           |   Y e s       |   Y e s         |   Y e s 
   *     @ r e f   G L F W _ R E S I Z E _ N S _ C U R S O R           |   Y e s           |   Y e s       |   Y e s         |   Y e s 
   *     @ r e f   G L F W _ R E S I Z E _ N W S E _ C U R S O R       |   Y e s           |   Y e s < s u p > 1 < / s u p >   |   M a y b e < s u p > 2 < / s u p >   |   M a y b e < s u p > 2 < / s u p > 
   *     @ r e f   G L F W _ R E S I Z E _ N E S W _ C U R S O R       |   Y e s           |   Y e s < s u p > 1 < / s u p >   |   M a y b e < s u p > 2 < / s u p >   |   M a y b e < s u p > 2 < / s u p > 
   *     @ r e f   G L F W _ R E S I Z E _ A L L _ C U R S O R         |   Y e s           |   Y e s       |   Y e s         |   Y e s 
   *     @ r e f   G L F W _ N O T _ A L L O W E D _ C U R S O R       |   Y e s           |   Y e s       |   M a y b e < s u p > 2 < / s u p >   |   M a y b e < s u p > 2 < / s u p > 
   * 
   *     1 )   T h i s   u s e s   a   p r i v a t e   s y s t e m   A P I   a n d   m a y   f a i l   i n   t h e   f u t u r e . 
   * 
   *     2 )   T h i s   u s e s   a   n e w e r   s t a n d a r d   t h a t   n o t   a l l   c u r s o r   t h e m e s   s u p p o r t . 
   * 
   *     I f   t h e   r e q u e s t e d   s h a p e   i s   n o t   a v a i l a b l e ,   t h i s   f u n c t i o n   e m i t s   a   @ r e f 
   *     G L F W _ C U R S O R _ U N A V A I L A B L E   e r r o r   a n d   r e t u r n s   ` N U L L ` . 
   * 
   *     @ p a r a m [ i n ]   s h a p e   O n e   o f   t h e   [ s t a n d a r d   s h a p e s ] ( @ r e f   s h a p e s ) . 
   *     @ r e t u r n   A   n e w   c u r s o r   r e a d y   t o   u s e   o r   ` N U L L `   i f   a n 
   *     [ e r r o r ] ( @ r e f   e r r o r _ h a n d l i n g )   o c c u r r e d . 
   * 
   *     @ e r r o r s   P o s s i b l e   e r r o r s   i n c l u d e   @ r e f   G L F W _ N O T _ I N I T I A L I Z E D ,   @ r e f 
   *     G L F W _ I N V A L I D _ E N U M ,   @ r e f   G L F W _ C U R S O R _ U N A V A I L A B L E   a n d   @ r e f 
   *     G L F W _ P L A T F O R M _ E R R O R . 
   * 
   *     @ t h r e a d _ s a f e t y   T h i s   f u n c t i o n   m u s t   o n l y   b e   c a l l e d   f r o m   t h e   m a i n   t h r e a d . 
   * 
   *     @ s a   @ r e f   c u r s o r _ s t a n d a r d 
   *     @ s a   @ r e f   g l f w C r e a t e C u r s o r 
   * 
   *     @ s i n c e   A d d e d   i n   v e r s i o n   3 . 1 . 
   * 
   *     @ i n g r o u p   i n p u t 
   * / 
 G L F W A P I   G L F W c u r s o r *   g l f w C r e a t e S t a n d a r d C u r s o r ( i n t   s h a p e ) ; 
 
 / * !   @ b r i e f   D e s t r o y s   a   c u r s o r . 
   * 
   *     T h i s   f u n c t i o n   d e s t r o y s   a   c u r s o r   p r e v i o u s l y   c r e a t e d   w i t h   @ r e f 
   *     g l f w C r e a t e C u r s o r .     A n y   r e m a i n i n g   c u r s o r s   w i l l   b e   d e s t r o y e d   b y   @ r e f 
   *     g l f w T e r m i n a t e . 
   * 
   *     I f   t h e   s p e c i f i e d   c u r s o r   i s   c u r r e n t   f o r   a n y   w i n d o w ,   t h a t   w i n d o w   w i l l   b e 
   *     r e v e r t e d   t o   t h e   d e f a u l t   c u r s o r .     T h i s   d o e s   n o t   a f f e c t   t h e   c u r s o r   m o d e . 
   * 
   *     @ p a r a m [ i n ]   c u r s o r   T h e   c u r s o r   o b j e c t   t o   d e s t r o y . 
   * 
   *     @ e r r o r s   P o s s i b l e   e r r o r s   i n c l u d e   @ r e f   G L F W _ N O T _ I N I T I A L I Z E D   a n d   @ r e f 
   *     G L F W _ P L A T F O R M _ E R R O R . 
   * 
   *     @ r e e n t r a n c y   T h i s   f u n c t i o n   m u s t   n o t   b e   c a l l e d   f r o m   a   c a l l b a c k . 
   * 
   *     @ t h r e a d _ s a f e t y   T h i s   f u n c t i o n   m u s t   o n l y   b e   c a l l e d   f r o m   t h e   m a i n   t h r e a d . 
   * 
   *     @ s a   @ r e f   c u r s o r _ o b j e c t 
   *     @ s a   @ r e f   g l f w C r e a t e C u r s o r 
   * 
   *     @ s i n c e   A d d e d   i n   v e r s i o n   3 . 1 . 
   * 
   *     @ i n g r o u p   i n p u t 
   * / 
 G L F W A P I   v o i d   g l f w D e s t r o y C u r s o r ( G L F W c u r s o r *   c u r s o r ) ; 
 
 / * !   @ b r i e f   S e t s   t h e   c u r s o r   f o r   t h e   w i n d o w . 
   * 
   *     T h i s   f u n c t i o n   s e t s   t h e   c u r s o r   i m a g e   t o   b e   u s e d   w h e n   t h e   c u r s o r   i s   o v e r   t h e 
   *     c o n t e n t   a r e a   o f   t h e   s p e c i f i e d   w i n d o w .     T h e   s e t   c u r s o r   w i l l   o n l y   b e   v i s i b l e 
   *     w h e n   t h e   [ c u r s o r   m o d e ] ( @ r e f   c u r s o r _ m o d e )   o f   t h e   w i n d o w   i s 
   *     ` G L F W _ C U R S O R _ N O R M A L ` . 
   * 
   *     O n   s o m e   p l a t f o r m s ,   t h e   s e t   c u r s o r   m a y   n o t   b e   v i s i b l e   u n l e s s   t h e   w i n d o w   a l s o 
   *     h a s   i n p u t   f o c u s . 
   * 
   *     @ p a r a m [ i n ]   w i n d o w   T h e   w i n d o w   t o   s e t   t h e   c u r s o r   f o r . 
   *     @ p a r a m [ i n ]   c u r s o r   T h e   c u r s o r   t o   s e t ,   o r   ` N U L L `   t o   s w i t c h   b a c k   t o   t h e   d e f a u l t 
   *     a r r o w   c u r s o r . 
   * 
   *     @ e r r o r s   P o s s i b l e   e r r o r s   i n c l u d e   @ r e f   G L F W _ N O T _ I N I T I A L I Z E D   a n d   @ r e f 
   *     G L F W _ P L A T F O R M _ E R R O R . 
   * 
   *     @ t h r e a d _ s a f e t y   T h i s   f u n c t i o n   m u s t   o n l y   b e   c a l l e d   f r o m   t h e   m a i n   t h r e a d . 
   * 
   *     @ s a   @ r e f   c u r s o r _ o b j e c t 
   * 
   *     @ s i n c e   A d d e d   i n   v e r s i o n   3 . 1 . 
   * 
   *     @ i n g r o u p   i n p u t 
   * / 
 G L F W A P I   v o i d   g l f w S e t C u r s o r ( G L F W w i n d o w *   w i n d o w ,   G L F W c u r s o r *   c u r s o r ) ; 
 
 / * !   @ b r i e f   S e t s   t h e   k e y   c a l l b a c k . 
   * 
   *     T h i s   f u n c t i o n   s e t s   t h e   k e y   c a l l b a c k   o f   t h e   s p e c i f i e d   w i n d o w ,   w h i c h   i s   c a l l e d 
   *     w h e n   a   k e y   i s   p r e s s e d ,   r e p e a t e d   o r   r e l e a s e d . 
   * 
   *     T h e   k e y   f u n c t i o n s   d e a l   w i t h   p h y s i c a l   k e y s ,   w i t h   l a y o u t   i n d e p e n d e n t 
   *     [ k e y   t o k e n s ] ( @ r e f   k e y s )   n a m e d   a f t e r   t h e i r   v a l u e s   i n   t h e   s t a n d a r d   U S   k e y b o a r d 
   *     l a y o u t .     I f   y o u   w a n t   t o   i n p u t   t e x t ,   u s e   t h e 
   *     [ c h a r a c t e r   c a l l b a c k ] ( @ r e f   g l f w S e t C h a r C a l l b a c k )   i n s t e a d . 
   * 
   *     W h e n   a   w i n d o w   l o s e s   i n p u t   f o c u s ,   i t   w i l l   g e n e r a t e   s y n t h e t i c   k e y   r e l e a s e 
   *     e v e n t s   f o r   a l l   p r e s s e d   k e y s .     Y o u   c a n   t e l l   t h e s e   e v e n t s   f r o m   u s e r - g e n e r a t e d 
   *     e v e n t s   b y   t h e   f a c t   t h a t   t h e   s y n t h e t i c   o n e s   a r e   g e n e r a t e d   a f t e r   t h e   f o c u s 
   *     l o s s   e v e n t   h a s   b e e n   p r o c e s s e d ,   i . e .   a f t e r   t h e 
   *     [ w i n d o w   f o c u s   c a l l b a c k ] ( @ r e f   g l f w S e t W i n d o w F o c u s C a l l b a c k )   h a s   b e e n   c a l l e d . 
   * 
   *     T h e   s c a n c o d e   o f   a   k e y   i s   s p e c i f i c   t o   t h a t   p l a t f o r m   o r   s o m e t i m e s   e v e n   t o   t h a t 
   *     m a c h i n e .     S c a n c o d e s   a r e   i n t e n d e d   t o   a l l o w   u s e r s   t o   b i n d   k e y s   t h a t   d o n ' t   h a v e 
   *     a   G L F W   k e y   t o k e n .     S u c h   k e y s   h a v e   ` k e y `   s e t   t o   ` G L F W _ K E Y _ U N K N O W N ` ,   t h e i r 
   *     s t a t e   i s   n o t   s a v e d   a n d   s o   i t   c a n n o t   b e   q u e r i e d   w i t h   @ r e f   g l f w G e t K e y . 
   * 
   *     S o m e t i m e s   G L F W   n e e d s   t o   g e n e r a t e   s y n t h e t i c   k e y   e v e n t s ,   i n   w h i c h   c a s e   t h e 
   *     s c a n c o d e   m a y   b e   z e r o . 
   * 
   *     @ p a r a m [ i n ]   w i n d o w   T h e   w i n d o w   w h o s e   c a l l b a c k   t o   s e t . 
   *     @ p a r a m [ i n ]   c a l l b a c k   T h e   n e w   k e y   c a l l b a c k ,   o r   ` N U L L `   t o   r e m o v e   t h e   c u r r e n t l y 
   *     s e t   c a l l b a c k . 
   *     @ r e t u r n   T h e   p r e v i o u s l y   s e t   c a l l b a c k ,   o r   ` N U L L `   i f   n o   c a l l b a c k   w a s   s e t   o r   t h e 
   *     l i b r a r y   h a d   n o t   b e e n   [ i n i t i a l i z e d ] ( @ r e f   i n t r o _ i n i t ) . 
   * 
   *     @ c a l l b a c k _ s i g n a t u r e 
   *     @ c o d e 
   *     v o i d   f u n c t i o n _ n a m e ( G L F W w i n d o w *   w i n d o w ,   i n t   k e y ,   i n t   s c a n c o d e ,   i n t   a c t i o n ,   i n t   m o d s ) 
   *     @ e n d c o d e 
   *     F o r   m o r e   i n f o r m a t i o n   a b o u t   t h e   c a l l b a c k   p a r a m e t e r s ,   s e e   t h e 
   *     [ f u n c t i o n   p o i n t e r   t y p e ] ( @ r e f   G L F W k e y f u n ) . 
   * 
   *     @ e r r o r s   P o s s i b l e   e r r o r s   i n c l u d e   @ r e f   G L F W _ N O T _ I N I T I A L I Z E D . 
   * 
   *     @ t h r e a d _ s a f e t y   T h i s   f u n c t i o n   m u s t   o n l y   b e   c a l l e d   f r o m   t h e   m a i n   t h r e a d . 
   * 
   *     @ s a   @ r e f   i n p u t _ k e y 
   * 
   *     @ s i n c e   A d d e d   i n   v e r s i o n   1 . 0 . 
   *     @ g l f w 3   A d d e d   w i n d o w   h a n d l e   p a r a m e t e r   a n d   r e t u r n   v a l u e . 
   * 
   *     @ i n g r o u p   i n p u t 
   * / 
 G L F W A P I   G L F W k e y f u n   g l f w S e t K e y C a l l b a c k ( G L F W w i n d o w *   w i n d o w ,   G L F W k e y f u n   c a l l b a c k ) ; 
 
 / * !   @ b r i e f   S e t s   t h e   U n i c o d e   c h a r a c t e r   c a l l b a c k . 
   * 
   *     T h i s   f u n c t i o n   s e t s   t h e   c h a r a c t e r   c a l l b a c k   o f   t h e   s p e c i f i e d   w i n d o w ,   w h i c h   i s 
   *     c a l l e d   w h e n   a   U n i c o d e   c h a r a c t e r   i s   i n p u t . 
   * 
   *     T h e   c h a r a c t e r   c a l l b a c k   i s   i n t e n d e d   f o r   U n i c o d e   t e x t   i n p u t .     A s   i t   d e a l s   w i t h 
   *     c h a r a c t e r s ,   i t   i s   k e y b o a r d   l a y o u t   d e p e n d e n t ,   w h e r e a s   t h e 
   *     [ k e y   c a l l b a c k ] ( @ r e f   g l f w S e t K e y C a l l b a c k )   i s   n o t .     C h a r a c t e r s   d o   n o t   m a p   1 : 1 
   *     t o   p h y s i c a l   k e y s ,   a s   a   k e y   m a y   p r o d u c e   z e r o ,   o n e   o r   m o r e   c h a r a c t e r s .     I f   y o u 
   *     w a n t   t o   k n o w   w h e t h e r   a   s p e c i f i c   p h y s i c a l   k e y   w a s   p r e s s e d   o r   r e l e a s e d ,   s e e 
   *     t h e   k e y   c a l l b a c k   i n s t e a d . 
   * 
   *     T h e   c h a r a c t e r   c a l l b a c k   b e h a v e s   a s   s y s t e m   t e x t   i n p u t   n o r m a l l y   d o e s   a n d   w i l l 
   *     n o t   b e   c a l l e d   i f   m o d i f i e r   k e y s   a r e   h e l d   d o w n   t h a t   w o u l d   p r e v e n t   n o r m a l   t e x t 
   *     i n p u t   o n   t h a t   p l a t f o r m ,   f o r   e x a m p l e   a   S u p e r   ( C o m m a n d )   k e y   o n   m a c O S   o r   A l t   k e y 
   *     o n   W i n d o w s . 
   * 
   *     @ p a r a m [ i n ]   w i n d o w   T h e   w i n d o w   w h o s e   c a l l b a c k   t o   s e t . 
   *     @ p a r a m [ i n ]   c a l l b a c k   T h e   n e w   c a l l b a c k ,   o r   ` N U L L `   t o   r e m o v e   t h e   c u r r e n t l y   s e t 
   *     c a l l b a c k . 
   *     @ r e t u r n   T h e   p r e v i o u s l y   s e t   c a l l b a c k ,   o r   ` N U L L `   i f   n o   c a l l b a c k   w a s   s e t   o r   t h e 
   *     l i b r a r y   h a d   n o t   b e e n   [ i n i t i a l i z e d ] ( @ r e f   i n t r o _ i n i t ) . 
   * 
   *     @ c a l l b a c k _ s i g n a t u r e 
   *     @ c o d e 
   *     v o i d   f u n c t i o n _ n a m e ( G L F W w i n d o w *   w i n d o w ,   u n s i g n e d   i n t   c o d e p o i n t ) 
   *     @ e n d c o d e 
   *     F o r   m o r e   i n f o r m a t i o n   a b o u t   t h e   c a l l b a c k   p a r a m e t e r s ,   s e e   t h e 
   *     [ f u n c t i o n   p o i n t e r   t y p e ] ( @ r e f   G L F W c h a r f u n ) . 
   * 
   *     @ e r r o r s   P o s s i b l e   e r r o r s   i n c l u d e   @ r e f   G L F W _ N O T _ I N I T I A L I Z E D . 
   * 
   *     @ t h r e a d _ s a f e t y   T h i s   f u n c t i o n   m u s t   o n l y   b e   c a l l e d   f r o m   t h e   m a i n   t h r e a d . 
   * 
   *     @ s a   @ r e f   i n p u t _ c h a r 
   * 
   *     @ s i n c e   A d d e d   i n   v e r s i o n   2 . 4 . 
   *     @ g l f w 3   A d d e d   w i n d o w   h a n d l e   p a r a m e t e r   a n d   r e t u r n   v a l u e . 
   * 
   *     @ i n g r o u p   i n p u t 
   * / 
 G L F W A P I   G L F W c h a r f u n   g l f w S e t C h a r C a l l b a c k ( G L F W w i n d o w *   w i n d o w ,   G L F W c h a r f u n   c a l l b a c k ) ; 
 
 / * !   @ b r i e f   S e t s   t h e   U n i c o d e   c h a r a c t e r   w i t h   m o d i f i e r s   c a l l b a c k . 
   * 
   *     T h i s   f u n c t i o n   s e t s   t h e   c h a r a c t e r   w i t h   m o d i f i e r s   c a l l b a c k   o f   t h e   s p e c i f i e d 
   *     w i n d o w ,   w h i c h   i s   c a l l e d   w h e n   a   U n i c o d e   c h a r a c t e r   i s   i n p u t   r e g a r d l e s s   o f   w h a t 
   *     m o d i f i e r   k e y s   a r e   u s e d . 
   * 
   *     T h e   c h a r a c t e r   w i t h   m o d i f i e r s   c a l l b a c k   i s   i n t e n d e d   f o r   i m p l e m e n t i n g   c u s t o m 
   *     U n i c o d e   c h a r a c t e r   i n p u t .     F o r   r e g u l a r   U n i c o d e   t e x t   i n p u t ,   s e e   t h e 
   *     [ c h a r a c t e r   c a l l b a c k ] ( @ r e f   g l f w S e t C h a r C a l l b a c k ) .     L i k e   t h e   c h a r a c t e r 
   *     c a l l b a c k ,   t h e   c h a r a c t e r   w i t h   m o d i f i e r s   c a l l b a c k   d e a l s   w i t h   c h a r a c t e r s   a n d   i s 
   *     k e y b o a r d   l a y o u t   d e p e n d e n t .     C h a r a c t e r s   d o   n o t   m a p   1 : 1   t o   p h y s i c a l   k e y s ,   a s 
   *     a   k e y   m a y   p r o d u c e   z e r o ,   o n e   o r   m o r e   c h a r a c t e r s .     I f   y o u   w a n t   t o   k n o w   w h e t h e r 
   *     a   s p e c i f i c   p h y s i c a l   k e y   w a s   p r e s s e d   o r   r e l e a s e d ,   s e e   t h e 
   *     [ k e y   c a l l b a c k ] ( @ r e f   g l f w S e t K e y C a l l b a c k )   i n s t e a d . 
   * 
   *     @ p a r a m [ i n ]   w i n d o w   T h e   w i n d o w   w h o s e   c a l l b a c k   t o   s e t . 
   *     @ p a r a m [ i n ]   c a l l b a c k   T h e   n e w   c a l l b a c k ,   o r   ` N U L L `   t o   r e m o v e   t h e   c u r r e n t l y   s e t 
   *     c a l l b a c k . 
   *     @ r e t u r n   T h e   p r e v i o u s l y   s e t   c a l l b a c k ,   o r   ` N U L L `   i f   n o   c a l l b a c k   w a s   s e t   o r   a n 
   *     [ e r r o r ] ( @ r e f   e r r o r _ h a n d l i n g )   o c c u r r e d . 
   * 
   *     @ c a l l b a c k _ s i g n a t u r e 
   *     @ c o d e 
   *     v o i d   f u n c t i o n _ n a m e ( G L F W w i n d o w *   w i n d o w ,   u n s i g n e d   i n t   c o d e p o i n t ,   i n t   m o d s ) 
   *     @ e n d c o d e 
   *     F o r   m o r e   i n f o r m a t i o n   a b o u t   t h e   c a l l b a c k   p a r a m e t e r s ,   s e e   t h e 
   *     [ f u n c t i o n   p o i n t e r   t y p e ] ( @ r e f   G L F W c h a r m o d s f u n ) . 
   * 
   *     @ d e p r e c a t e d   S c h e d u l e d   f o r   r e m o v a l   i n   v e r s i o n   4 . 0 . 
   * 
   *     @ e r r o r s   P o s s i b l e   e r r o r s   i n c l u d e   @ r e f   G L F W _ N O T _ I N I T I A L I Z E D . 
   * 
   *     @ t h r e a d _ s a f e t y   T h i s   f u n c t i o n   m u s t   o n l y   b e   c a l l e d   f r o m   t h e   m a i n   t h r e a d . 
   * 
   *     @ s a   @ r e f   i n p u t _ c h a r 
   * 
   *     @ s i n c e   A d d e d   i n   v e r s i o n   3 . 1 . 
   * 
   *     @ i n g r o u p   i n p u t 
   * / 
 G L F W A P I   G L F W c h a r m o d s f u n   g l f w S e t C h a r M o d s C a l l b a c k ( G L F W w i n d o w *   w i n d o w ,   G L F W c h a r m o d s f u n   c a l l b a c k ) ; 
 
 / * !   @ b r i e f   S e t s   t h e   m o u s e   b u t t o n   c a l l b a c k . 
   * 
   *     T h i s   f u n c t i o n   s e t s   t h e   m o u s e   b u t t o n   c a l l b a c k   o f   t h e   s p e c i f i e d   w i n d o w ,   w h i c h 
   *     i s   c a l l e d   w h e n   a   m o u s e   b u t t o n   i s   p r e s s e d   o r   r e l e a s e d . 
   * 
   *     W h e n   a   w i n d o w   l o s e s   i n p u t   f o c u s ,   i t   w i l l   g e n e r a t e   s y n t h e t i c   m o u s e   b u t t o n 
   *     r e l e a s e   e v e n t s   f o r   a l l   p r e s s e d   m o u s e   b u t t o n s .     Y o u   c a n   t e l l   t h e s e   e v e n t s 
   *     f r o m   u s e r - g e n e r a t e d   e v e n t s   b y   t h e   f a c t   t h a t   t h e   s y n t h e t i c   o n e s   a r e   g e n e r a t e d 
   *     a f t e r   t h e   f o c u s   l o s s   e v e n t   h a s   b e e n   p r o c e s s e d ,   i . e .   a f t e r   t h e 
   *     [ w i n d o w   f o c u s   c a l l b a c k ] ( @ r e f   g l f w S e t W i n d o w F o c u s C a l l b a c k )   h a s   b e e n   c a l l e d . 
   * 
   *     @ p a r a m [ i n ]   w i n d o w   T h e   w i n d o w   w h o s e   c a l l b a c k   t o   s e t . 
   *     @ p a r a m [ i n ]   c a l l b a c k   T h e   n e w   c a l l b a c k ,   o r   ` N U L L `   t o   r e m o v e   t h e   c u r r e n t l y   s e t 
   *     c a l l b a c k . 
   *     @ r e t u r n   T h e   p r e v i o u s l y   s e t   c a l l b a c k ,   o r   ` N U L L `   i f   n o   c a l l b a c k   w a s   s e t   o r   t h e 
   *     l i b r a r y   h a d   n o t   b e e n   [ i n i t i a l i z e d ] ( @ r e f   i n t r o _ i n i t ) . 
   * 
   *     @ c a l l b a c k _ s i g n a t u r e 
   *     @ c o d e 
   *     v o i d   f u n c t i o n _ n a m e ( G L F W w i n d o w *   w i n d o w ,   i n t   b u t t o n ,   i n t   a c t i o n ,   i n t   m o d s ) 
   *     @ e n d c o d e 
   *     F o r   m o r e   i n f o r m a t i o n   a b o u t   t h e   c a l l b a c k   p a r a m e t e r s ,   s e e   t h e 
   *     [ f u n c t i o n   p o i n t e r   t y p e ] ( @ r e f   G L F W m o u s e b u t t o n f u n ) . 
   * 
   *     @ e r r o r s   P o s s i b l e   e r r o r s   i n c l u d e   @ r e f   G L F W _ N O T _ I N I T I A L I Z E D . 
   * 
   *     @ t h r e a d _ s a f e t y   T h i s   f u n c t i o n   m u s t   o n l y   b e   c a l l e d   f r o m   t h e   m a i n   t h r e a d . 
   * 
   *     @ s a   @ r e f   i n p u t _ m o u s e _ b u t t o n 
   * 
   *     @ s i n c e   A d d e d   i n   v e r s i o n   1 . 0 . 
   *     @ g l f w 3   A d d e d   w i n d o w   h a n d l e   p a r a m e t e r   a n d   r e t u r n   v a l u e . 
   * 
   *     @ i n g r o u p   i n p u t 
   * / 
 G L F W A P I   G L F W m o u s e b u t t o n f u n   g l f w S e t M o u s e B u t t o n C a l l b a c k ( G L F W w i n d o w *   w i n d o w ,   G L F W m o u s e b u t t o n f u n   c a l l b a c k ) ; 
 
 / * !   @ b r i e f   S e t s   t h e   c u r s o r   p o s i t i o n   c a l l b a c k . 
   * 
   *     T h i s   f u n c t i o n   s e t s   t h e   c u r s o r   p o s i t i o n   c a l l b a c k   o f   t h e   s p e c i f i e d   w i n d o w , 
   *     w h i c h   i s   c a l l e d   w h e n   t h e   c u r s o r   i s   m o v e d .     T h e   c a l l b a c k   i s   p r o v i d e d   w i t h   t h e 
   *     p o s i t i o n ,   i n   s c r e e n   c o o r d i n a t e s ,   r e l a t i v e   t o   t h e   u p p e r - l e f t   c o r n e r   o f   t h e 
   *     c o n t e n t   a r e a   o f   t h e   w i n d o w . 
   * 
   *     @ p a r a m [ i n ]   w i n d o w   T h e   w i n d o w   w h o s e   c a l l b a c k   t o   s e t . 
   *     @ p a r a m [ i n ]   c a l l b a c k   T h e   n e w   c a l l b a c k ,   o r   ` N U L L `   t o   r e m o v e   t h e   c u r r e n t l y   s e t 
   *     c a l l b a c k . 
   *     @ r e t u r n   T h e   p r e v i o u s l y   s e t   c a l l b a c k ,   o r   ` N U L L `   i f   n o   c a l l b a c k   w a s   s e t   o r   t h e 
   *     l i b r a r y   h a d   n o t   b e e n   [ i n i t i a l i z e d ] ( @ r e f   i n t r o _ i n i t ) . 
   * 
   *     @ c a l l b a c k _ s i g n a t u r e 
   *     @ c o d e 
   *     v o i d   f u n c t i o n _ n a m e ( G L F W w i n d o w *   w i n d o w ,   d o u b l e   x p o s ,   d o u b l e   y p o s ) ; 
   *     @ e n d c o d e 
   *     F o r   m o r e   i n f o r m a t i o n   a b o u t   t h e   c a l l b a c k   p a r a m e t e r s ,   s e e   t h e 
   *     [ f u n c t i o n   p o i n t e r   t y p e ] ( @ r e f   G L F W c u r s o r p o s f u n ) . 
   * 
   *     @ e r r o r s   P o s s i b l e   e r r o r s   i n c l u d e   @ r e f   G L F W _ N O T _ I N I T I A L I Z E D . 
   * 
   *     @ t h r e a d _ s a f e t y   T h i s   f u n c t i o n   m u s t   o n l y   b e   c a l l e d   f r o m   t h e   m a i n   t h r e a d . 
   * 
   *     @ s a   @ r e f   c u r s o r _ p o s 
   * 
   *     @ s i n c e   A d d e d   i n   v e r s i o n   3 . 0 .     R e p l a c e s   ` g l f w S e t M o u s e P o s C a l l b a c k ` . 
   * 
   *     @ i n g r o u p   i n p u t 
   * / 
 G L F W A P I   G L F W c u r s o r p o s f u n   g l f w S e t C u r s o r P o s C a l l b a c k ( G L F W w i n d o w *   w i n d o w ,   G L F W c u r s o r p o s f u n   c a l l b a c k ) ; 
 
 / * !   @ b r i e f   S e t s   t h e   c u r s o r   e n t e r / l e a v e   c a l l b a c k . 
   * 
   *     T h i s   f u n c t i o n   s e t s   t h e   c u r s o r   b o u n d a r y   c r o s s i n g   c a l l b a c k   o f   t h e   s p e c i f i e d 
   *     w i n d o w ,   w h i c h   i s   c a l l e d   w h e n   t h e   c u r s o r   e n t e r s   o r   l e a v e s   t h e   c o n t e n t   a r e a   o f 
   *     t h e   w i n d o w . 
   * 
   *     @ p a r a m [ i n ]   w i n d o w   T h e   w i n d o w   w h o s e   c a l l b a c k   t o   s e t . 
   *     @ p a r a m [ i n ]   c a l l b a c k   T h e   n e w   c a l l b a c k ,   o r   ` N U L L `   t o   r e m o v e   t h e   c u r r e n t l y   s e t 
   *     c a l l b a c k . 
   *     @ r e t u r n   T h e   p r e v i o u s l y   s e t   c a l l b a c k ,   o r   ` N U L L `   i f   n o   c a l l b a c k   w a s   s e t   o r   t h e 
   *     l i b r a r y   h a d   n o t   b e e n   [ i n i t i a l i z e d ] ( @ r e f   i n t r o _ i n i t ) . 
   * 
   *     @ c a l l b a c k _ s i g n a t u r e 
   *     @ c o d e 
   *     v o i d   f u n c t i o n _ n a m e ( G L F W w i n d o w *   w i n d o w ,   i n t   e n t e r e d ) 
   *     @ e n d c o d e 
   *     F o r   m o r e   i n f o r m a t i o n   a b o u t   t h e   c a l l b a c k   p a r a m e t e r s ,   s e e   t h e 
   *     [ f u n c t i o n   p o i n t e r   t y p e ] ( @ r e f   G L F W c u r s o r e n t e r f u n ) . 
   * 
   *     @ e r r o r s   P o s s i b l e   e r r o r s   i n c l u d e   @ r e f   G L F W _ N O T _ I N I T I A L I Z E D . 
   * 
   *     @ t h r e a d _ s a f e t y   T h i s   f u n c t i o n   m u s t   o n l y   b e   c a l l e d   f r o m   t h e   m a i n   t h r e a d . 
   * 
   *     @ s a   @ r e f   c u r s o r _ e n t e r 
   * 
   *     @ s i n c e   A d d e d   i n   v e r s i o n   3 . 0 . 
   * 
   *     @ i n g r o u p   i n p u t 
   * / 
 G L F W A P I   G L F W c u r s o r e n t e r f u n   g l f w S e t C u r s o r E n t e r C a l l b a c k ( G L F W w i n d o w *   w i n d o w ,   G L F W c u r s o r e n t e r f u n   c a l l b a c k ) ; 
 
 / * !   @ b r i e f   S e t s   t h e   s c r o l l   c a l l b a c k . 
   * 
   *     T h i s   f u n c t i o n   s e t s   t h e   s c r o l l   c a l l b a c k   o f   t h e   s p e c i f i e d   w i n d o w ,   w h i c h   i s 
   *     c a l l e d   w h e n   a   s c r o l l i n g   d e v i c e   i s   u s e d ,   s u c h   a s   a   m o u s e   w h e e l   o r   s c r o l l i n g 
   *     a r e a   o f   a   t o u c h p a d . 
   * 
   *     T h e   s c r o l l   c a l l b a c k   r e c e i v e s   a l l   s c r o l l i n g   i n p u t ,   l i k e   t h a t   f r o m   a   m o u s e 
   *     w h e e l   o r   a   t o u c h p a d   s c r o l l i n g   a r e a . 
   * 
   *     @ p a r a m [ i n ]   w i n d o w   T h e   w i n d o w   w h o s e   c a l l b a c k   t o   s e t . 
   *     @ p a r a m [ i n ]   c a l l b a c k   T h e   n e w   s c r o l l   c a l l b a c k ,   o r   ` N U L L `   t o   r e m o v e   t h e 
   *     c u r r e n t l y   s e t   c a l l b a c k . 
   *     @ r e t u r n   T h e   p r e v i o u s l y   s e t   c a l l b a c k ,   o r   ` N U L L `   i f   n o   c a l l b a c k   w a s   s e t   o r   t h e 
   *     l i b r a r y   h a d   n o t   b e e n   [ i n i t i a l i z e d ] ( @ r e f   i n t r o _ i n i t ) . 
   * 
   *     @ c a l l b a c k _ s i g n a t u r e 
   *     @ c o d e 
   *     v o i d   f u n c t i o n _ n a m e ( G L F W w i n d o w *   w i n d o w ,   d o u b l e   x o f f s e t ,   d o u b l e   y o f f s e t ) 
   *     @ e n d c o d e 
   *     F o r   m o r e   i n f o r m a t i o n   a b o u t   t h e   c a l l b a c k   p a r a m e t e r s ,   s e e   t h e 
   *     [ f u n c t i o n   p o i n t e r   t y p e ] ( @ r e f   G L F W s c r o l l f u n ) . 
   * 
   *     @ e r r o r s   P o s s i b l e   e r r o r s   i n c l u d e   @ r e f   G L F W _ N O T _ I N I T I A L I Z E D . 
   * 
   *     @ t h r e a d _ s a f e t y   T h i s   f u n c t i o n   m u s t   o n l y   b e   c a l l e d   f r o m   t h e   m a i n   t h r e a d . 
   * 
   *     @ s a   @ r e f   s c r o l l i n g 
   * 
   *     @ s i n c e   A d d e d   i n   v e r s i o n   3 . 0 .     R e p l a c e s   ` g l f w S e t M o u s e W h e e l C a l l b a c k ` . 
   * 
   *     @ i n g r o u p   i n p u t 
   * / 
 G L F W A P I   G L F W s c r o l l f u n   g l f w S e t S c r o l l C a l l b a c k ( G L F W w i n d o w *   w i n d o w ,   G L F W s c r o l l f u n   c a l l b a c k ) ; 
 
 / * !   @ b r i e f   S e t s   t h e   p a t h   d r o p   c a l l b a c k . 
   * 
   *     T h i s   f u n c t i o n   s e t s   t h e   p a t h   d r o p   c a l l b a c k   o f   t h e   s p e c i f i e d   w i n d o w ,   w h i c h   i s 
   *     c a l l e d   w h e n   o n e   o r   m o r e   d r a g g e d   p a t h s   a r e   d r o p p e d   o n   t h e   w i n d o w . 
   * 
   *     B e c a u s e   t h e   p a t h   a r r a y   a n d   i t s   s t r i n g s   m a y   h a v e   b e e n   g e n e r a t e d   s p e c i f i c a l l y 
   *     f o r   t h a t   e v e n t ,   t h e y   a r e   n o t   g u a r a n t e e d   t o   b e   v a l i d   a f t e r   t h e   c a l l b a c k   h a s 
   *     r e t u r n e d .     I f   y o u   w i s h   t o   u s e   t h e m   a f t e r   t h e   c a l l b a c k   r e t u r n s ,   y o u   n e e d   t o 
   *     m a k e   a   d e e p   c o p y . 
   * 
   *     @ p a r a m [ i n ]   w i n d o w   T h e   w i n d o w   w h o s e   c a l l b a c k   t o   s e t . 
   *     @ p a r a m [ i n ]   c a l l b a c k   T h e   n e w   f i l e   d r o p   c a l l b a c k ,   o r   ` N U L L `   t o   r e m o v e   t h e 
   *     c u r r e n t l y   s e t   c a l l b a c k . 
   *     @ r e t u r n   T h e   p r e v i o u s l y   s e t   c a l l b a c k ,   o r   ` N U L L `   i f   n o   c a l l b a c k   w a s   s e t   o r   t h e 
   *     l i b r a r y   h a d   n o t   b e e n   [ i n i t i a l i z e d ] ( @ r e f   i n t r o _ i n i t ) . 
   * 
   *     @ c a l l b a c k _ s i g n a t u r e 
   *     @ c o d e 
   *     v o i d   f u n c t i o n _ n a m e ( G L F W w i n d o w *   w i n d o w ,   i n t   p a t h _ c o u n t ,   c o n s t   c h a r *   p a t h s [ ] ) 
   *     @ e n d c o d e 
   *     F o r   m o r e   i n f o r m a t i o n   a b o u t   t h e   c a l l b a c k   p a r a m e t e r s ,   s e e   t h e 
   *     [ f u n c t i o n   p o i n t e r   t y p e ] ( @ r e f   G L F W d r o p f u n ) . 
   * 
   *     @ e r r o r s   P o s s i b l e   e r r o r s   i n c l u d e   @ r e f   G L F W _ N O T _ I N I T I A L I Z E D . 
   * 
   *     @ r e m a r k   @ w a y l a n d   F i l e   d r o p   i s   c u r r e n t l y   u n i m p l e m e n t e d . 
   * 
   *     @ t h r e a d _ s a f e t y   T h i s   f u n c t i o n   m u s t   o n l y   b e   c a l l e d   f r o m   t h e   m a i n   t h r e a d . 
   * 
   *     @ s a   @ r e f   p a t h _ d r o p 
   * 
   *     @ s i n c e   A d d e d   i n   v e r s i o n   3 . 1 . 
   * 
   *     @ i n g r o u p   i n p u t 
   * / 
 G L F W A P I   G L F W d r o p f u n   g l f w S e t D r o p C a l l b a c k ( G L F W w i n d o w *   w i n d o w ,   G L F W d r o p f u n   c a l l b a c k ) ; 
 
 / * !   @ b r i e f   R e t u r n s   w h e t h e r   t h e   s p e c i f i e d   j o y s t i c k   i s   p r e s e n t . 
   * 
   *     T h i s   f u n c t i o n   r e t u r n s   w h e t h e r   t h e   s p e c i f i e d   j o y s t i c k   i s   p r e s e n t . 
   * 
   *     T h e r e   i s   n o   n e e d   t o   c a l l   t h i s   f u n c t i o n   b e f o r e   o t h e r   f u n c t i o n s   t h a t   a c c e p t 
   *     a   j o y s t i c k   I D ,   a s   t h e y   a l l   c h e c k   f o r   p r e s e n c e   b e f o r e   p e r f o r m i n g   a n y   o t h e r 
   *     w o r k . 
   * 
   *     @ p a r a m [ i n ]   j i d   T h e   [ j o y s t i c k ] ( @ r e f   j o y s t i c k s )   t o   q u e r y . 
   *     @ r e t u r n   ` G L F W _ T R U E `   i f   t h e   j o y s t i c k   i s   p r e s e n t ,   o r   ` G L F W _ F A L S E `   o t h e r w i s e . 
   * 
   *     @ e r r o r s   P o s s i b l e   e r r o r s   i n c l u d e   @ r e f   G L F W _ N O T _ I N I T I A L I Z E D ,   @ r e f 
   *     G L F W _ I N V A L I D _ E N U M   a n d   @ r e f   G L F W _ P L A T F O R M _ E R R O R . 
   * 
   *     @ t h r e a d _ s a f e t y   T h i s   f u n c t i o n   m u s t   o n l y   b e   c a l l e d   f r o m   t h e   m a i n   t h r e a d . 
   * 
   *     @ s a   @ r e f   j o y s t i c k 
   * 
   *     @ s i n c e   A d d e d   i n   v e r s i o n   3 . 0 .     R e p l a c e s   ` g l f w G e t J o y s t i c k P a r a m ` . 
   * 
   *     @ i n g r o u p   i n p u t 
   * / 
 G L F W A P I   i n t   g l f w J o y s t i c k P r e s e n t ( i n t   j i d ) ; 
 
 / * !   @ b r i e f   R e t u r n s   t h e   v a l u e s   o f   a l l   a x e s   o f   t h e   s p e c i f i e d   j o y s t i c k . 
   * 
   *     T h i s   f u n c t i o n   r e t u r n s   t h e   v a l u e s   o f   a l l   a x e s   o f   t h e   s p e c i f i e d   j o y s t i c k . 
   *     E a c h   e l e m e n t   i n   t h e   a r r a y   i s   a   v a l u e   b e t w e e n   - 1 . 0   a n d   1 . 0 . 
   * 
   *     I f   t h e   s p e c i f i e d   j o y s t i c k   i s   n o t   p r e s e n t   t h i s   f u n c t i o n   w i l l   r e t u r n   ` N U L L ` 
   *     b u t   w i l l   n o t   g e n e r a t e   a n   e r r o r .     T h i s   c a n   b e   u s e d   i n s t e a d   o f   f i r s t   c a l l i n g 
   *     @ r e f   g l f w J o y s t i c k P r e s e n t . 
   * 
   *     @ p a r a m [ i n ]   j i d   T h e   [ j o y s t i c k ] ( @ r e f   j o y s t i c k s )   t o   q u e r y . 
   *     @ p a r a m [ o u t ]   c o u n t   W h e r e   t o   s t o r e   t h e   n u m b e r   o f   a x i s   v a l u e s   i n   t h e   r e t u r n e d 
   *     a r r a y .     T h i s   i s   s e t   t o   z e r o   i f   t h e   j o y s t i c k   i s   n o t   p r e s e n t   o r   a n   e r r o r 
   *     o c c u r r e d . 
   *     @ r e t u r n   A n   a r r a y   o f   a x i s   v a l u e s ,   o r   ` N U L L `   i f   t h e   j o y s t i c k   i s   n o t   p r e s e n t   o r 
   *     a n   [ e r r o r ] ( @ r e f   e r r o r _ h a n d l i n g )   o c c u r r e d . 
   * 
   *     @ e r r o r s   P o s s i b l e   e r r o r s   i n c l u d e   @ r e f   G L F W _ N O T _ I N I T I A L I Z E D ,   @ r e f 
   *     G L F W _ I N V A L I D _ E N U M   a n d   @ r e f   G L F W _ P L A T F O R M _ E R R O R . 
   * 
   *     @ p o i n t e r _ l i f e t i m e   T h e   r e t u r n e d   a r r a y   i s   a l l o c a t e d   a n d   f r e e d   b y   G L F W .     Y o u 
   *     s h o u l d   n o t   f r e e   i t   y o u r s e l f .     I t   i s   v a l i d   u n t i l   t h e   s p e c i f i e d   j o y s t i c k   i s 
   *     d i s c o n n e c t e d   o r   t h e   l i b r a r y   i s   t e r m i n a t e d . 
   * 
   *     @ t h r e a d _ s a f e t y   T h i s   f u n c t i o n   m u s t   o n l y   b e   c a l l e d   f r o m   t h e   m a i n   t h r e a d . 
   * 
   *     @ s a   @ r e f   j o y s t i c k _ a x i s 
   * 
   *     @ s i n c e   A d d e d   i n   v e r s i o n   3 . 0 .     R e p l a c e s   ` g l f w G e t J o y s t i c k P o s ` . 
   * 
   *     @ i n g r o u p   i n p u t 
   * / 
 G L F W A P I   c o n s t   f l o a t *   g l f w G e t J o y s t i c k A x e s ( i n t   j i d ,   i n t *   c o u n t ) ; 
 
 / * !   @ b r i e f   R e t u r n s   t h e   s t a t e   o f   a l l   b u t t o n s   o f   t h e   s p e c i f i e d   j o y s t i c k . 
   * 
   *     T h i s   f u n c t i o n   r e t u r n s   t h e   s t a t e   o f   a l l   b u t t o n s   o f   t h e   s p e c i f i e d   j o y s t i c k . 
   *     E a c h   e l e m e n t   i n   t h e   a r r a y   i s   e i t h e r   ` G L F W _ P R E S S `   o r   ` G L F W _ R E L E A S E ` . 
   * 
   *     F o r   b a c k w a r d   c o m p a t i b i l i t y   w i t h   e a r l i e r   v e r s i o n s   t h a t   d i d   n o t   h a v e   @ r e f 
   *     g l f w G e t J o y s t i c k H a t s ,   t h e   b u t t o n   a r r a y   a l s o   i n c l u d e s   a l l   h a t s ,   e a c h 
   *     r e p r e s e n t e d   a s   f o u r   b u t t o n s .     T h e   h a t s   a r e   i n   t h e   s a m e   o r d e r   a s   r e t u r n e d   b y 
   *     _ _ g l f w G e t J o y s t i c k H a t s _ _   a n d   a r e   i n   t h e   o r d e r   _ u p _ ,   _ r i g h t _ ,   _ d o w n _   a n d 
   *     _ l e f t _ .     T o   d i s a b l e   t h e s e   e x t r a   b u t t o n s ,   s e t   t h e   @ r e f 
   *     G L F W _ J O Y S T I C K _ H A T _ B U T T O N S   i n i t   h i n t   b e f o r e   i n i t i a l i z a t i o n . 
   * 
   *     I f   t h e   s p e c i f i e d   j o y s t i c k   i s   n o t   p r e s e n t   t h i s   f u n c t i o n   w i l l   r e t u r n   ` N U L L ` 
   *     b u t   w i l l   n o t   g e n e r a t e   a n   e r r o r .     T h i s   c a n   b e   u s e d   i n s t e a d   o f   f i r s t   c a l l i n g 
   *     @ r e f   g l f w J o y s t i c k P r e s e n t . 
   * 
   *     @ p a r a m [ i n ]   j i d   T h e   [ j o y s t i c k ] ( @ r e f   j o y s t i c k s )   t o   q u e r y . 
   *     @ p a r a m [ o u t ]   c o u n t   W h e r e   t o   s t o r e   t h e   n u m b e r   o f   b u t t o n   s t a t e s   i n   t h e   r e t u r n e d 
   *     a r r a y .     T h i s   i s   s e t   t o   z e r o   i f   t h e   j o y s t i c k   i s   n o t   p r e s e n t   o r   a n   e r r o r 
   *     o c c u r r e d . 
   *     @ r e t u r n   A n   a r r a y   o f   b u t t o n   s t a t e s ,   o r   ` N U L L `   i f   t h e   j o y s t i c k   i s   n o t   p r e s e n t 
   *     o r   a n   [ e r r o r ] ( @ r e f   e r r o r _ h a n d l i n g )   o c c u r r e d . 
   * 
   *     @ e r r o r s   P o s s i b l e   e r r o r s   i n c l u d e   @ r e f   G L F W _ N O T _ I N I T I A L I Z E D ,   @ r e f 
   *     G L F W _ I N V A L I D _ E N U M   a n d   @ r e f   G L F W _ P L A T F O R M _ E R R O R . 
   * 
   *     @ p o i n t e r _ l i f e t i m e   T h e   r e t u r n e d   a r r a y   i s   a l l o c a t e d   a n d   f r e e d   b y   G L F W .     Y o u 
   *     s h o u l d   n o t   f r e e   i t   y o u r s e l f .     I t   i s   v a l i d   u n t i l   t h e   s p e c i f i e d   j o y s t i c k   i s 
   *     d i s c o n n e c t e d   o r   t h e   l i b r a r y   i s   t e r m i n a t e d . 
   * 
   *     @ t h r e a d _ s a f e t y   T h i s   f u n c t i o n   m u s t   o n l y   b e   c a l l e d   f r o m   t h e   m a i n   t h r e a d . 
   * 
   *     @ s a   @ r e f   j o y s t i c k _ b u t t o n 
   * 
   *     @ s i n c e   A d d e d   i n   v e r s i o n   2 . 2 . 
   *     @ g l f w 3   C h a n g e d   t o   r e t u r n   a   d y n a m i c   a r r a y . 
   * 
   *     @ i n g r o u p   i n p u t 
   * / 
 G L F W A P I   c o n s t   u n s i g n e d   c h a r *   g l f w G e t J o y s t i c k B u t t o n s ( i n t   j i d ,   i n t *   c o u n t ) ; 
 
 / * !   @ b r i e f   R e t u r n s   t h e   s t a t e   o f   a l l   h a t s   o f   t h e   s p e c i f i e d   j o y s t i c k . 
   * 
   *     T h i s   f u n c t i o n   r e t u r n s   t h e   s t a t e   o f   a l l   h a t s   o f   t h e   s p e c i f i e d   j o y s t i c k . 
   *     E a c h   e l e m e n t   i n   t h e   a r r a y   i s   o n e   o f   t h e   f o l l o w i n g   v a l u e s : 
   * 
   *     N a m e                                     |   V a l u e 
   *     - - - -                                     |   - - - - - 
   *     ` G L F W _ H A T _ C E N T E R E D `       |   0 
   *     ` G L F W _ H A T _ U P `                   |   1 
   *     ` G L F W _ H A T _ R I G H T `             |   2 
   *     ` G L F W _ H A T _ D O W N `               |   4 
   *     ` G L F W _ H A T _ L E F T `               |   8 
   *     ` G L F W _ H A T _ R I G H T _ U P `       |   ` G L F W _ H A T _ R I G H T `   \ |   ` G L F W _ H A T _ U P ` 
   *     ` G L F W _ H A T _ R I G H T _ D O W N `   |   ` G L F W _ H A T _ R I G H T `   \ |   ` G L F W _ H A T _ D O W N ` 
   *     ` G L F W _ H A T _ L E F T _ U P `         |   ` G L F W _ H A T _ L E F T `   \ |   ` G L F W _ H A T _ U P ` 
   *     ` G L F W _ H A T _ L E F T _ D O W N `     |   ` G L F W _ H A T _ L E F T `   \ |   ` G L F W _ H A T _ D O W N ` 
   * 
   *     T h e   d i a g o n a l   d i r e c t i o n s   a r e   b i t w i s e   c o m b i n a t i o n s   o f   t h e   p r i m a r y   ( u p ,   r i g h t , 
   *     d o w n   a n d   l e f t )   d i r e c t i o n s   a n d   y o u   c a n   t e s t   f o r   t h e s e   i n d i v i d u a l l y   b y   A N D i n g 
   *     i t   w i t h   t h e   c o r r e s p o n d i n g   d i r e c t i o n . 
   * 
   *     @ c o d e 
   *     i f   ( h a t s [ 2 ]   &   G L F W _ H A T _ R I G H T ) 
   *     { 
   *             / /   S t a t e   o f   h a t   2   c o u l d   b e   r i g h t - u p ,   r i g h t   o r   r i g h t - d o w n 
   *     } 
   *     @ e n d c o d e 
   * 
   *     I f   t h e   s p e c i f i e d   j o y s t i c k   i s   n o t   p r e s e n t   t h i s   f u n c t i o n   w i l l   r e t u r n   ` N U L L ` 
   *     b u t   w i l l   n o t   g e n e r a t e   a n   e r r o r .     T h i s   c a n   b e   u s e d   i n s t e a d   o f   f i r s t   c a l l i n g 
   *     @ r e f   g l f w J o y s t i c k P r e s e n t . 
   * 
   *     @ p a r a m [ i n ]   j i d   T h e   [ j o y s t i c k ] ( @ r e f   j o y s t i c k s )   t o   q u e r y . 
   *     @ p a r a m [ o u t ]   c o u n t   W h e r e   t o   s t o r e   t h e   n u m b e r   o f   h a t   s t a t e s   i n   t h e   r e t u r n e d 
   *     a r r a y .     T h i s   i s   s e t   t o   z e r o   i f   t h e   j o y s t i c k   i s   n o t   p r e s e n t   o r   a n   e r r o r 
   *     o c c u r r e d . 
   *     @ r e t u r n   A n   a r r a y   o f   h a t   s t a t e s ,   o r   ` N U L L `   i f   t h e   j o y s t i c k   i s   n o t   p r e s e n t 
   *     o r   a n   [ e r r o r ] ( @ r e f   e r r o r _ h a n d l i n g )   o c c u r r e d . 
   * 
   *     @ e r r o r s   P o s s i b l e   e r r o r s   i n c l u d e   @ r e f   G L F W _ N O T _ I N I T I A L I Z E D ,   @ r e f 
   *     G L F W _ I N V A L I D _ E N U M   a n d   @ r e f   G L F W _ P L A T F O R M _ E R R O R . 
   * 
   *     @ p o i n t e r _ l i f e t i m e   T h e   r e t u r n e d   a r r a y   i s   a l l o c a t e d   a n d   f r e e d   b y   G L F W .     Y o u 
   *     s h o u l d   n o t   f r e e   i t   y o u r s e l f .     I t   i s   v a l i d   u n t i l   t h e   s p e c i f i e d   j o y s t i c k   i s 
   *     d i s c o n n e c t e d ,   t h i s   f u n c t i o n   i s   c a l l e d   a g a i n   f o r   t h a t   j o y s t i c k   o r   t h e   l i b r a r y 
   *     i s   t e r m i n a t e d . 
   * 
   *     @ t h r e a d _ s a f e t y   T h i s   f u n c t i o n   m u s t   o n l y   b e   c a l l e d   f r o m   t h e   m a i n   t h r e a d . 
   * 
   *     @ s a   @ r e f   j o y s t i c k _ h a t 
   * 
   *     @ s i n c e   A d d e d   i n   v e r s i o n   3 . 3 . 
   * 
   *     @ i n g r o u p   i n p u t 
   * / 
 G L F W A P I   c o n s t   u n s i g n e d   c h a r *   g l f w G e t J o y s t i c k H a t s ( i n t   j i d ,   i n t *   c o u n t ) ; 
 
 / * !   @ b r i e f   R e t u r n s   t h e   n a m e   o f   t h e   s p e c i f i e d   j o y s t i c k . 
   * 
   *     T h i s   f u n c t i o n   r e t u r n s   t h e   n a m e ,   e n c o d e d   a s   U T F - 8 ,   o f   t h e   s p e c i f i e d   j o y s t i c k . 
   *     T h e   r e t u r n e d   s t r i n g   i s   a l l o c a t e d   a n d   f r e e d   b y   G L F W .     Y o u   s h o u l d   n o t   f r e e   i t 
   *     y o u r s e l f . 
   * 
   *     I f   t h e   s p e c i f i e d   j o y s t i c k   i s   n o t   p r e s e n t   t h i s   f u n c t i o n   w i l l   r e t u r n   ` N U L L ` 
   *     b u t   w i l l   n o t   g e n e r a t e   a n   e r r o r .     T h i s   c a n   b e   u s e d   i n s t e a d   o f   f i r s t   c a l l i n g 
   *     @ r e f   g l f w J o y s t i c k P r e s e n t . 
   * 
   *     @ p a r a m [ i n ]   j i d   T h e   [ j o y s t i c k ] ( @ r e f   j o y s t i c k s )   t o   q u e r y . 
   *     @ r e t u r n   T h e   U T F - 8   e n c o d e d   n a m e   o f   t h e   j o y s t i c k ,   o r   ` N U L L `   i f   t h e   j o y s t i c k 
   *     i s   n o t   p r e s e n t   o r   a n   [ e r r o r ] ( @ r e f   e r r o r _ h a n d l i n g )   o c c u r r e d . 
   * 
   *     @ e r r o r s   P o s s i b l e   e r r o r s   i n c l u d e   @ r e f   G L F W _ N O T _ I N I T I A L I Z E D ,   @ r e f 
   *     G L F W _ I N V A L I D _ E N U M   a n d   @ r e f   G L F W _ P L A T F O R M _ E R R O R . 
   * 
   *     @ p o i n t e r _ l i f e t i m e   T h e   r e t u r n e d   s t r i n g   i s   a l l o c a t e d   a n d   f r e e d   b y   G L F W .     Y o u 
   *     s h o u l d   n o t   f r e e   i t   y o u r s e l f .     I t   i s   v a l i d   u n t i l   t h e   s p e c i f i e d   j o y s t i c k   i s 
   *     d i s c o n n e c t e d   o r   t h e   l i b r a r y   i s   t e r m i n a t e d . 
   * 
   *     @ t h r e a d _ s a f e t y   T h i s   f u n c t i o n   m u s t   o n l y   b e   c a l l e d   f r o m   t h e   m a i n   t h r e a d . 
   * 
   *     @ s a   @ r e f   j o y s t i c k _ n a m e 
   * 
   *     @ s i n c e   A d d e d   i n   v e r s i o n   3 . 0 . 
   * 
   *     @ i n g r o u p   i n p u t 
   * / 
 G L F W A P I   c o n s t   c h a r *   g l f w G e t J o y s t i c k N a m e ( i n t   j i d ) ; 
 
 / * !   @ b r i e f   R e t u r n s   t h e   S D L   c o m p a t i b l e   G U I D   o f   t h e   s p e c i f i e d   j o y s t i c k . 
   * 
   *     T h i s   f u n c t i o n   r e t u r n s   t h e   S D L   c o m p a t i b l e   G U I D ,   a s   a   U T F - 8   e n c o d e d 
   *     h e x a d e c i m a l   s t r i n g ,   o f   t h e   s p e c i f i e d   j o y s t i c k .     T h e   r e t u r n e d   s t r i n g   i s 
   *     a l l o c a t e d   a n d   f r e e d   b y   G L F W .     Y o u   s h o u l d   n o t   f r e e   i t   y o u r s e l f . 
   * 
   *     T h e   G U I D   i s   w h a t   c o n n e c t s   a   j o y s t i c k   t o   a   g a m e p a d   m a p p i n g .     A   c o n n e c t e d 
   *     j o y s t i c k   w i l l   a l w a y s   h a v e   a   G U I D   e v e n   i f   t h e r e   i s   n o   g a m e p a d   m a p p i n g 
   *     a s s i g n e d   t o   i t . 
   * 
   *     I f   t h e   s p e c i f i e d   j o y s t i c k   i s   n o t   p r e s e n t   t h i s   f u n c t i o n   w i l l   r e t u r n   ` N U L L ` 
   *     b u t   w i l l   n o t   g e n e r a t e   a n   e r r o r .     T h i s   c a n   b e   u s e d   i n s t e a d   o f   f i r s t   c a l l i n g 
   *     @ r e f   g l f w J o y s t i c k P r e s e n t . 
   * 
   *     T h e   G U I D   u s e s   t h e   f o r m a t   i n t r o d u c e d   i n   S D L   2 . 0 . 5 .     T h i s   G U I D   t r i e s   t o 
   *     u n i q u e l y   i d e n t i f y   t h e   m a k e   a n d   m o d e l   o f   a   j o y s t i c k   b u t   d o e s   n o t   i d e n t i f y 
   *     a   s p e c i f i c   u n i t ,   e . g .   a l l   w i r e d   X b o x   3 6 0   c o n t r o l l e r s   w i l l   h a v e   t h e   s a m e 
   *     G U I D   o n   t h a t   p l a t f o r m .     T h e   G U I D   f o r   a   u n i t   m a y   v a r y   b e t w e e n   p l a t f o r m s 
   *     d e p e n d i n g   o n   w h a t   h a r d w a r e   i n f o r m a t i o n   t h e   p l a t f o r m   s p e c i f i c   A P I s   p r o v i d e . 
   * 
   *     @ p a r a m [ i n ]   j i d   T h e   [ j o y s t i c k ] ( @ r e f   j o y s t i c k s )   t o   q u e r y . 
   *     @ r e t u r n   T h e   U T F - 8   e n c o d e d   G U I D   o f   t h e   j o y s t i c k ,   o r   ` N U L L `   i f   t h e   j o y s t i c k 
   *     i s   n o t   p r e s e n t   o r   a n   [ e r r o r ] ( @ r e f   e r r o r _ h a n d l i n g )   o c c u r r e d . 
   * 
   *     @ e r r o r s   P o s s i b l e   e r r o r s   i n c l u d e   @ r e f   G L F W _ N O T _ I N I T I A L I Z E D ,   @ r e f 
   *     G L F W _ I N V A L I D _ E N U M   a n d   @ r e f   G L F W _ P L A T F O R M _ E R R O R . 
   * 
   *     @ p o i n t e r _ l i f e t i m e   T h e   r e t u r n e d   s t r i n g   i s   a l l o c a t e d   a n d   f r e e d   b y   G L F W .     Y o u 
   *     s h o u l d   n o t   f r e e   i t   y o u r s e l f .     I t   i s   v a l i d   u n t i l   t h e   s p e c i f i e d   j o y s t i c k   i s 
   *     d i s c o n n e c t e d   o r   t h e   l i b r a r y   i s   t e r m i n a t e d . 
   * 
   *     @ t h r e a d _ s a f e t y   T h i s   f u n c t i o n   m u s t   o n l y   b e   c a l l e d   f r o m   t h e   m a i n   t h r e a d . 
   * 
   *     @ s a   @ r e f   g a m e p a d 
   * 
   *     @ s i n c e   A d d e d   i n   v e r s i o n   3 . 3 . 
   * 
   *     @ i n g r o u p   i n p u t 
   * / 
 G L F W A P I   c o n s t   c h a r *   g l f w G e t J o y s t i c k G U I D ( i n t   j i d ) ; 
 
 / * !   @ b r i e f   S e t s   t h e   u s e r   p o i n t e r   o f   t h e   s p e c i f i e d   j o y s t i c k . 
   * 
   *     T h i s   f u n c t i o n   s e t s   t h e   u s e r - d e f i n e d   p o i n t e r   o f   t h e   s p e c i f i e d   j o y s t i c k .     T h e 
   *     c u r r e n t   v a l u e   i s   r e t a i n e d   u n t i l   t h e   j o y s t i c k   i s   d i s c o n n e c t e d .     T h e   i n i t i a l 
   *     v a l u e   i s   ` N U L L ` . 
   * 
   *     T h i s   f u n c t i o n   m a y   b e   c a l l e d   f r o m   t h e   j o y s t i c k   c a l l b a c k ,   e v e n   f o r   a   j o y s t i c k 
   *     t h a t   i s   b e i n g   d i s c o n n e c t e d . 
   * 
   *     @ p a r a m [ i n ]   j i d   T h e   j o y s t i c k   w h o s e   p o i n t e r   t o   s e t . 
   *     @ p a r a m [ i n ]   p o i n t e r   T h e   n e w   v a l u e . 
   * 
   *     @ e r r o r s   P o s s i b l e   e r r o r s   i n c l u d e   @ r e f   G L F W _ N O T _ I N I T I A L I Z E D . 
   * 
   *     @ t h r e a d _ s a f e t y   T h i s   f u n c t i o n   m a y   b e   c a l l e d   f r o m   a n y   t h r e a d .     A c c e s s   i s   n o t 
   *     s y n c h r o n i z e d . 
   * 
   *     @ s a   @ r e f   j o y s t i c k _ u s e r p t r 
   *     @ s a   @ r e f   g l f w G e t J o y s t i c k U s e r P o i n t e r 
   * 
   *     @ s i n c e   A d d e d   i n   v e r s i o n   3 . 3 . 
   * 
   *     @ i n g r o u p   i n p u t 
   * / 
 G L F W A P I   v o i d   g l f w S e t J o y s t i c k U s e r P o i n t e r ( i n t   j i d ,   v o i d *   p o i n t e r ) ; 
 
 / * !   @ b r i e f   R e t u r n s   t h e   u s e r   p o i n t e r   o f   t h e   s p e c i f i e d   j o y s t i c k . 
   * 
   *     T h i s   f u n c t i o n   r e t u r n s   t h e   c u r r e n t   v a l u e   o f   t h e   u s e r - d e f i n e d   p o i n t e r   o f   t h e 
   *     s p e c i f i e d   j o y s t i c k .     T h e   i n i t i a l   v a l u e   i s   ` N U L L ` . 
   * 
   *     T h i s   f u n c t i o n   m a y   b e   c a l l e d   f r o m   t h e   j o y s t i c k   c a l l b a c k ,   e v e n   f o r   a   j o y s t i c k 
   *     t h a t   i s   b e i n g   d i s c o n n e c t e d . 
   * 
   *     @ p a r a m [ i n ]   j i d   T h e   j o y s t i c k   w h o s e   p o i n t e r   t o   r e t u r n . 
   * 
   *     @ e r r o r s   P o s s i b l e   e r r o r s   i n c l u d e   @ r e f   G L F W _ N O T _ I N I T I A L I Z E D . 
   * 
   *     @ t h r e a d _ s a f e t y   T h i s   f u n c t i o n   m a y   b e   c a l l e d   f r o m   a n y   t h r e a d .     A c c e s s   i s   n o t 
   *     s y n c h r o n i z e d . 
   * 
   *     @ s a   @ r e f   j o y s t i c k _ u s e r p t r 
   *     @ s a   @ r e f   g l f w S e t J o y s t i c k U s e r P o i n t e r 
   * 
   *     @ s i n c e   A d d e d   i n   v e r s i o n   3 . 3 . 
   * 
   *     @ i n g r o u p   i n p u t 
   * / 
 G L F W A P I   v o i d *   g l f w G e t J o y s t i c k U s e r P o i n t e r ( i n t   j i d ) ; 
 
 / * !   @ b r i e f   R e t u r n s   w h e t h e r   t h e   s p e c i f i e d   j o y s t i c k   h a s   a   g a m e p a d   m a p p i n g . 
   * 
   *     T h i s   f u n c t i o n   r e t u r n s   w h e t h e r   t h e   s p e c i f i e d   j o y s t i c k   i s   b o t h   p r e s e n t   a n d   h a s 
   *     a   g a m e p a d   m a p p i n g . 
   * 
   *     I f   t h e   s p e c i f i e d   j o y s t i c k   i s   p r e s e n t   b u t   d o e s   n o t   h a v e   a   g a m e p a d   m a p p i n g 
   *     t h i s   f u n c t i o n   w i l l   r e t u r n   ` G L F W _ F A L S E `   b u t   w i l l   n o t   g e n e r a t e   a n   e r r o r .     C a l l 
   *     @ r e f   g l f w J o y s t i c k P r e s e n t   t o   c h e c k   i f   a   j o y s t i c k   i s   p r e s e n t   r e g a r d l e s s   o f 
   *     w h e t h e r   i t   h a s   a   m a p p i n g . 
   * 
   *     @ p a r a m [ i n ]   j i d   T h e   [ j o y s t i c k ] ( @ r e f   j o y s t i c k s )   t o   q u e r y . 
   *     @ r e t u r n   ` G L F W _ T R U E `   i f   a   j o y s t i c k   i s   b o t h   p r e s e n t   a n d   h a s   a   g a m e p a d   m a p p i n g , 
   *     o r   ` G L F W _ F A L S E `   o t h e r w i s e . 
   * 
   *     @ e r r o r s   P o s s i b l e   e r r o r s   i n c l u d e   @ r e f   G L F W _ N O T _ I N I T I A L I Z E D   a n d   @ r e f 
   *     G L F W _ I N V A L I D _ E N U M . 
   * 
   *     @ t h r e a d _ s a f e t y   T h i s   f u n c t i o n   m u s t   o n l y   b e   c a l l e d   f r o m   t h e   m a i n   t h r e a d . 
   * 
   *     @ s a   @ r e f   g a m e p a d 
   *     @ s a   @ r e f   g l f w G e t G a m e p a d S t a t e 
   * 
   *     @ s i n c e   A d d e d   i n   v e r s i o n   3 . 3 . 
   * 
   *     @ i n g r o u p   i n p u t 
   * / 
 G L F W A P I   i n t   g l f w J o y s t i c k I s G a m e p a d ( i n t   j i d ) ; 
 
 / * !   @ b r i e f   S e t s   t h e   j o y s t i c k   c o n f i g u r a t i o n   c a l l b a c k . 
   * 
   *     T h i s   f u n c t i o n   s e t s   t h e   j o y s t i c k   c o n f i g u r a t i o n   c a l l b a c k ,   o r   r e m o v e s   t h e 
   *     c u r r e n t l y   s e t   c a l l b a c k .     T h i s   i s   c a l l e d   w h e n   a   j o y s t i c k   i s   c o n n e c t e d   t o   o r 
   *     d i s c o n n e c t e d   f r o m   t h e   s y s t e m . 
   * 
   *     F o r   j o y s t i c k   c o n n e c t i o n   a n d   d i s c o n n e c t i o n   e v e n t s   t o   b e   d e l i v e r e d   o n   a l l 
   *     p l a t f o r m s ,   y o u   n e e d   t o   c a l l   o n e   o f   t h e   [ e v e n t   p r o c e s s i n g ] ( @ r e f   e v e n t s ) 
   *     f u n c t i o n s .     J o y s t i c k   d i s c o n n e c t i o n   m a y   a l s o   b e   d e t e c t e d   a n d   t h e   c a l l b a c k 
   *     c a l l e d   b y   j o y s t i c k   f u n c t i o n s .     T h e   f u n c t i o n   w i l l   t h e n   r e t u r n   w h a t e v e r   i t 
   *     r e t u r n s   i f   t h e   j o y s t i c k   i s   n o t   p r e s e n t . 
   * 
   *     @ p a r a m [ i n ]   c a l l b a c k   T h e   n e w   c a l l b a c k ,   o r   ` N U L L `   t o   r e m o v e   t h e   c u r r e n t l y   s e t 
   *     c a l l b a c k . 
   *     @ r e t u r n   T h e   p r e v i o u s l y   s e t   c a l l b a c k ,   o r   ` N U L L `   i f   n o   c a l l b a c k   w a s   s e t   o r   t h e 
   *     l i b r a r y   h a d   n o t   b e e n   [ i n i t i a l i z e d ] ( @ r e f   i n t r o _ i n i t ) . 
   * 
   *     @ c a l l b a c k _ s i g n a t u r e 
   *     @ c o d e 
   *     v o i d   f u n c t i o n _ n a m e ( i n t   j i d ,   i n t   e v e n t ) 
   *     @ e n d c o d e 
   *     F o r   m o r e   i n f o r m a t i o n   a b o u t   t h e   c a l l b a c k   p a r a m e t e r s ,   s e e   t h e 
   *     [ f u n c t i o n   p o i n t e r   t y p e ] ( @ r e f   G L F W j o y s t i c k f u n ) . 
   * 
   *     @ e r r o r s   P o s s i b l e   e r r o r s   i n c l u d e   @ r e f   G L F W _ N O T _ I N I T I A L I Z E D . 
   * 
   *     @ t h r e a d _ s a f e t y   T h i s   f u n c t i o n   m u s t   o n l y   b e   c a l l e d   f r o m   t h e   m a i n   t h r e a d . 
   * 
   *     @ s a   @ r e f   j o y s t i c k _ e v e n t 
   * 
   *     @ s i n c e   A d d e d   i n   v e r s i o n   3 . 2 . 
   * 
   *     @ i n g r o u p   i n p u t 
   * / 
 G L F W A P I   G L F W j o y s t i c k f u n   g l f w S e t J o y s t i c k C a l l b a c k ( G L F W j o y s t i c k f u n   c a l l b a c k ) ; 
 
 / * !   @ b r i e f   A d d s   t h e   s p e c i f i e d   S D L _ G a m e C o n t r o l l e r D B   g a m e p a d   m a p p i n g s . 
   * 
   *     T h i s   f u n c t i o n   p a r s e s   t h e   s p e c i f i e d   A S C I I   e n c o d e d   s t r i n g   a n d   u p d a t e s   t h e 
   *     i n t e r n a l   l i s t   w i t h   a n y   g a m e p a d   m a p p i n g s   i t   f i n d s .     T h i s   s t r i n g   m a y 
   *     c o n t a i n   e i t h e r   a   s i n g l e   g a m e p a d   m a p p i n g   o r   m a n y   m a p p i n g s   s e p a r a t e d   b y 
   *     n e w l i n e s .     T h e   p a r s e r   s u p p o r t s   t h e   f u l l   f o r m a t   o f   t h e   ` g a m e c o n t r o l l e r d b . t x t ` 
   *     s o u r c e   f i l e   i n c l u d i n g   e m p t y   l i n e s   a n d   c o m m e n t s . 
   * 
   *     S e e   @ r e f   g a m e p a d _ m a p p i n g   f o r   a   d e s c r i p t i o n   o f   t h e   f o r m a t . 
   * 
   *     I f   t h e r e   i s   a l r e a d y   a   g a m e p a d   m a p p i n g   f o r   a   g i v e n   G U I D   i n   t h e   i n t e r n a l   l i s t , 
   *     i t   w i l l   b e   r e p l a c e d   b y   t h e   o n e   p a s s e d   t o   t h i s   f u n c t i o n .     I f   t h e   l i b r a r y   i s 
   *     t e r m i n a t e d   a n d   r e - i n i t i a l i z e d   t h e   i n t e r n a l   l i s t   w i l l   r e v e r t   t o   t h e   b u i l t - i n 
   *     d e f a u l t . 
   * 
   *     @ p a r a m [ i n ]   s t r i n g   T h e   s t r i n g   c o n t a i n i n g   t h e   g a m e p a d   m a p p i n g s . 
   *     @ r e t u r n   ` G L F W _ T R U E `   i f   s u c c e s s f u l ,   o r   ` G L F W _ F A L S E `   i f   a n 
   *     [ e r r o r ] ( @ r e f   e r r o r _ h a n d l i n g )   o c c u r r e d . 
   * 
   *     @ e r r o r s   P o s s i b l e   e r r o r s   i n c l u d e   @ r e f   G L F W _ N O T _ I N I T I A L I Z E D   a n d   @ r e f 
   *     G L F W _ I N V A L I D _ V A L U E . 
   * 
   *     @ t h r e a d _ s a f e t y   T h i s   f u n c t i o n   m u s t   o n l y   b e   c a l l e d   f r o m   t h e   m a i n   t h r e a d . 
   * 
   *     @ s a   @ r e f   g a m e p a d 
   *     @ s a   @ r e f   g l f w J o y s t i c k I s G a m e p a d 
   *     @ s a   @ r e f   g l f w G e t G a m e p a d N a m e 
   * 
   *     @ s i n c e   A d d e d   i n   v e r s i o n   3 . 3 . 
   * 
   *     @ i n g r o u p   i n p u t 
   * / 
 G L F W A P I   i n t   g l f w U p d a t e G a m e p a d M a p p i n g s ( c o n s t   c h a r *   s t r i n g ) ; 
 
 / * !   @ b r i e f   R e t u r n s   t h e   h u m a n - r e a d a b l e   g a m e p a d   n a m e   f o r   t h e   s p e c i f i e d   j o y s t i c k . 
   * 
   *     T h i s   f u n c t i o n   r e t u r n s   t h e   h u m a n - r e a d a b l e   n a m e   o f   t h e   g a m e p a d   f r o m   t h e 
   *     g a m e p a d   m a p p i n g   a s s i g n e d   t o   t h e   s p e c i f i e d   j o y s t i c k . 
   * 
   *     I f   t h e   s p e c i f i e d   j o y s t i c k   i s   n o t   p r e s e n t   o r   d o e s   n o t   h a v e   a   g a m e p a d   m a p p i n g 
   *     t h i s   f u n c t i o n   w i l l   r e t u r n   ` N U L L `   b u t   w i l l   n o t   g e n e r a t e   a n   e r r o r .     C a l l 
   *     @ r e f   g l f w J o y s t i c k P r e s e n t   t o   c h e c k   w h e t h e r   i t   i s   p r e s e n t   r e g a r d l e s s   o f 
   *     w h e t h e r   i t   h a s   a   m a p p i n g . 
   * 
   *     @ p a r a m [ i n ]   j i d   T h e   [ j o y s t i c k ] ( @ r e f   j o y s t i c k s )   t o   q u e r y . 
   *     @ r e t u r n   T h e   U T F - 8   e n c o d e d   n a m e   o f   t h e   g a m e p a d ,   o r   ` N U L L `   i f   t h e 
   *     j o y s t i c k   i s   n o t   p r e s e n t ,   d o e s   n o t   h a v e   a   m a p p i n g   o r   a n 
   *     [ e r r o r ] ( @ r e f   e r r o r _ h a n d l i n g )   o c c u r r e d . 
   * 
   *     @ e r r o r s   P o s s i b l e   e r r o r s   i n c l u d e   @ r e f   G L F W _ N O T _ I N I T I A L I Z E D   a n d   @ r e f   G L F W _ I N V A L I D _ E N U M . 
   * 
   *     @ p o i n t e r _ l i f e t i m e   T h e   r e t u r n e d   s t r i n g   i s   a l l o c a t e d   a n d   f r e e d   b y   G L F W .     Y o u 
   *     s h o u l d   n o t   f r e e   i t   y o u r s e l f .     I t   i s   v a l i d   u n t i l   t h e   s p e c i f i e d   j o y s t i c k   i s 
   *     d i s c o n n e c t e d ,   t h e   g a m e p a d   m a p p i n g s   a r e   u p d a t e d   o r   t h e   l i b r a r y   i s   t e r m i n a t e d . 
   * 
   *     @ t h r e a d _ s a f e t y   T h i s   f u n c t i o n   m u s t   o n l y   b e   c a l l e d   f r o m   t h e   m a i n   t h r e a d . 
   * 
   *     @ s a   @ r e f   g a m e p a d 
   *     @ s a   @ r e f   g l f w J o y s t i c k I s G a m e p a d 
   * 
   *     @ s i n c e   A d d e d   i n   v e r s i o n   3 . 3 . 
   * 
   *     @ i n g r o u p   i n p u t 
   * / 
 G L F W A P I   c o n s t   c h a r *   g l f w G e t G a m e p a d N a m e ( i n t   j i d ) ; 
 
 / * !   @ b r i e f   R e t r i e v e s   t h e   s t a t e   o f   t h e   s p e c i f i e d   j o y s t i c k   r e m a p p e d   a s   a   g a m e p a d . 
   * 
   *     T h i s   f u n c t i o n   r e t r i e v e s   t h e   s t a t e   o f   t h e   s p e c i f i e d   j o y s t i c k   r e m a p p e d   t o 
   *     a n   X b o x - l i k e   g a m e p a d . 
   * 
   *     I f   t h e   s p e c i f i e d   j o y s t i c k   i s   n o t   p r e s e n t   o r   d o e s   n o t   h a v e   a   g a m e p a d   m a p p i n g 
   *     t h i s   f u n c t i o n   w i l l   r e t u r n   ` G L F W _ F A L S E `   b u t   w i l l   n o t   g e n e r a t e   a n   e r r o r .     C a l l 
   *     @ r e f   g l f w J o y s t i c k P r e s e n t   t o   c h e c k   w h e t h e r   i t   i s   p r e s e n t   r e g a r d l e s s   o f 
   *     w h e t h e r   i t   h a s   a   m a p p i n g . 
   * 
   *     T h e   G u i d e   b u t t o n   m a y   n o t   b e   a v a i l a b l e   f o r   i n p u t   a s   i t   i s   o f t e n   h o o k e d   b y   t h e 
   *     s y s t e m   o r   t h e   S t e a m   c l i e n t . 
   * 
   *     N o t   a l l   d e v i c e s   h a v e   a l l   t h e   b u t t o n s   o r   a x e s   p r o v i d e d   b y   @ r e f 
   *     G L F W g a m e p a d s t a t e .     U n a v a i l a b l e   b u t t o n s   a n d   a x e s   w i l l   a l w a y s   r e p o r t 
   *     ` G L F W _ R E L E A S E `   a n d   0 . 0   r e s p e c t i v e l y . 
   * 
   *     @ p a r a m [ i n ]   j i d   T h e   [ j o y s t i c k ] ( @ r e f   j o y s t i c k s )   t o   q u e r y . 
   *     @ p a r a m [ o u t ]   s t a t e   T h e   g a m e p a d   i n p u t   s t a t e   o f   t h e   j o y s t i c k . 
   *     @ r e t u r n   ` G L F W _ T R U E `   i f   s u c c e s s f u l ,   o r   ` G L F W _ F A L S E `   i f   n o   j o y s t i c k   i s 
   *     c o n n e c t e d ,   i t   h a s   n o   g a m e p a d   m a p p i n g   o r   a n   [ e r r o r ] ( @ r e f   e r r o r _ h a n d l i n g ) 
   *     o c c u r r e d . 
   * 
   *     @ e r r o r s   P o s s i b l e   e r r o r s   i n c l u d e   @ r e f   G L F W _ N O T _ I N I T I A L I Z E D   a n d   @ r e f 
   *     G L F W _ I N V A L I D _ E N U M . 
   * 
   *     @ t h r e a d _ s a f e t y   T h i s   f u n c t i o n   m u s t   o n l y   b e   c a l l e d   f r o m   t h e   m a i n   t h r e a d . 
   * 
   *     @ s a   @ r e f   g a m e p a d 
   *     @ s a   @ r e f   g l f w U p d a t e G a m e p a d M a p p i n g s 
   *     @ s a   @ r e f   g l f w J o y s t i c k I s G a m e p a d 
   * 
   *     @ s i n c e   A d d e d   i n   v e r s i o n   3 . 3 . 
   * 
   *     @ i n g r o u p   i n p u t 
   * / 
 G L F W A P I   i n t   g l f w G e t G a m e p a d S t a t e ( i n t   j i d ,   G L F W g a m e p a d s t a t e *   s t a t e ) ; 
 
 / * !   @ b r i e f   S e t s   t h e   c l i p b o a r d   t o   t h e   s p e c i f i e d   s t r i n g . 
   * 
   *     T h i s   f u n c t i o n   s e t s   t h e   s y s t e m   c l i p b o a r d   t o   t h e   s p e c i f i e d ,   U T F - 8   e n c o d e d 
   *     s t r i n g . 
   * 
   *     @ p a r a m [ i n ]   w i n d o w   D e p r e c a t e d .     A n y   v a l i d   w i n d o w   o r   ` N U L L ` . 
   *     @ p a r a m [ i n ]   s t r i n g   A   U T F - 8   e n c o d e d   s t r i n g . 
   * 
   *     @ e r r o r s   P o s s i b l e   e r r o r s   i n c l u d e   @ r e f   G L F W _ N O T _ I N I T I A L I Z E D   a n d   @ r e f 
   *     G L F W _ P L A T F O R M _ E R R O R . 
   * 
   *     @ p o i n t e r _ l i f e t i m e   T h e   s p e c i f i e d   s t r i n g   i s   c o p i e d   b e f o r e   t h i s   f u n c t i o n 
   *     r e t u r n s . 
   * 
   *     @ t h r e a d _ s a f e t y   T h i s   f u n c t i o n   m u s t   o n l y   b e   c a l l e d   f r o m   t h e   m a i n   t h r e a d . 
   * 
   *     @ s a   @ r e f   c l i p b o a r d 
   *     @ s a   @ r e f   g l f w G e t C l i p b o a r d S t r i n g 
   * 
   *     @ s i n c e   A d d e d   i n   v e r s i o n   3 . 0 . 
   * 
   *     @ i n g r o u p   i n p u t 
   * / 
 G L F W A P I   v o i d   g l f w S e t C l i p b o a r d S t r i n g ( G L F W w i n d o w *   w i n d o w ,   c o n s t   c h a r *   s t r i n g ) ; 
 
 / * !   @ b r i e f   R e t u r n s   t h e   c o n t e n t s   o f   t h e   c l i p b o a r d   a s   a   s t r i n g . 
   * 
   *     T h i s   f u n c t i o n   r e t u r n s   t h e   c o n t e n t s   o f   t h e   s y s t e m   c l i p b o a r d ,   i f   i t   c o n t a i n s 
   *     o r   i s   c o n v e r t i b l e   t o   a   U T F - 8   e n c o d e d   s t r i n g .     I f   t h e   c l i p b o a r d   i s   e m p t y   o r 
   *     i f   i t s   c o n t e n t s   c a n n o t   b e   c o n v e r t e d ,   ` N U L L `   i s   r e t u r n e d   a n d   a   @ r e f 
   *     G L F W _ F O R M A T _ U N A V A I L A B L E   e r r o r   i s   g e n e r a t e d . 
   * 
   *     @ p a r a m [ i n ]   w i n d o w   D e p r e c a t e d .     A n y   v a l i d   w i n d o w   o r   ` N U L L ` . 
   *     @ r e t u r n   T h e   c o n t e n t s   o f   t h e   c l i p b o a r d   a s   a   U T F - 8   e n c o d e d   s t r i n g ,   o r   ` N U L L ` 
   *     i f   a n   [ e r r o r ] ( @ r e f   e r r o r _ h a n d l i n g )   o c c u r r e d . 
   * 
   *     @ e r r o r s   P o s s i b l e   e r r o r s   i n c l u d e   @ r e f   G L F W _ N O T _ I N I T I A L I Z E D ,   @ r e f 
   *     G L F W _ F O R M A T _ U N A V A I L A B L E   a n d   @ r e f   G L F W _ P L A T F O R M _ E R R O R . 
   * 
   *     @ p o i n t e r _ l i f e t i m e   T h e   r e t u r n e d   s t r i n g   i s   a l l o c a t e d   a n d   f r e e d   b y   G L F W .     Y o u 
   *     s h o u l d   n o t   f r e e   i t   y o u r s e l f .     I t   i s   v a l i d   u n t i l   t h e   n e x t   c a l l   t o   @ r e f 
   *     g l f w G e t C l i p b o a r d S t r i n g   o r   @ r e f   g l f w S e t C l i p b o a r d S t r i n g ,   o r   u n t i l   t h e   l i b r a r y 
   *     i s   t e r m i n a t e d . 
   * 
   *     @ t h r e a d _ s a f e t y   T h i s   f u n c t i o n   m u s t   o n l y   b e   c a l l e d   f r o m   t h e   m a i n   t h r e a d . 
   * 
   *     @ s a   @ r e f   c l i p b o a r d 
   *     @ s a   @ r e f   g l f w S e t C l i p b o a r d S t r i n g 
   * 
   *     @ s i n c e   A d d e d   i n   v e r s i o n   3 . 0 . 
   * 
   *     @ i n g r o u p   i n p u t 
   * / 
 G L F W A P I   c o n s t   c h a r *   g l f w G e t C l i p b o a r d S t r i n g ( G L F W w i n d o w *   w i n d o w ) ; 
 
 / * !   @ b r i e f   R e t u r n s   t h e   G L F W   t i m e . 
   * 
   *     T h i s   f u n c t i o n   r e t u r n s   t h e   c u r r e n t   G L F W   t i m e ,   i n   s e c o n d s .     U n l e s s   t h e   t i m e 
   *     h a s   b e e n   s e t   u s i n g   @ r e f   g l f w S e t T i m e   i t   m e a s u r e s   t i m e   e l a p s e d   s i n c e   G L F W   w a s 
   *     i n i t i a l i z e d . 
   * 
   *     T h i s   f u n c t i o n   a n d   @ r e f   g l f w S e t T i m e   a r e   h e l p e r   f u n c t i o n s   o n   t o p   o f   @ r e f 
   *     g l f w G e t T i m e r F r e q u e n c y   a n d   @ r e f   g l f w G e t T i m e r V a l u e . 
   * 
   *     T h e   r e s o l u t i o n   o f   t h e   t i m e r   i s   s y s t e m   d e p e n d e n t ,   b u t   i s   u s u a l l y   o n   t h e   o r d e r 
   *     o f   a   f e w   m i c r o -   o r   n a n o s e c o n d s .     I t   u s e s   t h e   h i g h e s t - r e s o l u t i o n   m o n o t o n i c 
   *     t i m e   s o u r c e   o n   e a c h   o p e r a t i n g   s y s t e m . 
   * 
   *     @ r e t u r n   T h e   c u r r e n t   t i m e ,   i n   s e c o n d s ,   o r   z e r o   i f   a n 
   *     [ e r r o r ] ( @ r e f   e r r o r _ h a n d l i n g )   o c c u r r e d . 
   * 
   *     @ e r r o r s   P o s s i b l e   e r r o r s   i n c l u d e   @ r e f   G L F W _ N O T _ I N I T I A L I Z E D . 
   * 
   *     @ t h r e a d _ s a f e t y   T h i s   f u n c t i o n   m a y   b e   c a l l e d   f r o m   a n y   t h r e a d .     R e a d i n g   a n d 
   *     w r i t i n g   o f   t h e   i n t e r n a l   b a s e   t i m e   i s   n o t   a t o m i c ,   s o   i t   n e e d s   t o   b e 
   *     e x t e r n a l l y   s y n c h r o n i z e d   w i t h   c a l l s   t o   @ r e f   g l f w S e t T i m e . 
   * 
   *     @ s a   @ r e f   t i m e 
   * 
   *     @ s i n c e   A d d e d   i n   v e r s i o n   1 . 0 . 
   * 
   *     @ i n g r o u p   i n p u t 
   * / 
 G L F W A P I   d o u b l e   g l f w G e t T i m e ( v o i d ) ; 
 
 / * !   @ b r i e f   S e t s   t h e   G L F W   t i m e . 
   * 
   *     T h i s   f u n c t i o n   s e t s   t h e   c u r r e n t   G L F W   t i m e ,   i n   s e c o n d s .     T h e   v a l u e   m u s t   b e 
   *     a   p o s i t i v e   f i n i t e   n u m b e r   l e s s   t h a n   o r   e q u a l   t o   1 8 4 4 6 7 4 4 0 7 3 . 0 ,   w h i c h   i s 
   *     a p p r o x i m a t e l y   5 8 4 . 5   y e a r s . 
   * 
   *     T h i s   f u n c t i o n   a n d   @ r e f   g l f w G e t T i m e   a r e   h e l p e r   f u n c t i o n s   o n   t o p   o f   @ r e f 
   *     g l f w G e t T i m e r F r e q u e n c y   a n d   @ r e f   g l f w G e t T i m e r V a l u e . 
   * 
   *     @ p a r a m [ i n ]   t i m e   T h e   n e w   v a l u e ,   i n   s e c o n d s . 
   * 
   *     @ e r r o r s   P o s s i b l e   e r r o r s   i n c l u d e   @ r e f   G L F W _ N O T _ I N I T I A L I Z E D   a n d   @ r e f 
   *     G L F W _ I N V A L I D _ V A L U E . 
   * 
   *     @ r e m a r k   T h e   u p p e r   l i m i t   o f   G L F W   t i m e   i s   c a l c u l a t e d   a s 
   *     f l o o r ( ( 2 < s u p > 6 4 < / s u p >   -   1 )   /   1 0 < s u p > 9 < / s u p > )   a n d   i s   d u e   t o   i m p l e m e n t a t i o n s 
   *     s t o r i n g   n a n o s e c o n d s   i n   6 4   b i t s .     T h e   l i m i t   m a y   b e   i n c r e a s e d   i n   t h e   f u t u r e . 
   * 
   *     @ t h r e a d _ s a f e t y   T h i s   f u n c t i o n   m a y   b e   c a l l e d   f r o m   a n y   t h r e a d .     R e a d i n g   a n d 
   *     w r i t i n g   o f   t h e   i n t e r n a l   b a s e   t i m e   i s   n o t   a t o m i c ,   s o   i t   n e e d s   t o   b e 
   *     e x t e r n a l l y   s y n c h r o n i z e d   w i t h   c a l l s   t o   @ r e f   g l f w G e t T i m e . 
   * 
   *     @ s a   @ r e f   t i m e 
   * 
   *     @ s i n c e   A d d e d   i n   v e r s i o n   2 . 2 . 
   * 
   *     @ i n g r o u p   i n p u t 
   * / 
 G L F W A P I   v o i d   g l f w S e t T i m e ( d o u b l e   t i m e ) ; 
 
 / * !   @ b r i e f   R e t u r n s   t h e   c u r r e n t   v a l u e   o f   t h e   r a w   t i m e r . 
   * 
   *     T h i s   f u n c t i o n   r e t u r n s   t h e   c u r r e n t   v a l u e   o f   t h e   r a w   t i m e r ,   m e a s u r e d   i n 
   *     1 & n b s p ; / & n b s p ; f r e q u e n c y   s e c o n d s .     T o   g e t   t h e   f r e q u e n c y ,   c a l l   @ r e f 
   *     g l f w G e t T i m e r F r e q u e n c y . 
   * 
   *     @ r e t u r n   T h e   v a l u e   o f   t h e   t i m e r ,   o r   z e r o   i f   a n 
   *     [ e r r o r ] ( @ r e f   e r r o r _ h a n d l i n g )   o c c u r r e d . 
   * 
   *     @ e r r o r s   P o s s i b l e   e r r o r s   i n c l u d e   @ r e f   G L F W _ N O T _ I N I T I A L I Z E D . 
   * 
   *     @ t h r e a d _ s a f e t y   T h i s   f u n c t i o n   m a y   b e   c a l l e d   f r o m   a n y   t h r e a d . 
   * 
   *     @ s a   @ r e f   t i m e 
   *     @ s a   @ r e f   g l f w G e t T i m e r F r e q u e n c y 
   * 
   *     @ s i n c e   A d d e d   i n   v e r s i o n   3 . 2 . 
   * 
   *     @ i n g r o u p   i n p u t 
   * / 
 G L F W A P I   u i n t 6 4 _ t   g l f w G e t T i m e r V a l u e ( v o i d ) ; 
 
 / * !   @ b r i e f   R e t u r n s   t h e   f r e q u e n c y ,   i n   H z ,   o f   t h e   r a w   t i m e r . 
   * 
   *     T h i s   f u n c t i o n   r e t u r n s   t h e   f r e q u e n c y ,   i n   H z ,   o f   t h e   r a w   t i m e r . 
   * 
   *     @ r e t u r n   T h e   f r e q u e n c y   o f   t h e   t i m e r ,   i n   H z ,   o r   z e r o   i f   a n 
   *     [ e r r o r ] ( @ r e f   e r r o r _ h a n d l i n g )   o c c u r r e d . 
   * 
   *     @ e r r o r s   P o s s i b l e   e r r o r s   i n c l u d e   @ r e f   G L F W _ N O T _ I N I T I A L I Z E D . 
   * 
   *     @ t h r e a d _ s a f e t y   T h i s   f u n c t i o n   m a y   b e   c a l l e d   f r o m   a n y   t h r e a d . 
   * 
   *     @ s a   @ r e f   t i m e 
   *     @ s a   @ r e f   g l f w G e t T i m e r V a l u e 
   * 
   *     @ s i n c e   A d d e d   i n   v e r s i o n   3 . 2 . 
   * 
   *     @ i n g r o u p   i n p u t 
   * / 
 G L F W A P I   u i n t 6 4 _ t   g l f w G e t T i m e r F r e q u e n c y ( v o i d ) ; 
 
 / * !   @ b r i e f   M a k e s   t h e   c o n t e x t   o f   t h e   s p e c i f i e d   w i n d o w   c u r r e n t   f o r   t h e   c a l l i n g 
   *     t h r e a d . 
   * 
   *     T h i s   f u n c t i o n   m a k e s   t h e   O p e n G L   o r   O p e n G L   E S   c o n t e x t   o f   t h e   s p e c i f i e d   w i n d o w 
   *     c u r r e n t   o n   t h e   c a l l i n g   t h r e a d .     A   c o n t e x t   m u s t   o n l y   b e   m a d e   c u r r e n t   o n 
   *     a   s i n g l e   t h r e a d   a t   a   t i m e   a n d   e a c h   t h r e a d   c a n   h a v e   o n l y   a   s i n g l e   c u r r e n t 
   *     c o n t e x t   a t   a   t i m e . 
   * 
   *     W h e n   m o v i n g   a   c o n t e x t   b e t w e e n   t h r e a d s ,   y o u   m u s t   m a k e   i t   n o n - c u r r e n t   o n   t h e 
   *     o l d   t h r e a d   b e f o r e   m a k i n g   i t   c u r r e n t   o n   t h e   n e w   o n e . 
   * 
   *     B y   d e f a u l t ,   m a k i n g   a   c o n t e x t   n o n - c u r r e n t   i m p l i c i t l y   f o r c e s   a   p i p e l i n e   f l u s h . 
   *     O n   m a c h i n e s   t h a t   s u p p o r t   ` G L _ K H R _ c o n t e x t _ f l u s h _ c o n t r o l ` ,   y o u   c a n   c o n t r o l 
   *     w h e t h e r   a   c o n t e x t   p e r f o r m s   t h i s   f l u s h   b y   s e t t i n g   t h e 
   *     [ G L F W _ C O N T E X T _ R E L E A S E _ B E H A V I O R ] ( @ r e f   G L F W _ C O N T E X T _ R E L E A S E _ B E H A V I O R _ h i n t ) 
   *     h i n t . 
   * 
   *     T h e   s p e c i f i e d   w i n d o w   m u s t   h a v e   a n   O p e n G L   o r   O p e n G L   E S   c o n t e x t .     S p e c i f y i n g 
   *     a   w i n d o w   w i t h o u t   a   c o n t e x t   w i l l   g e n e r a t e   a   @ r e f   G L F W _ N O _ W I N D O W _ C O N T E X T 
   *     e r r o r . 
   * 
   *     @ p a r a m [ i n ]   w i n d o w   T h e   w i n d o w   w h o s e   c o n t e x t   t o   m a k e   c u r r e n t ,   o r   ` N U L L `   t o 
   *     d e t a c h   t h e   c u r r e n t   c o n t e x t . 
   * 
   *     @ e r r o r s   P o s s i b l e   e r r o r s   i n c l u d e   @ r e f   G L F W _ N O T _ I N I T I A L I Z E D ,   @ r e f 
   *     G L F W _ N O _ W I N D O W _ C O N T E X T   a n d   @ r e f   G L F W _ P L A T F O R M _ E R R O R . 
   * 
   *     @ t h r e a d _ s a f e t y   T h i s   f u n c t i o n   m a y   b e   c a l l e d   f r o m   a n y   t h r e a d . 
   * 
   *     @ s a   @ r e f   c o n t e x t _ c u r r e n t 
   *     @ s a   @ r e f   g l f w G e t C u r r e n t C o n t e x t 
   * 
   *     @ s i n c e   A d d e d   i n   v e r s i o n   3 . 0 . 
   * 
   *     @ i n g r o u p   c o n t e x t 
   * / 
 G L F W A P I   v o i d   g l f w M a k e C o n t e x t C u r r e n t ( G L F W w i n d o w *   w i n d o w ) ; 
 
 / * !   @ b r i e f   R e t u r n s   t h e   w i n d o w   w h o s e   c o n t e x t   i s   c u r r e n t   o n   t h e   c a l l i n g   t h r e a d . 
   * 
   *     T h i s   f u n c t i o n   r e t u r n s   t h e   w i n d o w   w h o s e   O p e n G L   o r   O p e n G L   E S   c o n t e x t   i s 
   *     c u r r e n t   o n   t h e   c a l l i n g   t h r e a d . 
   * 
   *     @ r e t u r n   T h e   w i n d o w   w h o s e   c o n t e x t   i s   c u r r e n t ,   o r   ` N U L L `   i f   n o   w i n d o w ' s 
   *     c o n t e x t   i s   c u r r e n t . 
   * 
   *     @ e r r o r s   P o s s i b l e   e r r o r s   i n c l u d e   @ r e f   G L F W _ N O T _ I N I T I A L I Z E D . 
   * 
   *     @ t h r e a d _ s a f e t y   T h i s   f u n c t i o n   m a y   b e   c a l l e d   f r o m   a n y   t h r e a d . 
   * 
   *     @ s a   @ r e f   c o n t e x t _ c u r r e n t 
   *     @ s a   @ r e f   g l f w M a k e C o n t e x t C u r r e n t 
   * 
   *     @ s i n c e   A d d e d   i n   v e r s i o n   3 . 0 . 
   * 
   *     @ i n g r o u p   c o n t e x t 
   * / 
 G L F W A P I   G L F W w i n d o w *   g l f w G e t C u r r e n t C o n t e x t ( v o i d ) ; 
 
 / * !   @ b r i e f   S w a p s   t h e   f r o n t   a n d   b a c k   b u f f e r s   o f   t h e   s p e c i f i e d   w i n d o w . 
   * 
   *     T h i s   f u n c t i o n   s w a p s   t h e   f r o n t   a n d   b a c k   b u f f e r s   o f   t h e   s p e c i f i e d   w i n d o w   w h e n 
   *     r e n d e r i n g   w i t h   O p e n G L   o r   O p e n G L   E S .     I f   t h e   s w a p   i n t e r v a l   i s   g r e a t e r   t h a n 
   *     z e r o ,   t h e   G P U   d r i v e r   w a i t s   t h e   s p e c i f i e d   n u m b e r   o f   s c r e e n   u p d a t e s   b e f o r e 
   *     s w a p p i n g   t h e   b u f f e r s . 
   * 
   *     T h e   s p e c i f i e d   w i n d o w   m u s t   h a v e   a n   O p e n G L   o r   O p e n G L   E S   c o n t e x t .     S p e c i f y i n g 
   *     a   w i n d o w   w i t h o u t   a   c o n t e x t   w i l l   g e n e r a t e   a   @ r e f   G L F W _ N O _ W I N D O W _ C O N T E X T 
   *     e r r o r . 
   * 
   *     T h i s   f u n c t i o n   d o e s   n o t   a p p l y   t o   V u l k a n .     I f   y o u   a r e   r e n d e r i n g   w i t h   V u l k a n , 
   *     s e e   ` v k Q u e u e P r e s e n t K H R `   i n s t e a d . 
   * 
   *     @ p a r a m [ i n ]   w i n d o w   T h e   w i n d o w   w h o s e   b u f f e r s   t o   s w a p . 
   * 
   *     @ e r r o r s   P o s s i b l e   e r r o r s   i n c l u d e   @ r e f   G L F W _ N O T _ I N I T I A L I Z E D ,   @ r e f 
   *     G L F W _ N O _ W I N D O W _ C O N T E X T   a n d   @ r e f   G L F W _ P L A T F O R M _ E R R O R . 
   * 
   *     @ r e m a r k   _ _ E G L : _ _   T h e   c o n t e x t   o f   t h e   s p e c i f i e d   w i n d o w   m u s t   b e   c u r r e n t   o n   t h e 
   *     c a l l i n g   t h r e a d . 
   * 
   *     @ t h r e a d _ s a f e t y   T h i s   f u n c t i o n   m a y   b e   c a l l e d   f r o m   a n y   t h r e a d . 
   * 
   *     @ s a   @ r e f   b u f f e r _ s w a p 
   *     @ s a   @ r e f   g l f w S w a p I n t e r v a l 
   * 
   *     @ s i n c e   A d d e d   i n   v e r s i o n   1 . 0 . 
   *     @ g l f w 3   A d d e d   w i n d o w   h a n d l e   p a r a m e t e r . 
   * 
   *     @ i n g r o u p   w i n d o w 
   * / 
 G L F W A P I   v o i d   g l f w S w a p B u f f e r s ( G L F W w i n d o w *   w i n d o w ) ; 
 
 / * !   @ b r i e f   S e t s   t h e   s w a p   i n t e r v a l   f o r   t h e   c u r r e n t   c o n t e x t . 
   * 
   *     T h i s   f u n c t i o n   s e t s   t h e   s w a p   i n t e r v a l   f o r   t h e   c u r r e n t   O p e n G L   o r   O p e n G L   E S 
   *     c o n t e x t ,   i . e .   t h e   n u m b e r   o f   s c r e e n   u p d a t e s   t o   w a i t   f r o m   t h e   t i m e   @ r e f 
   *     g l f w S w a p B u f f e r s   w a s   c a l l e d   b e f o r e   s w a p p i n g   t h e   b u f f e r s   a n d   r e t u r n i n g .     T h i s 
   *     i s   s o m e t i m e s   c a l l e d   _ v e r t i c a l   s y n c h r o n i z a t i o n _ ,   _ v e r t i c a l   r e t r a c e 
   *     s y n c h r o n i z a t i o n _   o r   j u s t   _ v s y n c _ . 
   * 
   *     A   c o n t e x t   t h a t   s u p p o r t s   e i t h e r   o f   t h e   ` W G L _ E X T _ s w a p _ c o n t r o l _ t e a r `   a n d 
   *     ` G L X _ E X T _ s w a p _ c o n t r o l _ t e a r `   e x t e n s i o n s   a l s o   a c c e p t s   _ n e g a t i v e _   s w a p 
   *     i n t e r v a l s ,   w h i c h   a l l o w s   t h e   d r i v e r   t o   s w a p   i m m e d i a t e l y   e v e n   i f   a   f r a m e 
   *     a r r i v e s   a   l i t t l e   b i t   l a t e .     Y o u   c a n   c h e c k   f o r   t h e s e   e x t e n s i o n s   w i t h   @ r e f 
   *     g l f w E x t e n s i o n S u p p o r t e d . 
   * 
   *     A   c o n t e x t   m u s t   b e   c u r r e n t   o n   t h e   c a l l i n g   t h r e a d .     C a l l i n g   t h i s   f u n c t i o n 
   *     w i t h o u t   a   c u r r e n t   c o n t e x t   w i l l   c a u s e   a   @ r e f   G L F W _ N O _ C U R R E N T _ C O N T E X T   e r r o r . 
   * 
   *     T h i s   f u n c t i o n   d o e s   n o t   a p p l y   t o   V u l k a n .     I f   y o u   a r e   r e n d e r i n g   w i t h   V u l k a n , 
   *     s e e   t h e   p r e s e n t   m o d e   o f   y o u r   s w a p c h a i n   i n s t e a d . 
   * 
   *     @ p a r a m [ i n ]   i n t e r v a l   T h e   m i n i m u m   n u m b e r   o f   s c r e e n   u p d a t e s   t o   w a i t   f o r 
   *     u n t i l   t h e   b u f f e r s   a r e   s w a p p e d   b y   @ r e f   g l f w S w a p B u f f e r s . 
   * 
   *     @ e r r o r s   P o s s i b l e   e r r o r s   i n c l u d e   @ r e f   G L F W _ N O T _ I N I T I A L I Z E D ,   @ r e f 
   *     G L F W _ N O _ C U R R E N T _ C O N T E X T   a n d   @ r e f   G L F W _ P L A T F O R M _ E R R O R . 
   * 
   *     @ r e m a r k   T h i s   f u n c t i o n   i s   n o t   c a l l e d   d u r i n g   c o n t e x t   c r e a t i o n ,   l e a v i n g   t h e 
   *     s w a p   i n t e r v a l   s e t   t o   w h a t e v e r   i s   t h e   d e f a u l t   f o r   t h a t   A P I .     T h i s   i s   d o n e 
   *     b e c a u s e   s o m e   s w a p   i n t e r v a l   e x t e n s i o n s   u s e d   b y   G L F W   d o   n o t   a l l o w   t h e   s w a p 
   *     i n t e r v a l   t o   b e   r e s e t   t o   z e r o   o n c e   i t   h a s   b e e n   s e t   t o   a   n o n - z e r o   v a l u e . 
   * 
   *     @ r e m a r k   S o m e   G P U   d r i v e r s   d o   n o t   h o n o r   t h e   r e q u e s t e d   s w a p   i n t e r v a l ,   e i t h e r 
   *     b e c a u s e   o f   a   u s e r   s e t t i n g   t h a t   o v e r r i d e s   t h e   a p p l i c a t i o n ' s   r e q u e s t   o r   d u e   t o 
   *     b u g s   i n   t h e   d r i v e r . 
   * 
   *     @ t h r e a d _ s a f e t y   T h i s   f u n c t i o n   m a y   b e   c a l l e d   f r o m   a n y   t h r e a d . 
   * 
   *     @ s a   @ r e f   b u f f e r _ s w a p 
   *     @ s a   @ r e f   g l f w S w a p B u f f e r s 
   * 
   *     @ s i n c e   A d d e d   i n   v e r s i o n   1 . 0 . 
   * 
   *     @ i n g r o u p   c o n t e x t 
   * / 
 G L F W A P I   v o i d   g l f w S w a p I n t e r v a l ( i n t   i n t e r v a l ) ; 
 
 / * !   @ b r i e f   R e t u r n s   w h e t h e r   t h e   s p e c i f i e d   e x t e n s i o n   i s   a v a i l a b l e . 
   * 
   *     T h i s   f u n c t i o n   r e t u r n s   w h e t h e r   t h e   s p e c i f i e d 
   *     [ A P I   e x t e n s i o n ] ( @ r e f   c o n t e x t _ g l e x t )   i s   s u p p o r t e d   b y   t h e   c u r r e n t   O p e n G L   o r 
   *     O p e n G L   E S   c o n t e x t .     I t   s e a r c h e s   b o t h   f o r   c l i e n t   A P I   e x t e n s i o n   a n d   c o n t e x t 
   *     c r e a t i o n   A P I   e x t e n s i o n s . 
   * 
   *     A   c o n t e x t   m u s t   b e   c u r r e n t   o n   t h e   c a l l i n g   t h r e a d .     C a l l i n g   t h i s   f u n c t i o n 
   *     w i t h o u t   a   c u r r e n t   c o n t e x t   w i l l   c a u s e   a   @ r e f   G L F W _ N O _ C U R R E N T _ C O N T E X T   e r r o r . 
   * 
   *     A s   t h i s   f u n c t i o n s   r e t r i e v e s   a n d   s e a r c h e s   o n e   o r   m o r e   e x t e n s i o n   s t r i n g s   e a c h 
   *     c a l l ,   i t   i s   r e c o m m e n d e d   t h a t   y o u   c a c h e   i t s   r e s u l t s   i f   i t   i s   g o i n g   t o   b e   u s e d 
   *     f r e q u e n t l y .     T h e   e x t e n s i o n   s t r i n g s   w i l l   n o t   c h a n g e   d u r i n g   t h e   l i f e t i m e   o f 
   *     a   c o n t e x t ,   s o   t h e r e   i s   n o   d a n g e r   i n   d o i n g   t h i s . 
   * 
   *     T h i s   f u n c t i o n   d o e s   n o t   a p p l y   t o   V u l k a n .     I f   y o u   a r e   u s i n g   V u l k a n ,   s e e   @ r e f 
   *     g l f w G e t R e q u i r e d I n s t a n c e E x t e n s i o n s ,   ` v k E n u m e r a t e I n s t a n c e E x t e n s i o n P r o p e r t i e s ` 
   *     a n d   ` v k E n u m e r a t e D e v i c e E x t e n s i o n P r o p e r t i e s `   i n s t e a d . 
   * 
   *     @ p a r a m [ i n ]   e x t e n s i o n   T h e   A S C I I   e n c o d e d   n a m e   o f   t h e   e x t e n s i o n . 
   *     @ r e t u r n   ` G L F W _ T R U E `   i f   t h e   e x t e n s i o n   i s   a v a i l a b l e ,   o r   ` G L F W _ F A L S E ` 
   *     o t h e r w i s e . 
   * 
   *     @ e r r o r s   P o s s i b l e   e r r o r s   i n c l u d e   @ r e f   G L F W _ N O T _ I N I T I A L I Z E D ,   @ r e f 
   *     G L F W _ N O _ C U R R E N T _ C O N T E X T ,   @ r e f   G L F W _ I N V A L I D _ V A L U E   a n d   @ r e f 
   *     G L F W _ P L A T F O R M _ E R R O R . 
   * 
   *     @ t h r e a d _ s a f e t y   T h i s   f u n c t i o n   m a y   b e   c a l l e d   f r o m   a n y   t h r e a d . 
   * 
   *     @ s a   @ r e f   c o n t e x t _ g l e x t 
   *     @ s a   @ r e f   g l f w G e t P r o c A d d r e s s 
   * 
   *     @ s i n c e   A d d e d   i n   v e r s i o n   1 . 0 . 
   * 
   *     @ i n g r o u p   c o n t e x t 
   * / 
 G L F W A P I   i n t   g l f w E x t e n s i o n S u p p o r t e d ( c o n s t   c h a r *   e x t e n s i o n ) ; 
 
 / * !   @ b r i e f   R e t u r n s   t h e   a d d r e s s   o f   t h e   s p e c i f i e d   f u n c t i o n   f o r   t h e   c u r r e n t 
   *     c o n t e x t . 
   * 
   *     T h i s   f u n c t i o n   r e t u r n s   t h e   a d d r e s s   o f   t h e   s p e c i f i e d   O p e n G L   o r   O p e n G L   E S 
   *     [ c o r e   o r   e x t e n s i o n   f u n c t i o n ] ( @ r e f   c o n t e x t _ g l e x t ) ,   i f   i t   i s   s u p p o r t e d 
   *     b y   t h e   c u r r e n t   c o n t e x t . 
   * 
   *     A   c o n t e x t   m u s t   b e   c u r r e n t   o n   t h e   c a l l i n g   t h r e a d .     C a l l i n g   t h i s   f u n c t i o n 
   *     w i t h o u t   a   c u r r e n t   c o n t e x t   w i l l   c a u s e   a   @ r e f   G L F W _ N O _ C U R R E N T _ C O N T E X T   e r r o r . 
   * 
   *     T h i s   f u n c t i o n   d o e s   n o t   a p p l y   t o   V u l k a n .     I f   y o u   a r e   r e n d e r i n g   w i t h   V u l k a n , 
   *     s e e   @ r e f   g l f w G e t I n s t a n c e P r o c A d d r e s s ,   ` v k G e t I n s t a n c e P r o c A d d r `   a n d 
   *     ` v k G e t D e v i c e P r o c A d d r `   i n s t e a d . 
   * 
   *     @ p a r a m [ i n ]   p r o c n a m e   T h e   A S C I I   e n c o d e d   n a m e   o f   t h e   f u n c t i o n . 
   *     @ r e t u r n   T h e   a d d r e s s   o f   t h e   f u n c t i o n ,   o r   ` N U L L `   i f   a n 
   *     [ e r r o r ] ( @ r e f   e r r o r _ h a n d l i n g )   o c c u r r e d . 
   * 
   *     @ e r r o r s   P o s s i b l e   e r r o r s   i n c l u d e   @ r e f   G L F W _ N O T _ I N I T I A L I Z E D ,   @ r e f 
   *     G L F W _ N O _ C U R R E N T _ C O N T E X T   a n d   @ r e f   G L F W _ P L A T F O R M _ E R R O R . 
   * 
   *     @ r e m a r k   T h e   a d d r e s s   o f   a   g i v e n   f u n c t i o n   i s   n o t   g u a r a n t e e d   t o   b e   t h e   s a m e 
   *     b e t w e e n   c o n t e x t s . 
   * 
   *     @ r e m a r k   T h i s   f u n c t i o n   m a y   r e t u r n   a   n o n - ` N U L L `   a d d r e s s   d e s p i t e   t h e 
   *     a s s o c i a t e d   v e r s i o n   o r   e x t e n s i o n   n o t   b e i n g   a v a i l a b l e .     A l w a y s   c h e c k   t h e 
   *     c o n t e x t   v e r s i o n   o r   e x t e n s i o n   s t r i n g   f i r s t . 
   * 
   *     @ p o i n t e r _ l i f e t i m e   T h e   r e t u r n e d   f u n c t i o n   p o i n t e r   i s   v a l i d   u n t i l   t h e   c o n t e x t 
   *     i s   d e s t r o y e d   o r   t h e   l i b r a r y   i s   t e r m i n a t e d . 
   * 
   *     @ t h r e a d _ s a f e t y   T h i s   f u n c t i o n   m a y   b e   c a l l e d   f r o m   a n y   t h r e a d . 
   * 
   *     @ s a   @ r e f   c o n t e x t _ g l e x t 
   *     @ s a   @ r e f   g l f w E x t e n s i o n S u p p o r t e d 
   * 
   *     @ s i n c e   A d d e d   i n   v e r s i o n   1 . 0 . 
   * 
   *     @ i n g r o u p   c o n t e x t 
   * / 
 G L F W A P I   G L F W g l p r o c   g l f w G e t P r o c A d d r e s s ( c o n s t   c h a r *   p r o c n a m e ) ; 
 
 / * !   @ b r i e f   R e t u r n s   w h e t h e r   t h e   V u l k a n   l o a d e r   a n d   a n   I C D   h a v e   b e e n   f o u n d . 
   * 
   *     T h i s   f u n c t i o n   r e t u r n s   w h e t h e r   t h e   V u l k a n   l o a d e r   a n d   a n y   m i n i m a l l y   f u n c t i o n a l 
   *     I C D   h a v e   b e e n   f o u n d . 
   * 
   *     T h e   a v a i l a b i l i t y   o f   a   V u l k a n   l o a d e r   a n d   e v e n   a n   I C D   d o e s   n o t   b y   i t s e l f   g u a r a n t e e   t h a t 
   *     s u r f a c e   c r e a t i o n   o r   e v e n   i n s t a n c e   c r e a t i o n   i s   p o s s i b l e .     C a l l   @ r e f 
   *     g l f w G e t R e q u i r e d I n s t a n c e E x t e n s i o n s   t o   c h e c k   w h e t h e r   t h e   e x t e n s i o n s   n e c e s s a r y   f o r   V u l k a n 
   *     s u r f a c e   c r e a t i o n   a r e   a v a i l a b l e   a n d   @ r e f   g l f w G e t P h y s i c a l D e v i c e P r e s e n t a t i o n S u p p o r t   t o 
   *     c h e c k   w h e t h e r   a   q u e u e   f a m i l y   o f   a   p h y s i c a l   d e v i c e   s u p p o r t s   i m a g e   p r e s e n t a t i o n . 
   * 
   *     @ r e t u r n   ` G L F W _ T R U E `   i f   V u l k a n   i s   m i n i m a l l y   a v a i l a b l e ,   o r   ` G L F W _ F A L S E ` 
   *     o t h e r w i s e . 
   * 
   *     @ e r r o r s   P o s s i b l e   e r r o r s   i n c l u d e   @ r e f   G L F W _ N O T _ I N I T I A L I Z E D . 
   * 
   *     @ t h r e a d _ s a f e t y   T h i s   f u n c t i o n   m a y   b e   c a l l e d   f r o m   a n y   t h r e a d . 
   * 
   *     @ s a   @ r e f   v u l k a n _ s u p p o r t 
   * 
   *     @ s i n c e   A d d e d   i n   v e r s i o n   3 . 2 . 
   * 
   *     @ i n g r o u p   v u l k a n 
   * / 
 G L F W A P I   i n t   g l f w V u l k a n S u p p o r t e d ( v o i d ) ; 
 
 / * !   @ b r i e f   R e t u r n s   t h e   V u l k a n   i n s t a n c e   e x t e n s i o n s   r e q u i r e d   b y   G L F W . 
   * 
   *     T h i s   f u n c t i o n   r e t u r n s   a n   a r r a y   o f   n a m e s   o f   V u l k a n   i n s t a n c e   e x t e n s i o n s   r e q u i r e d 
   *     b y   G L F W   f o r   c r e a t i n g   V u l k a n   s u r f a c e s   f o r   G L F W   w i n d o w s .     I f   s u c c e s s f u l ,   t h e 
   *     l i s t   w i l l   a l w a y s   c o n t a i n   ` V K _ K H R _ s u r f a c e ` ,   s o   i f   y o u   d o n ' t   r e q u i r e   a n y 
   *     a d d i t i o n a l   e x t e n s i o n s   y o u   c a n   p a s s   t h i s   l i s t   d i r e c t l y   t o   t h e 
   *     ` V k I n s t a n c e C r e a t e I n f o `   s t r u c t . 
   * 
   *     I f   V u l k a n   i s   n o t   a v a i l a b l e   o n   t h e   m a c h i n e ,   t h i s   f u n c t i o n   r e t u r n s   ` N U L L `   a n d 
   *     g e n e r a t e s   a   @ r e f   G L F W _ A P I _ U N A V A I L A B L E   e r r o r .     C a l l   @ r e f   g l f w V u l k a n S u p p o r t e d 
   *     t o   c h e c k   w h e t h e r   V u l k a n   i s   a t   l e a s t   m i n i m a l l y   a v a i l a b l e . 
   * 
   *     I f   V u l k a n   i s   a v a i l a b l e   b u t   n o   s e t   o f   e x t e n s i o n s   a l l o w i n g   w i n d o w   s u r f a c e 
   *     c r e a t i o n   w a s   f o u n d ,   t h i s   f u n c t i o n   r e t u r n s   ` N U L L ` .     Y o u   m a y   s t i l l   u s e   V u l k a n 
   *     f o r   o f f - s c r e e n   r e n d e r i n g   a n d   c o m p u t e   w o r k . 
   * 
   *     @ p a r a m [ o u t ]   c o u n t   W h e r e   t o   s t o r e   t h e   n u m b e r   o f   e x t e n s i o n s   i n   t h e   r e t u r n e d 
   *     a r r a y .     T h i s   i s   s e t   t o   z e r o   i f   a n   e r r o r   o c c u r r e d . 
   *     @ r e t u r n   A n   a r r a y   o f   A S C I I   e n c o d e d   e x t e n s i o n   n a m e s ,   o r   ` N U L L `   i f   a n 
   *     [ e r r o r ] ( @ r e f   e r r o r _ h a n d l i n g )   o c c u r r e d . 
   * 
   *     @ e r r o r s   P o s s i b l e   e r r o r s   i n c l u d e   @ r e f   G L F W _ N O T _ I N I T I A L I Z E D   a n d   @ r e f 
   *     G L F W _ A P I _ U N A V A I L A B L E . 
   * 
   *     @ r e m a r k   A d d i t i o n a l   e x t e n s i o n s   m a y   b e   r e q u i r e d   b y   f u t u r e   v e r s i o n s   o f   G L F W . 
   *     Y o u   s h o u l d   c h e c k   i f   a n y   e x t e n s i o n s   y o u   w i s h   t o   e n a b l e   a r e   a l r e a d y   i n   t h e 
   *     r e t u r n e d   a r r a y ,   a s   i t   i s   a n   e r r o r   t o   s p e c i f y   a n   e x t e n s i o n   m o r e   t h a n   o n c e   i n 
   *     t h e   ` V k I n s t a n c e C r e a t e I n f o `   s t r u c t . 
   * 
   *     @ p o i n t e r _ l i f e t i m e   T h e   r e t u r n e d   a r r a y   i s   a l l o c a t e d   a n d   f r e e d   b y   G L F W .     Y o u 
   *     s h o u l d   n o t   f r e e   i t   y o u r s e l f .     I t   i s   g u a r a n t e e d   t o   b e   v a l i d   o n l y   u n t i l   t h e 
   *     l i b r a r y   i s   t e r m i n a t e d . 
   * 
   *     @ t h r e a d _ s a f e t y   T h i s   f u n c t i o n   m a y   b e   c a l l e d   f r o m   a n y   t h r e a d . 
   * 
   *     @ s a   @ r e f   v u l k a n _ e x t 
   *     @ s a   @ r e f   g l f w C r e a t e W i n d o w S u r f a c e 
   * 
   *     @ s i n c e   A d d e d   i n   v e r s i o n   3 . 2 . 
   * 
   *     @ i n g r o u p   v u l k a n 
   * / 
 G L F W A P I   c o n s t   c h a r * *   g l f w G e t R e q u i r e d I n s t a n c e E x t e n s i o n s ( u i n t 3 2 _ t *   c o u n t ) ; 
 
 # i f   d e f i n e d ( V K _ V E R S I O N _ 1 _ 0 ) 
 
 / * !   @ b r i e f   R e t u r n s   t h e   a d d r e s s   o f   t h e   s p e c i f i e d   V u l k a n   i n s t a n c e   f u n c t i o n . 
   * 
   *     T h i s   f u n c t i o n   r e t u r n s   t h e   a d d r e s s   o f   t h e   s p e c i f i e d   V u l k a n   c o r e   o r   e x t e n s i o n 
   *     f u n c t i o n   f o r   t h e   s p e c i f i e d   i n s t a n c e .     I f   i n s t a n c e   i s   s e t   t o   ` N U L L `   i t   c a n 
   *     r e t u r n   a n y   f u n c t i o n   e x p o r t e d   f r o m   t h e   V u l k a n   l o a d e r ,   i n c l u d i n g   a t   l e a s t   t h e 
   *     f o l l o w i n g   f u n c t i o n s : 
   * 
   *     -   ` v k E n u m e r a t e I n s t a n c e E x t e n s i o n P r o p e r t i e s ` 
   *     -   ` v k E n u m e r a t e I n s t a n c e L a y e r P r o p e r t i e s ` 
   *     -   ` v k C r e a t e I n s t a n c e ` 
   *     -   ` v k G e t I n s t a n c e P r o c A d d r ` 
   * 
   *     I f   V u l k a n   i s   n o t   a v a i l a b l e   o n   t h e   m a c h i n e ,   t h i s   f u n c t i o n   r e t u r n s   ` N U L L `   a n d 
   *     g e n e r a t e s   a   @ r e f   G L F W _ A P I _ U N A V A I L A B L E   e r r o r .     C a l l   @ r e f   g l f w V u l k a n S u p p o r t e d 
   *     t o   c h e c k   w h e t h e r   V u l k a n   i s   a t   l e a s t   m i n i m a l l y   a v a i l a b l e . 
   * 
   *     T h i s   f u n c t i o n   i s   e q u i v a l e n t   t o   c a l l i n g   ` v k G e t I n s t a n c e P r o c A d d r `   w i t h 
   *     a   p l a t f o r m - s p e c i f i c   q u e r y   o f   t h e   V u l k a n   l o a d e r   a s   a   f a l l b a c k . 
   * 
   *     @ p a r a m [ i n ]   i n s t a n c e   T h e   V u l k a n   i n s t a n c e   t o   q u e r y ,   o r   ` N U L L `   t o   r e t r i e v e 
   *     f u n c t i o n s   r e l a t e d   t o   i n s t a n c e   c r e a t i o n . 
   *     @ p a r a m [ i n ]   p r o c n a m e   T h e   A S C I I   e n c o d e d   n a m e   o f   t h e   f u n c t i o n . 
   *     @ r e t u r n   T h e   a d d r e s s   o f   t h e   f u n c t i o n ,   o r   ` N U L L `   i f   a n 
   *     [ e r r o r ] ( @ r e f   e r r o r _ h a n d l i n g )   o c c u r r e d . 
   * 
   *     @ e r r o r s   P o s s i b l e   e r r o r s   i n c l u d e   @ r e f   G L F W _ N O T _ I N I T I A L I Z E D   a n d   @ r e f 
   *     G L F W _ A P I _ U N A V A I L A B L E . 
   * 
   *     @ p o i n t e r _ l i f e t i m e   T h e   r e t u r n e d   f u n c t i o n   p o i n t e r   i s   v a l i d   u n t i l   t h e   l i b r a r y 
   *     i s   t e r m i n a t e d . 
   * 
   *     @ t h r e a d _ s a f e t y   T h i s   f u n c t i o n   m a y   b e   c a l l e d   f r o m   a n y   t h r e a d . 
   * 
   *     @ s a   @ r e f   v u l k a n _ p r o c 
   * 
   *     @ s i n c e   A d d e d   i n   v e r s i o n   3 . 2 . 
   * 
   *     @ i n g r o u p   v u l k a n 
   * / 
 G L F W A P I   G L F W v k p r o c   g l f w G e t I n s t a n c e P r o c A d d r e s s ( V k I n s t a n c e   i n s t a n c e ,   c o n s t   c h a r *   p r o c n a m e ) ; 
 
 / * !   @ b r i e f   R e t u r n s   w h e t h e r   t h e   s p e c i f i e d   q u e u e   f a m i l y   c a n   p r e s e n t   i m a g e s . 
   * 
   *     T h i s   f u n c t i o n   r e t u r n s   w h e t h e r   t h e   s p e c i f i e d   q u e u e   f a m i l y   o f   t h e   s p e c i f i e d 
   *     p h y s i c a l   d e v i c e   s u p p o r t s   p r e s e n t a t i o n   t o   t h e   p l a t f o r m   G L F W   w a s   b u i l t   f o r . 
   * 
   *     I f   V u l k a n   o r   t h e   r e q u i r e d   w i n d o w   s u r f a c e   c r e a t i o n   i n s t a n c e   e x t e n s i o n s   a r e 
   *     n o t   a v a i l a b l e   o n   t h e   m a c h i n e ,   o r   i f   t h e   s p e c i f i e d   i n s t a n c e   w a s   n o t   c r e a t e d 
   *     w i t h   t h e   r e q u i r e d   e x t e n s i o n s ,   t h i s   f u n c t i o n   r e t u r n s   ` G L F W _ F A L S E `   a n d 
   *     g e n e r a t e s   a   @ r e f   G L F W _ A P I _ U N A V A I L A B L E   e r r o r .     C a l l   @ r e f   g l f w V u l k a n S u p p o r t e d 
   *     t o   c h e c k   w h e t h e r   V u l k a n   i s   a t   l e a s t   m i n i m a l l y   a v a i l a b l e   a n d   @ r e f 
   *     g l f w G e t R e q u i r e d I n s t a n c e E x t e n s i o n s   t o   c h e c k   w h a t   i n s t a n c e   e x t e n s i o n s   a r e 
   *     r e q u i r e d . 
   * 
   *     @ p a r a m [ i n ]   i n s t a n c e   T h e   i n s t a n c e   t h a t   t h e   p h y s i c a l   d e v i c e   b e l o n g s   t o . 
   *     @ p a r a m [ i n ]   d e v i c e   T h e   p h y s i c a l   d e v i c e   t h a t   t h e   q u e u e   f a m i l y   b e l o n g s   t o . 
   *     @ p a r a m [ i n ]   q u e u e f a m i l y   T h e   i n d e x   o f   t h e   q u e u e   f a m i l y   t o   q u e r y . 
   *     @ r e t u r n   ` G L F W _ T R U E `   i f   t h e   q u e u e   f a m i l y   s u p p o r t s   p r e s e n t a t i o n ,   o r 
   *     ` G L F W _ F A L S E `   o t h e r w i s e . 
   * 
   *     @ e r r o r s   P o s s i b l e   e r r o r s   i n c l u d e   @ r e f   G L F W _ N O T _ I N I T I A L I Z E D ,   @ r e f 
   *     G L F W _ A P I _ U N A V A I L A B L E   a n d   @ r e f   G L F W _ P L A T F O R M _ E R R O R . 
   * 
   *     @ r e m a r k   @ m a c o s   T h i s   f u n c t i o n   c u r r e n t l y   a l w a y s   r e t u r n s   ` G L F W _ T R U E ` ,   a s   t h e 
   *     ` V K _ M V K _ m a c o s _ s u r f a c e `   a n d   ` V K _ E X T _ m e t a l _ s u r f a c e `   e x t e n s i o n s   d o   n o t   p r o v i d e 
   *     a   ` v k G e t P h y s i c a l D e v i c e * P r e s e n t a t i o n S u p p o r t `   t y p e   f u n c t i o n . 
   * 
   *     @ t h r e a d _ s a f e t y   T h i s   f u n c t i o n   m a y   b e   c a l l e d   f r o m   a n y   t h r e a d .     F o r 
   *     s y n c h r o n i z a t i o n   d e t a i l s   o f   V u l k a n   o b j e c t s ,   s e e   t h e   V u l k a n   s p e c i f i c a t i o n . 
   * 
   *     @ s a   @ r e f   v u l k a n _ p r e s e n t 
   * 
   *     @ s i n c e   A d d e d   i n   v e r s i o n   3 . 2 . 
   * 
   *     @ i n g r o u p   v u l k a n 
   * / 
 G L F W A P I   i n t   g l f w G e t P h y s i c a l D e v i c e P r e s e n t a t i o n S u p p o r t ( V k I n s t a n c e   i n s t a n c e ,   V k P h y s i c a l D e v i c e   d e v i c e ,   u i n t 3 2 _ t   q u e u e f a m i l y ) ; 
 
 / * !   @ b r i e f   C r e a t e s   a   V u l k a n   s u r f a c e   f o r   t h e   s p e c i f i e d   w i n d o w . 
   * 
   *     T h i s   f u n c t i o n   c r e a t e s   a   V u l k a n   s u r f a c e   f o r   t h e   s p e c i f i e d   w i n d o w . 
   * 
   *     I f   t h e   V u l k a n   l o a d e r   o r   a t   l e a s t   o n e   m i n i m a l l y   f u n c t i o n a l   I C D   w e r e   n o t   f o u n d , 
   *     t h i s   f u n c t i o n   r e t u r n s   ` V K _ E R R O R _ I N I T I A L I Z A T I O N _ F A I L E D `   a n d   g e n e r a t e s   a   @ r e f 
   *     G L F W _ A P I _ U N A V A I L A B L E   e r r o r .     C a l l   @ r e f   g l f w V u l k a n S u p p o r t e d   t o   c h e c k   w h e t h e r 
   *     V u l k a n   i s   a t   l e a s t   m i n i m a l l y   a v a i l a b l e . 
   * 
   *     I f   t h e   r e q u i r e d   w i n d o w   s u r f a c e   c r e a t i o n   i n s t a n c e   e x t e n s i o n s   a r e   n o t 
   *     a v a i l a b l e   o r   i f   t h e   s p e c i f i e d   i n s t a n c e   w a s   n o t   c r e a t e d   w i t h   t h e s e   e x t e n s i o n s 
   *     e n a b l e d ,   t h i s   f u n c t i o n   r e t u r n s   ` V K _ E R R O R _ E X T E N S I O N _ N O T _ P R E S E N T `   a n d 
   *     g e n e r a t e s   a   @ r e f   G L F W _ A P I _ U N A V A I L A B L E   e r r o r .     C a l l   @ r e f 
   *     g l f w G e t R e q u i r e d I n s t a n c e E x t e n s i o n s   t o   c h e c k   w h a t   i n s t a n c e   e x t e n s i o n s   a r e 
   *     r e q u i r e d . 
   * 
   *     T h e   w i n d o w   s u r f a c e   c a n n o t   b e   s h a r e d   w i t h   a n o t h e r   A P I   s o   t h e   w i n d o w   m u s t 
   *     h a v e   b e e n   c r e a t e d   w i t h   t h e   [ c l i e n t   a p i   h i n t ] ( @ r e f   G L F W _ C L I E N T _ A P I _ a t t r i b ) 
   *     s e t   t o   ` G L F W _ N O _ A P I `   o t h e r w i s e   i t   g e n e r a t e s   a   @ r e f   G L F W _ I N V A L I D _ V A L U E   e r r o r 
   *     a n d   r e t u r n s   ` V K _ E R R O R _ N A T I V E _ W I N D O W _ I N _ U S E _ K H R ` . 
   * 
   *     T h e   w i n d o w   s u r f a c e   m u s t   b e   d e s t r o y e d   b e f o r e   t h e   s p e c i f i e d   V u l k a n   i n s t a n c e . 
   *     I t   i s   t h e   r e s p o n s i b i l i t y   o f   t h e   c a l l e r   t o   d e s t r o y   t h e   w i n d o w   s u r f a c e .     G L F W 
   *     d o e s   n o t   d e s t r o y   i t   f o r   y o u .     C a l l   ` v k D e s t r o y S u r f a c e K H R `   t o   d e s t r o y   t h e 
   *     s u r f a c e . 
   * 
   *     @ p a r a m [ i n ]   i n s t a n c e   T h e   V u l k a n   i n s t a n c e   t o   c r e a t e   t h e   s u r f a c e   i n . 
   *     @ p a r a m [ i n ]   w i n d o w   T h e   w i n d o w   t o   c r e a t e   t h e   s u r f a c e   f o r . 
   *     @ p a r a m [ i n ]   a l l o c a t o r   T h e   a l l o c a t o r   t o   u s e ,   o r   ` N U L L `   t o   u s e   t h e   d e f a u l t 
   *     a l l o c a t o r . 
   *     @ p a r a m [ o u t ]   s u r f a c e   W h e r e   t o   s t o r e   t h e   h a n d l e   o f   t h e   s u r f a c e .     T h i s   i s   s e t 
   *     t o   ` V K _ N U L L _ H A N D L E `   i f   a n   e r r o r   o c c u r r e d . 
   *     @ r e t u r n   ` V K _ S U C C E S S `   i f   s u c c e s s f u l ,   o r   a   V u l k a n   e r r o r   c o d e   i f   a n 
   *     [ e r r o r ] ( @ r e f   e r r o r _ h a n d l i n g )   o c c u r r e d . 
   * 
   *     @ e r r o r s   P o s s i b l e   e r r o r s   i n c l u d e   @ r e f   G L F W _ N O T _ I N I T I A L I Z E D ,   @ r e f 
   *     G L F W _ A P I _ U N A V A I L A B L E ,   @ r e f   G L F W _ P L A T F O R M _ E R R O R   a n d   @ r e f   G L F W _ I N V A L I D _ V A L U E 
   * 
   *     @ r e m a r k   I f   a n   e r r o r   o c c u r s   b e f o r e   t h e   c r e a t i o n   c a l l   i s   m a d e ,   G L F W   r e t u r n s 
   *     t h e   V u l k a n   e r r o r   c o d e   m o s t   a p p r o p r i a t e   f o r   t h e   e r r o r .     A p p r o p r i a t e   u s e   o f 
   *     @ r e f   g l f w V u l k a n S u p p o r t e d   a n d   @ r e f   g l f w G e t R e q u i r e d I n s t a n c e E x t e n s i o n s   s h o u l d 
   *     e l i m i n a t e   a l m o s t   a l l   o c c u r r e n c e s   o f   t h e s e   e r r o r s . 
   * 
   *     @ r e m a r k   @ m a c o s   G L F W   p r e f e r s   t h e   ` V K _ E X T _ m e t a l _ s u r f a c e `   e x t e n s i o n ,   w i t h   t h e 
   *     ` V K _ M V K _ m a c o s _ s u r f a c e `   e x t e n s i o n   a s   a   f a l l b a c k .     T h e   n a m e   o f   t h e   s e l e c t e d 
   *     e x t e n s i o n ,   i f   a n y ,   i s   i n c l u d e d   i n   t h e   a r r a y   r e t u r n e d   b y   @ r e f 
   *     g l f w G e t R e q u i r e d I n s t a n c e E x t e n s i o n s . 
   * 
   *     @ r e m a r k   @ m a c o s   T h i s   f u n c t i o n   c r e a t e s   a n d   s e t s   a   ` C A M e t a l L a y e r `   i n s t a n c e   f o r 
   *     t h e   w i n d o w   c o n t e n t   v i e w ,   w h i c h   i s   r e q u i r e d   f o r   M o l t e n V K   t o   f u n c t i o n . 
   * 
   *     @ r e m a r k   @ x 1 1   B y   d e f a u l t   G L F W   p r e f e r s   t h e   ` V K _ K H R _ x c b _ s u r f a c e `   e x t e n s i o n , 
   *     w i t h   t h e   ` V K _ K H R _ x l i b _ s u r f a c e `   e x t e n s i o n   a s   a   f a l l b a c k .     Y o u   c a n   m a k e 
   *     ` V K _ K H R _ x l i b _ s u r f a c e `   t h e   p r e f e r r e d   e x t e n s i o n   b y   s e t t i n g   t h e 
   *     [ G L F W _ X 1 1 _ X C B _ V U L K A N _ S U R F A C E ] ( @ r e f   G L F W _ X 1 1 _ X C B _ V U L K A N _ S U R F A C E _ h i n t )   i n i t 
   *     h i n t .     T h e   n a m e   o f   t h e   s e l e c t e d   e x t e n s i o n ,   i f   a n y ,   i s   i n c l u d e d   i n   t h e   a r r a y 
   *     r e t u r n e d   b y   @ r e f   g l f w G e t R e q u i r e d I n s t a n c e E x t e n s i o n s . 
   * 
   *     @ t h r e a d _ s a f e t y   T h i s   f u n c t i o n   m a y   b e   c a l l e d   f r o m   a n y   t h r e a d .     F o r 
   *     s y n c h r o n i z a t i o n   d e t a i l s   o f   V u l k a n   o b j e c t s ,   s e e   t h e   V u l k a n   s p e c i f i c a t i o n . 
   * 
   *     @ s a   @ r e f   v u l k a n _ s u r f a c e 
   *     @ s a   @ r e f   g l f w G e t R e q u i r e d I n s t a n c e E x t e n s i o n s 
   * 
   *     @ s i n c e   A d d e d   i n   v e r s i o n   3 . 2 . 
   * 
   *     @ i n g r o u p   v u l k a n 
   * / 
 G L F W A P I   V k R e s u l t   g l f w C r e a t e W i n d o w S u r f a c e ( V k I n s t a n c e   i n s t a n c e ,   G L F W w i n d o w *   w i n d o w ,   c o n s t   V k A l l o c a t i o n C a l l b a c k s *   a l l o c a t o r ,   V k S u r f a c e K H R *   s u r f a c e ) ; 
 
 # e n d i f   / * V K _ V E R S I O N _ 1 _ 0 * / 
 
 
 / * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * 
   *   G l o b a l   d e f i n i t i o n   c l e a n u p 
   * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * / 
 
 / *   - - - - - - - - - - - - - - - - - - -   B E G I N   S Y S T E M / C O M P I L E R   S P E C I F I C   - - - - - - - - - - - - - - - - - - - -   * / 
 
 # i f d e f   G L F W _ W I N G D I A P I _ D E F I N E D 
   # u n d e f   W I N G D I A P I 
   # u n d e f   G L F W _ W I N G D I A P I _ D E F I N E D 
 # e n d i f 
 
 # i f d e f   G L F W _ C A L L B A C K _ D E F I N E D 
   # u n d e f   C A L L B A C K 
   # u n d e f   G L F W _ C A L L B A C K _ D E F I N E D 
 # e n d i f 
 
 / *   S o m e   O p e n G L   r e l a t e d   h e a d e r s   n e e d   G L A P I E N T R Y ,   b u t   i t   i s   u n c o n d i t i o n a l l y 
   *   d e f i n e d   b y   s o m e   g l . h   v a r i a n t s   ( O p e n B S D )   s o   d e f i n e   i t   a f t e r   i f   n e e d e d . 
   * / 
 # i f n d e f   G L A P I E N T R Y 
   # d e f i n e   G L A P I E N T R Y   A P I E N T R Y 
   # d e f i n e   G L F W _ G L A P I E N T R Y _ D E F I N E D 
 # e n d i f 
 
 / *   - - - - - - - - - - - - - - - - - - - -   E N D   S Y S T E M / C O M P I L E R   S P E C I F I C   - - - - - - - - - - - - - - - - - - - - -   * / 
 
 
 # i f d e f   _ _ c p l u s p l u s 
 } 
 # e n d i f 
 
 # e n d i f   / *   _ g l f w 3 _ h _   * / 
 
 