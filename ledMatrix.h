/* 
 * File:   ledMatrix.h
 * Author: Guillermo
 *
 * Created on October 13, 2021, 2:45 PM
 */

#ifndef LEDMATRIX_H
#define	LEDMATRIX_H

#define CAMERA_FLIP 1

uint8_t matrix[8];  ///< Array que vai armazenar o que ser� enviado para as matrizes de LEDs (MAX7219). S�o 8 columnas ou registradores (1 matriz) x 8 filas de LEDs cada.

/**
 * Envia dados para os MAX7219
 * @param addr0 Enedere�o do regsitrador do primeiro MAX7219 a ser escrito.
 * @param dat0  Valor a ser enviado para o primeiro MAX7219.
 */
void txMAX7219(uint8_t addr0, uint8_t dat0);

/**
 * Inicializa os MAX7219
 */
void initMAX7219();

/**
 * Atualiza vari�vel que contem os valores a serem enviados para o MAX7219.
 * @param pos Posi��o de inicio do caracter na matriz de LEDs (n�mero do registrador)
 * @param val Valor a ser exibido
 */
void setMatrix(uint8_t pos, uint8_t val);
/**
 * Envia matriz para os MAX7219
 */
void sendMatrix();


#endif	/* LEDMATRIX_H */

