<?php
function rsi_ws_settings_form() {
	$form['rsi_webservices'] = array(
			'#type' => 'fieldset',
			'#title' => t('RSI Webservices Url'),
	);
	$form['rsi_webservices']['rsi_ws_url'] = array(
			'#type' => 'textfield',
			'#title' => t('URL'),
			'#description' => t('Type in the URL which the RSI box office webservices are available from.'),
			'#size' => 100,
			'#default_value' => variable_get('rsi_ws_url', 'http://billetterie.domaine-do-34.eu/'),
	);
	$form['rsi_webservices']['rsi_ws_show_list_name'] = array(
			'#type' => 'textfield',
			'#title' => t('URL'),
			'#description' => t('Name of the webservice returning the list of shows.'),
			'#size' => 100,
			'#default_value' => variable_get('rsi_ws_show_list_name', 'ws_list_spectacle'),
	);
	$form['rsi_webservices']['rsi_ws_show_name'] = array(
			'#type' => 'textfield',
			'#title' => t('URL'),
			'#description' => t('Name of the webservice returning a show\'s details.'),
			'#size' => 100,
			'#default_value' => variable_get('rsi_ws_show_name', 'ws_spectacle'),
	);
	$form['rsi_webservices']['rsi_ws_event_name'] = array(
			'#type' => 'textfield',
			'#title' => t('URL'),
			'#description' => t('Name of the webservice returning an event\'s details.'),
			'#size' => 100,
			'#default_value' => variable_get('rsi_ws_event_name', 'event'),
	);
	
	return system_settings_form($form);
}