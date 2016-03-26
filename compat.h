#ifndef COMPAT_H
#define COMPAT_H

#include <linux/version.h>

#if LINUX_VERSION_CODE < KERNEL_VERSION(4, 5, 0)
static inline void *gpiochip_get_data(struct gpio_chip *chip)
{
	return chip;
}

int gpiochip_add_data(struct gpio_chip *chip, void *data)
{
	return gpiochip_add(chip);
}
#endif

#endif /* COMPAT_H */
