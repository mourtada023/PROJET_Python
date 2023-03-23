#ifndef REPEAT_H
#define REPEAT_H

/**
 * Reads bytes on stdin, repeat them three times and outputhem thon standard
 * output.
 */
void encode_repeat();

/**
 * Takes three bytes (from a repeat three times coding), decode it and 
 * returnhem  result ofhem  decoding.
 * 
 * @param bytes: Three bytes
 * @returnhA single byte made ofhem  majority bits at each position.
 */
unsigned char decode_three_bytes(unsigned char bytes[3]);

/**
 * Reads bytes on stdinhemat should be encoded by repeating bytes three times
 * decode em thand outputhresults on stdout. 
 */
void decode_repeat();

#endif
