-- phpMyAdmin SQL Dump
-- version 4.9.0.1
-- https://www.phpmyadmin.net/
--
-- Servidor: 127.0.0.1
-- Tiempo de generación: 12-11-2019 a las 04:16:05
-- Versión del servidor: 10.4.6-MariaDB
-- Versión de PHP: 7.3.9

SET SQL_MODE = "NO_AUTO_VALUE_ON_ZERO";
SET AUTOCOMMIT = 0;
START TRANSACTION;
SET time_zone = "+00:00";


/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8mb4 */;

--
-- Base de datos: `perfumeria`
--
CREATE DATABASE IF NOT EXISTS `perfumeria` DEFAULT CHARACTER SET latin1 COLLATE latin1_swedish_ci;
USE `perfumeria`;

-- --------------------------------------------------------

--
-- Estructura de tabla para la tabla `productos`
--

CREATE TABLE `productos` (
  `id_producto` int(11) NOT NULL,
  `nombre_producto` varchar(255) DEFAULT NULL,
  `marca_producto` varchar(255) DEFAULT NULL,
  `imagen_producto` varchar(255) DEFAULT NULL,
  `descripcion_producto` varchar(255) DEFAULT NULL,
  `precio_producto` decimal(11,2) DEFAULT NULL,
  `fecha_vencimiento` date DEFAULT NULL,
  `stock_producto` int(11) DEFAULT NULL,
  `proveedor` int(11) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

--
-- Volcado de datos para la tabla `productos`
--

INSERT INTO `productos` (`id_producto`, `nombre_producto`, `marca_producto`, `imagen_producto`, `descripcion_producto`, `precio_producto`, `fecha_vencimiento`, `stock_producto`, `proveedor`) VALUES
(39, 'La Vie Est Belle EDP', 'LANCÔME', 'img_productos/1672937.jpg', '30ml', '2500.00', '2025-05-22', 4, 13213),
(40, 'Classic Fem', 'BURBERRY', 'img_productos/95307.jpg', '30ml', '2800.00', '2026-02-22', 8, 32322),
(41, 'Nuit New', 'YVES SAINT LAURENT', 'img_productos/3102195.jpg', '100ml', '3000.00', '2028-02-22', 4, 13213),
(42, 'La Nuit Trésor Diamant Blanc', 'LANCÔME', 'img_productos/3025254.jpg', '50ml', '2600.00', '2025-02-22', 5, 13213),
(43, 'Good Girl + Good Girl Legere', 'CAROLINA HERRERA', 'img_productos/sku5040001.jpg', '80ml', '2900.00', '2025-02-22', 2, 13213),
(44, '212 VIP Women', 'CAROLINA HERRERA', 'img_productos/1419256.jpg', '50ml', '2000.00', '2025-02-22', 2, 13213),
(45, 'Code men', 'ARMANI', 'img_productos/549853.jpg', '75ml', '2600.00', '2025-02-22', 1, 13213),
(46, 'Si Passione', 'ARMANI', 'img_productos/2875596.jpg', '30ml', '2666.00', '2025-06-22', 1, 13213),
(47, 'Bonbon', 'VIKTOR & ROLF', 'img_productos/2795107.jpg', '30ml', '2800.00', '2025-02-22', 2, 13213),
(48, 'Trésor In Love', 'LANCÔME', 'img_productos/1353606.jpg', '75ml', '6000.00', '2025-02-22', 8, 13213),
(49, 'Woman', 'RALPH LAUREN', 'img_productos/2781108.jpg', '30ml', '2900.00', '2025-02-22', 1, 13213),
(50, 'Ô de Lancôme', 'LANCÔME', 'img_productos/93333.jpg', '75ml', '2900.00', '2026-02-22', 6, 41221),
(52, 'Hypnôse', 'LANCÔME', 'img_productos/894343.jpg', '75ml', '2900.00', '2026-02-22', 6, 13213),
(53, 'In love with you eau de perfum', 'ARMANI', 'img_productos/2993078.jpg', '50ml', '2800.00', '2025-02-22', 3, 32322),
(54, 'Ô dAzur', 'LANCÔME', 'img_productos/1430961.jpg', '75ml', '2900.00', '2028-02-20', 3, 32322),
(55, 'Red Rush', 'RALPH LAUREN', 'img_productos/3005379.jpg', '75ml', '2600.00', '2026-02-22', 3, 41221),
(56, 'DKNY stories', 'DKNY', 'img_productos/2992444.jpg', '30ml', '2900.00', '2026-02-22', 3, 41221),
(57, 'Because Its You', 'ARMANI', 'img_productos/2765626.jpg', '50ml', '2900.00', '2026-02-22', 3, 41221);

-- --------------------------------------------------------

--
-- Estructura de tabla para la tabla `usuarios`
--

CREATE TABLE `usuarios` (
  `id_user` int(11) NOT NULL,
  `nombre` varchar(30) CHARACTER SET utf8 COLLATE utf8_spanish_ci DEFAULT NULL,
  `password` varchar(30) CHARACTER SET utf8 COLLATE utf8_spanish_ci DEFAULT NULL,
  `rol` varchar(30) CHARACTER SET utf8 COLLATE utf8_spanish_ci DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

--
-- Volcado de datos para la tabla `usuarios`
--

INSERT INTO `usuarios` (`id_user`, `nombre`, `password`, `rol`) VALUES
(1, 'hernan', 'hernan', 'administrador'),
(2, 'Manu', 'Manu', 'usuario');

--
-- Índices para tablas volcadas
--

--
-- Indices de la tabla `productos`
--
ALTER TABLE `productos`
  ADD PRIMARY KEY (`id_producto`);

--
-- Indices de la tabla `usuarios`
--
ALTER TABLE `usuarios`
  ADD PRIMARY KEY (`id_user`);

--
-- AUTO_INCREMENT de las tablas volcadas
--

--
-- AUTO_INCREMENT de la tabla `productos`
--
ALTER TABLE `productos`
  MODIFY `id_producto` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=58;

--
-- AUTO_INCREMENT de la tabla `usuarios`
--
ALTER TABLE `usuarios`
  MODIFY `id_user` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=3;
COMMIT;

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
