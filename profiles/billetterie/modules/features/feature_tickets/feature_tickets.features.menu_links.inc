<?php
/**
 * @file
 * feature_tickets.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function feature_tickets_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_spectacles:ticket-office-shows
  $menu_links['main-menu_spectacles:ticket-office-shows'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'ticket-office-shows',
    'router_path' => 'ticket-office-shows',
    'link_title' => 'Spectacles',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_spectacles:ticket-office-shows',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Spectacles');


  return $menu_links;
}
